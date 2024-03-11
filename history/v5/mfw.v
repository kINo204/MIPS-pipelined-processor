`timescale 1ns / 1ps

module mfw (
    input [4:0] Mrreg2,
    input WGRFwen,
    input [4:0] Wwreg,
    input [1:0] Wtnew,
    output Mfw
    
);

assign Mfw = (WGRFwen && Wwreg != 0 && Mrreg2 == Wwreg && Wtnew == 0);

endmodule