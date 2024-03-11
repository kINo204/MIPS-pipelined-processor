`timescale 1ns / 1ps

module ctl (
    input [5:0] opcode,
    input [5:0] funct,

    output [1:0] BRANcond,

    output GRFwen,
    output [1:0] GRFwdst,
    output [1:0] GRFwdatsrc,

    output [3:0] ALUfn,
    output ALUshsrc,
    output ALUien,
    output EXTsign,

    output MUDVstart,
    output [2:0] MUDVop,
    output [1:0] MUDVwen,
    output [1:0] ressrc,

    output [1:0] PCsrc,
    output DMwen,

    output [1:0] DMmask,
    output [3:0] DMwbse,
    output [1:0] DMrbse,

    output [1:0] TNinit
);
`include "mips.vh"
`include "alu.vh"
`include "mudv.vh"

// Wires for instruction classes:
wire    Rtype  = (opcode == 6'o00),
        Jump   = (opcode == 6'o02) | (opcode == 6'o03),
        Bran   = (opcode[5:3] == 0) & (opcode[2] == 1),
    Imm    = (opcode[5:3] == 1),
    Load   = (opcode[5:3] == 4), 
    Store  = (opcode[5:3] == 5);
// Wires for special single instruction or special instruction group
wire 
    JR     = Rtype & (funct == 6'o10),

    MDTR   = Rtype & (funct[5:3] == 3'o3), // MUDV trigger
    MDMT   = MTHI | MTLO, // MUDV move_to
        MTHI = Rtype & funct == 6'o21,
        MTLO = Rtype & funct == 6'o23,
    MDMF   = MFHI | MFLO, // MUDV move_from
        MFHI = Rtype & funct == 6'o20,
        MFLO = Rtype & funct == 6'o22,

    ADDI   = (opcode == 6'o10),
    ANDI   = (opcode == 6'o14),
    ORI    = (opcode == 6'o15),
    LUI    = (opcode == 6'o17),

    MB     = (opcode[2:0] == 3'o0),
    MH     = (opcode[2:0] == 3'o1),
    MW     = (opcode[2:0] == 3'o3),

    JAL    = (opcode == 6'o03);


// Main Controller's Ctrl Signals:
assign BRANcond = Bran ? opcode[1:0] : 2'b00;

assign GRFwen =
    (JR | MDTR | MDMT)      ? 0 :
    (JAL)                   ? 1 :
    (Rtype | Imm | Load)    ? 1 :
    0;  // Store | Jump | Bran

assign GRFwdst =
    (JAL)                               ? WDST_RA :
    (Rtype)                             ? WDST_RD :
    WDST_RT; // Imm | Load | Store | Jump | Bran

assign GRFwdatsrc =
    (JAL)                               ? WDSRC_WPC8 :
    (Load)                              ? WDSRC_DM :
    WDSRC_ALU;

assign ALUfn =
    (ADDI)          ? ALUFN_ADD :
    (ANDI)          ? ALUFN_AND :
    (ORI)           ? ALUFN_OR :
    (LUI)           ? ALUFN_SLL :
    (Load | Store)  ? ALUFN_ADD :
    ALUFN_SELF;

assign ALUshsrc = LUI;

assign ALUien = 
    (Imm | Load | Store)  ? 1 :
    0;

assign EXTsign = ~(ORI | ANDI); // + XORI

assign MUDVstart = MDTR;

assign MUDVop = {1'b0, funct[1:0]}; // use funct[1:0] as op

assign MUDVwen =
    MTHI ? 2'b10 :
    MTLO ? 2'b01 :
    2'b00;

assign ressrc =
    MFHI ? 2'b10 :
    MFLO ? 2'b01 :
    2'b00;

assign PCsrc =
    (JR)    ? PCSRC_JREG :
    (Jump)  ? PCSRC_JADD :
    (Bran)  ? PCSRC_BRAN :
    PCSRC_NORM;  // Rtype | Imm | Load | Store

assign DMwen = Store;

assign DMmask =
    (Store | Load) ? (
            MB ? 2'b11 :
            MH ? 2'b10 :
            2'b00
    ) : 2'b00;

assign DMwbse =
    (Store) ? (
            MB ? 4'b0001 :
            MH ? 4'b0011 :
            4'b1111
        ) : 4'b0000; // others

assign DMrbse =
    (Load) ? (
            MB ? 2'b11 :
            MH ? 2'b10 :
            2'b00
    ) : 2'b00;

assign TNinit = // PROVIDERS and their initial TNEWs:
// Be adviced non proveders won't ail stalling for GRFwen is 0.
    (JAL)   ? 0 :
    (Load)  ? 2 :
    1;

endmodule