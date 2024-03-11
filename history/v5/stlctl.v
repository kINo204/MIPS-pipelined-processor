`timescale 1ns / 1ps

module stlctl (
    input [5:0] opcode,
    input [5:0] funct,
    input [4:0] rs,
    input [4:0] rt,

    input EGRFwen,
    input [4:0] Ewreg,
    input [1:0] Etnew,

    input MGRFwen,
    input [4:0] Mwreg,
    input [1:0] Mtnew,

    output stall
);


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

// Generate tUse(current instr at D stage)
wire [1:0] tUse =
    (JR)                          ? 0 :

    (Bran)                        ? 0 :
    (Rtype | Imm | Load | Store)  ? 1 :
    (Jump)                        ? 0 :
    0;  // udf

// Judging stall: forwarding relation && need a stall
wire stlHit_rs_E =
    EGRFwen && Ewreg != 0  // E/M-instr writes a non-zero register in GRF and
    && rs == Ewreg         // D-instr's READING_REG == E/M-instr's WRITING_REG and
    && Etnew > tUse;       // value can't get ready without stalling.
wire stlHit_rt_E =
    EGRFwen && Ewreg != 0
    && rt == Ewreg
    && Etnew > tUse;
wire stlHit_rs_M =
    MGRFwen && Mwreg != 0
    && rs == Mwreg
    && Mtnew > tUse;
wire stlHit_rt_M =
    MGRFwen && Mwreg != 0
    && rt == Mwreg
    && Mtnew > tUse;

// Generate stall:
assign stall =
    (JR)                    ? (stlHit_rs_E | stlHit_rs_M) :

    (Bran)                  ? (stlHit_rs_E | stlHit_rt_E | stlHit_rs_M | stlHit_rt_M) :
    (Rtype)                 ? (stlHit_rs_E | stlHit_rt_E) :
    (Imm | Load | Store)    ? stlHit_rs_E :

    0;  // udf


endmodule