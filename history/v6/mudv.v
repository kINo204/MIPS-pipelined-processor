module mudv (
    input clk,
    input rst,
    input start,
    input [2:0] mdop,
    input [1:0] wen,
    input [31:0] op1,
    input [31:0] op2,

    output reg busy,
    output reg [31:0] LO,
    output reg [31:0] HI
);
`include "mudv.vh"

/*reg [63:0] res; // combination of { HI, LO }
assign HI = res[63:32];
assign LO = res[31:0];*/

reg [31:0] r_op1, r_op2;
reg [2:0] r_mdop;
reg [3:0] Tleft;

always @(posedge clk) begin
    if(rst) begin // reset
        HI <= 0;
        LO <= 0;
        r_op1 <= 0;
        r_op2 <= 0;
        r_mdop <= 0;
        busy <= 0;
        Tleft <= 0;
    end else if (~busy && start) begin // trigger
        busy <= 1;
        r_op1 <= op1;
        r_op2 <= op2;
        r_mdop <= mdop;
        case (mdop)
            MULT:   Tleft <= TIME_MUL - 1;
            MULTU:  Tleft <= TIME_MUL - 1;
            DIV:    Tleft <= TIME_DIV - 1;
            DIVU:   Tleft <= TIME_DIV - 1;
            MDSP:;
            default: ;
        endcase
    end else if (busy && Tleft != 0) begin // proceed
        Tleft <= Tleft - 1;
    end else if (busy && Tleft == 0) begin // refresh
        busy <= 0;
        case (r_mdop)
            MULT:   begin
                { HI, LO } <= $signed(r_op1) * $signed(r_op2);
            end
            MULTU:  begin
                { HI, LO } <= r_op1 * r_op2;
            end
            DIV:    begin
                HI <= ($signed(r_op1) % $signed(r_op2));
                LO <= ($signed(r_op1) / $signed(r_op2));
            end
            DIVU:   begin
                HI <= ({1'b0, r_op1} % {1'b0, r_op2});
                LO <= ({1'b0, r_op1} / {1'b0, r_op2});
            end
            MDSP:;
            default: ;
        endcase 
    end else begin // idle
        case (wen)
            2'b01: begin
                LO <= op1;
            end
            2'b10: begin
                HI <= op1;
            end
            default : ;
        endcase
    end
end

endmodule