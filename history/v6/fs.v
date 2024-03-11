`timescale 1ns / 1ps

module fs (
    input [31:0] instr,

    output [4:0] shamt,
    output [4:0] rs,
    output [4:0] rt,
    output [4:0] rd,
    output [15:0] imm,
    output [25:0] jadd,

    output [5:0] opcode,
    output [5:0] funct
);

assign funct  = instr[5:0];
assign shamt  = instr[10:6];
assign rd     = instr[15:11];
assign rt     = instr[20:16];
assign rs     = instr[25:21];
assign jadd   = instr[25:0];
assign imm    = instr[15:0];
assign opcode = instr[31:26];

endmodule