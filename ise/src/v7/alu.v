`timescale 1ns / 1ps

module alu (
    input [4:0] shamt,
    input [31:0] op1,
    input [31:0] op2,
    input [3:0] ALUop,
    output [31:0] res,
    output overflow
);
`include "alu.vh"

// check overflow
wire [32:0] ovadd = {op1[31], op1} + {op2[31], op2};
wire [32:0] ovsub = {op1[31], op1} - {op2[31], op2};
assign overflow =
    ALUop == ADD ? ovadd[32] != ovadd[31] :
    ALUop == SUB ? ovsub[32] != ovsub[31] :
    0;


assign res =
    (ALUop == SLL) ? op2 << shamt :
    (ALUop == SRL) ? op2 >> shamt :
    (ALUop == SRA) ? $signed(op2) >>> shamt :
    (ALUop == ADD) ? op1 + op2 :
    (ALUop == SUB) ? op1 - op2 :
    (ALUop == AND) ? op1 & op2 :
    (ALUop == OR ) ? op1 | op2 :
    (ALUop == SLT) ? ($signed(op1) < $signed(op2) ? $signed(32'd1) : $signed(32'd0)) :
    (ALUop == SLTU)? (op1 < op2 ? 32'd1 : 32'd0) :
    
    (ALUop == ALUSP)  ? (0) :
    0; // undefined

endmodule