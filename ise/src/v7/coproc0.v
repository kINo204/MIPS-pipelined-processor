module coproc0 (
    input clk,
    input rst,
    input [5:0] DevInt,
    input PrEr,
    input [31:0] Vpc,
    input isBD,
    input [4:0] ErCode,
    output ExcTr,
    input exlclr,
    output [31:0] CP0epc,

    input [31:0] wdat,
    input [31:0] addr,
    input wen,
    output [31:0] rdat
);
`include "coproc0.vh"

reg [31:0] epc;

reg [15:10] im, ip;
reg [6:2] ExcCode;
reg exl, ie, bd;

wire Int = |(DevInt & im) & ie & ~exl;
assign CP0epc = epc;
assign ExcTr = (Int | PrEr) & ~exl;

always @(posedge clk) begin
    if(rst) begin
        epc <= 0;
        im  <= 0;
        ip  <= 0;
        ExcCode <= 0;
        exl <= 0;
        ie  <= 0;
        bd  <= 0;
    end else begin
        ip <= DevInt;
        if (wen) begin // mtc0(will write cp0 before an exception in W)
            case (addr)
                12: {im, exl, ie} <= {wdat[15:10], wdat[1], wdat[0]};
                14: epc <= wdat;
                default :;
            endcase
        end
        if (ExcTr) begin // enter exception
            exl <= 1;
            bd <= isBD;
            epc <= isBD ? Vpc - 4 : Vpc;
            ExcCode <= Int ? EXC_INT : ErCode;
        end
        if (exlclr) begin // eret
            exl <= 0;
        end
        
    end
end

assign rdat =
    addr == 12 ? {16'd0, im, 8'd0, exl, ie} :
    addr == 13 ? {bd, 15'd0, ip, 3'd0, ExcCode, 2'd0} :
    addr == 14 ? epc :
    0; // udf

endmodule