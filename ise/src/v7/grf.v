`timescale 1ns / 1ps

module grf (
    input clk,
    input rst,
    input [31:0] wpc,

    input [4:0] radd1,
    input [4:0] radd2,
    output [31:0] rdat1,
    output [31:0] rdat2,

    input [4:0] wadd,
    input GRFwen,
    input [31:0] wdat
);
`include "mips.vh"

reg [31:0] grfregs [1:31];  // $0 not here

// read
assign rdat1 = 
    (radd1 == 0) ? 0 :
    (radd1 == wadd && GRFwen) ? wdat :
    grfregs[radd1];
assign rdat2 = 
    (radd2 == 0) ? 0 :
    (radd2 == wadd && GRFwen) ? wdat :
    grfregs[radd2];

// write
integer i;  
always @(posedge clk) begin
    if(rst) begin
        for (i = 1; i < 32; i = i + 1) begin
            grfregs[i] <= 0;
        end
    end else begin
        if (GRFwen) begin
            if (wadd != 0) begin
			    grfregs[wadd] <= wdat;
                // (Abandoned test output)
                // $display("%d@%h: $%d <= %h", $time, wpc, wadd, wdat);
			end
        end
    end
end

endmodule