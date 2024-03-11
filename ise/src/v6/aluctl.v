`timescale 1ns / 1ps

module aluctl (
    input [5:0] funct,
    input [3:0] ALUfn,
    output [3:0] ALUop
);
`include "mips.vh"
`include "alu.vh"

reg [3:0] sALUop;
always @(*) begin
    case(funct[5:3])
        3'o0: begin
            case (funct[1:0])
                2'b00: sALUop <= SLL;
                2'b10: sALUop <= SRL;
                2'b11: sALUop <= SRA;
                default : sALUop <= SLL;
            endcase
        end
        3'o4: begin
            case (funct[2:0])
                3'o0: sALUop <= ADD;
                3'o2: sALUop <= SUB;
                3'o4: sALUop <= AND;
                3'o5: sALUop <= OR;
                default : sALUop <= SLL;
            endcase
        end
        3'o5: begin
            case (funct[2:0])
                3'o2: sALUop <= SLT;
                3'o3: sALUop <= SLTU;
                default : sALUop <= SLL;
            endcase
        end
        default: sALUop <= SLL;
    endcase // funct[5:3]
end
assign ALUop = 
    (ALUfn == ALUFN_SELF) ? sALUop :
    (ALUfn == ALUFN_SLL)  ? SLL : // ALUFN_SLL != SLL (localparam)
    ALUfn;

endmodule