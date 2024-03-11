`timescale 1ns / 1ps

module ctl (
    input [5:0] opcode,
    input [5:0] funct,

    output GRFwen,
    output [1:0] GRFwdst,
    output [1:0] GRFwdatsrc,

    output [3:0] ALUfn,
    output ALUshsrc,
    output ALUien,
    output EXTsign,
    output [1:0] PCsrc,
    output DMwen,
    output [1:0] TNinit
);
`include "mips.vh"
`include "alu.vh"

// Wires for instruction classes:
wire    Rtype  = (opcode == 6'o00),
        Jump   = (opcode == 6'o02) | (opcode == 6'o03),
        Bran   = (opcode[5:3] == 0) & (opcode[2] == 1),
    Imm    = (opcode[5:3] == 1),
    Load   = (opcode[5:3] == 4), 
    Store  = (opcode[5:3] == 5);
// Wires for special single instructions 
wire 
    JR     = Rtype & (funct == 6'o10),

    ORI    = (opcode == 6'o15),
    LUI    = (opcode == 6'o17),
    JAL    = (opcode == 6'o03);


// Main Controller's Ctrl Signals:
assign GRFwen =
    (JR)                    ? 0 :
    (JAL)                   ? 1 :
    
    (Rtype | Imm | Load)    ? 1 :
    (Store | Jump | Bran)   ? 0 :
    
    0;  // udf

assign GRFwdst =
    (JAL)                               ? WDST_RA :

    (Rtype)                             ? WDST_RD :
    (Imm | Load | Store | Jump | Bran)  ? WDST_RT :
    
    0;  // udf

assign GRFwdatsrc =
    (JAL)                               ? WDSRC_WPC8 :

    (Rtype | Imm | Store | Jump | Bran) ? WDSRC_ALU :
    (Load)                              ? WDSRC_DM :
    
    0; //udf

assign ALUfn =
    (Rtype)         ? ALUFN_SELF :
    (ORI)           ? ALUFN_OR :
    (LUI)           ? ALUFN_SLL :
    (Load | Store)  ? ALUFN_ADD :
    
    0; // udf

assign ALUshsrc = LUI;

assign ALUien = 
    (Rtype | Jump | Bran) ? 0 :
    (Imm | Load | Store)  ? 1 :

    0;  // udf

assign EXTsign = ~ORI; // + ANDI, XORI

assign PCsrc =
    (JR)    ? PCSRC_JREG :

    (Rtype | Imm | Load | Store)    ? PCSRC_NORM :
    (Jump)                          ? PCSRC_JADD :
    (Bran)                          ? PCSRC_BRAN :
    
    0;  // udf

assign DMwen = Store;

assign TNinit =
    (JAL)                 ? 0 :

    (Load)                ? 2 :
    (Imm | Rtype)         ? 1 :
    (Store | Jump | Bran) ? 0 :
    
    0;  // udf


endmodule