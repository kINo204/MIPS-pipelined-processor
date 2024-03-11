`timescale 1ns / 1ps

module dfw (
    input [4:0] Drreg1,
    input [4:0] Drreg2,
    
    input [4:0] Ewreg,
    input EGRFwen,
    input [1:0] EGRFwdst,
    input [1:0] Etnew,

    input [4:0] Mwreg,
    input MGRFwen,
    input [1:0] MGRFwdst,
    input [1:0] Mtnew,

    output reg [1:0] Dfw1,
    output reg [1:0] Dfw2
);
`include "mips.vh"

always @(Drreg1, Drreg2, Ewreg, EGRFwen, EGRFwdst, Mwreg, MGRFwen, MGRFwdst) begin
    Dfw1 = fwSig(Drreg1);
    Dfw2 = fwSig(Drreg2);
end

function [1:0] fwSig(input [4:0] readReg);
    integer epc8, mpc8, mres;
    begin
        epc8 = EGRFwen && Ewreg != 0 && Ewreg == readReg && Etnew == 0 // Forwarding condition hit and
            && EGRFwdst == 2; // write data is PC()
        mpc8 = MGRFwen && Mwreg != 0 && Mwreg == readReg && Mtnew == 0
            && MGRFwdst == 2;
        mres = MGRFwen && Mwreg != 0 && Mwreg == readReg && Mtnew == 0;
        fwSig =
            epc8 ? DFW_EPC8 :
            mpc8 ? DFW_MPC8 :
            mres ? DFW_MRES :
            DFW_NONE;
    end
endfunction

endmodule