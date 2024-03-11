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
    (ALUop == SRA) ? op2 >>> shamt :
    (ALUop == ADD) ? op1 + op2 :
    (ALUop == SUB) ? op1 - op2 :
    (ALUop == AND) ? op1 & op2 :
    (ALUop == OR ) ? op1 | op2 :
    0; // undefined

endmodule