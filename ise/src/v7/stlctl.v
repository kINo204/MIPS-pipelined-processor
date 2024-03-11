`timescale 1ns / 1ps

module stlctl (
    input [5:0] opcode,
    input [5:0] funct,
    input [4:0] rs,
    input [4:0] rt,

    input occupied,

    input EGRFwen,
    input [4:0] Ewreg,
    input [1:0] Etnew,
    input [31:0] Einstr,

    input MGRFwen,
    input [4:0] Mwreg,
    input [1:0] Mtnew,
    input [31:0] Minstr,

    output stall
);


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

    SYSC   = Rtype & (funct == 6'o14);


// Generate tUse(current instr at D stage)
wire [1:0] tUse =
    (JR)                          ? 0 :

    (Bran)                        ? 0 :
    1;

// Judging stall: forwarding relation && need a stall
wire stlHit_rs_E =
    EGRFwen && rs != 0  // E/M-instr(last and last-last instr) writes a non-zero register in GRF and
    && rs == Ewreg         // D-instr(current instr)'s READING_REG == E/M-instr's WRITING_REG and
    && Etnew > tUse;       // value can't get ready without stalling.
wire stlHit_rt_E =
    EGRFwen && rt != 0
    && rt == Ewreg
    && Etnew > tUse;
wire stlHit_rs_M =
    MGRFwen && rs != 0
    && rs == Mwreg
    && Mtnew > tUse;
wire stlHit_rt_M =
    MGRFwen && rt != 0
    && rt == Mwreg
    && Mtnew > tUse;

// Generate stall:
assign stall = stallDat | stallMUDV;

wire stallDat = // USERS with their stalling conditions:
    (JR)                        ? (stlHit_rs_E | stlHit_rs_M) :

    (Bran)                      ? (stlHit_rs_E | stlHit_rt_E | stlHit_rs_M | stlHit_rt_M) :
    (Rtype & ~(MDMF|MDMT|SYSC)) ? (stlHit_rs_E | stlHit_rt_E) :
    (Imm | Load | Store | MDMT) ? stlHit_rs_E :

    0;  // Non user won't cause a stall.

wire stallMUDV = // Unfinished M/D operation will cause stalling:
    (occupied) & (MDTR | MDMF | MDMT); 

endmodule