`timescale 1ns / 1ps

module alu (
    input [4:0] shamt,
    input [31:0] op1,
    input [31:0] op2,
    input [3:0] ALUop,
    output [31:0] res
);
`include "alu.vh"

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