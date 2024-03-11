`timescale 1ns / 1ps

module ctl (
    input [5:0] opcode,
    input [5:0] funct,
    input [31:0] instr,

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

    output [1:0] TNinit,

    output [1:0] ALUov,
    output [1:0] memop,
    output sysc,
    output ri,

    output CP0wen,
    output mtc0
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

    JAL    = (opcode == 6'o03),

    SYSC   = Rtype & (funct == 6'o14),
    ERET   = instr == 32'h4200_0018,
    MTC0   = (instr & 32'hffe0_07f8) == 32'h4080_0000,
        MTEPC = (instr & 32'hffe0_ffff) == 32'h4080_7000,
    MFC0   = (instr & 32'hffe0_07f8) == 32'h4000_0000;

assign mtc0 = MTC0;
// Is instruction legal?
reg def;

always @* begin : isDefinedInstr
    def = 0;
    case (opcode)
        // Rtype:
        6'o00: begin
            case (funct)
                6'o00: def = 1;//SLL
                6'o10: def = 1;//JR
                6'o14: def = 1;//SYSCALL
                6'o20: def = 1;//MFHI
                6'o21: def = 1;//MTHI
                6'o22: def = 1;//MFLO
                6'o23: def = 1;//MTLO
                6'o30: def = 1;//MULT
                6'o31: def = 1;//MULTU
                6'o32: def = 1;//DIV
                6'o33: def = 1;//DIVU
                6'o40: def = 1;//AND
                6'o42: def = 1;//SUB
                6'o44: def = 1;//AND
                6'o45: def = 1;//OR
                6'o52: def = 1;//SLT
                6'o53: def = 1;//SLTU
                default :;
            endcase
        end

        6'o03: def = 1;//JAL
        6'o04: def = 1;//BEQ
        6'o05: def = 1;//BNE
        6'o10: def = 1;//ADDI
        6'o14: def = 1;//ANDI
        6'o15: def = 1;//ORI
        6'o17: def = 1;//LUI

        6'o20: begin//CP0
            if (ERET | MTC0 | MFC0) def = 1;
        end

        6'o40: def = 1;//LB
        6'o41: def = 1;//LH
        6'o43: def = 1;//LW
        6'o50: def = 1;//SB
        6'o51: def = 1;//SH
        6'o53: def = 1;//SW
        default :;
    endcase
end

// Main Controller's Ctrl Signals:
assign sysc = SYSC;
assign ri = ~def;
assign memop =
    Load  ? MEM_L :
    Store ? MEM_S :
    MEM_N;

assign BRANcond = Bran ? opcode[1:0] : 2'b00;

assign GRFwen =
    (JR | MDTR | MDMT | SYSC) ? 0 :
    (JAL | MFC0)              ? 1 :
    (Rtype | Imm | Load)      ? 1 :
    0;  // Store | Jump | Bran | COP0(other than MFC0)

assign GRFwdst =
    (JAL)                               ? WDST_RA :
    (Rtype | MTC0)                      ? WDST_RD :
    WDST_RT; // Imm | Load | Store | Jump | Bran | MFC0

assign GRFwdatsrc =
    (JAL)  ? WDSRC_WPC8 :
    (MFC0) ? WDSRC_COP0 :
    (Load) ? WDSRC_DM :
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
    PCSRC_NORM;  // Rtype | Imm | Load | Store | COP0

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
    (JAL)           ? 0 :
    (Load | MFC0)   ? 2 :
    1;

assign ALUov = 
    ADDI  ? ALUOV_CALC :
    Load  ? ALUOV_ADEL :
    Store ? ALUOV_ADES :
    ALUOV_NON;

assign CP0wen = MTC0;

endmodule