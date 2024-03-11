`timescale 1ns / 1ps

module efw (
    input [4:0] Erreg1,
    input [4:0] Erreg2,
    
    input [4:0] Mwreg,
    input MGRFwen,
    input [1:0] MGRFwdst,
    input [1:0] Mtnew,

    input [4:0] Wwreg,
    input WGRFwen,
    input [1:0] WGRFwdst,
    input [1:0] Wtnew,

    output [2:0] Efw1,
    output [2:0] Efw2
);
`include "mips.vh"

assign Efw1 =
    (MGRFwen && Mwreg != 0 && Erreg1 == Mwreg && Mtnew == 0) ? {(MGRFwdst == 2), 2'b10} :
    (WGRFwen && Wwreg != 0 && Erreg1 == Wwreg && Wtnew == 0) ? {(WGRFwdst == 2), 2'b01} :
    3'b000;

assign Efw2 =
    (MGRFwen && Mwreg != 0 && Erreg2 == Mwreg && Mtnew == 0) ? {(MGRFwdst == 2), 2'b10} :
    (WGRFwen && Wwreg != 0 && Erreg2 == Wwreg && Wtnew == 0) ? {(WGRFwdst == 2), 2'b01} :
    3'b000;

endmodule