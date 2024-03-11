`timescale 1ns / 1ps

module aluctl (
    input [5:0] funct,
    input [3:0] ALUfn,
    output [3:0] ALUop
);
`include "mips.vh"
`include "alu.vh"

reg [3:0] self_decide;

always @(*) begin
    case(funct[5:3])
        3'o0: begin
            case (funct[1:0])
                2'b00: self_decide <= SLL;
                2'b10: self_decide <= SRL;
                2'b11: self_decide <= SRA;
                default : self_decide <= SLL;
            endcase
        end
        3'o4: begin
            case (funct[2:0])
                3'o0: self_decide <= ADD;
                3'o2: self_decide <= SUB;
                3'o4: self_decide <= AND;
                3'o5: self_decide <= OR;
                default : self_decide <= SLL;
            endcase
        end
        default: self_decide <= SLL;
    endcase // funct[5:3]
end

assign ALUop = 
    (ALUfn == ALUFN_SELF) ? self_decide :
    (ALUfn == ALUFN_SLL)  ? SLL :
    ALUfn;

endmodule