`timescale 1ns / 1ps

module dm (
    input clk,
    input rst,
    input [31:0] wpc,

    input [31:0] addr,
    input [31:0] wdat,
    input DMwrite,

    output [31:0] rdat
);
`include "mips.vh"

reg [31:0] m_data [0:4095];

wire [11:0] m_addr = addr[13:2];

always @(posedge clk) begin : proc_m_data
	 integer i;
    if(rst) begin
        for (i = 0; i < 4096; i = i + 1) begin
            m_data[i] <= 0;
        end
    end else begin
        if (DMwrite) begin
            m_data[m_addr] <= wdat;
            $display("%d@%h: *%h <= %h", $time, wpc, addr, wdat);
        end
    end
end

assign rdat = m_data[m_addr];

endmodule