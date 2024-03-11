`timescale 1ns / 1ps

module im (
    input [31:0] pc,
    output [31:0] instr
);
`include "mips.vh"

reg [31:0] m_instrs [0:4095];

initial begin
    /* /media/shared/SharedFile/ISE Files/ProcessorDesign/ise/src/v5/ */
    /* D:/MyLib/Softwares/VirtualSys/SharedFile/ISE Files/ProcessorDesign/ise/src/v5/ */
    $readmemh("D:/MyLib/Softwares/VirtualSys/SharedFile/ISE Files/ProcessorDesign/ise/src/tmp/code.txt", m_instrs);
end

wire [31:0] t = pc - PCBASE;
wire [11:0] m_addr = t[13:2];
assign instr = m_instrs[m_addr];

endmodule