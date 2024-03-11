`timescale 1ns / 1ps

module processor (
    input clk,
    input reset,

    output [31:0] Mpc,
    input [31:0] CP0epc,

    // Instr Memory Interface
    output [31:0] i_inst_addr,
    input [31:0] i_inst_rdata,

    // GRF Test Signals
    output w_grf_we,
    output [4:0] w_grf_addr,
    output [31:0] w_grf_wdata,

    // Data Memory Interface
    output [31:0] mem_addr,
    output [31:0] mem_wdata,
    output [3:0] mem_byteen,
    input [31:0] mem_rdata,

    // Test PC Interface
    output [31:0] w_inst_addr,
    output [31:0] m_inst_addr,

    // Exceptions
    output Err,
    output BD,
    output [4:0] ErCode,
    output exlclr,
    input ExcTr,
    input [31:0] CP0rdat,
    output [31:0] CP0addr,
    output [31:0] CP0wdat,
    output CP0wen
);
`include "mips.vh"
`include "alu.vh"
`include "coproc0.vh"

// Segs
    // DSeg
        reg [31:0] Dpc4, Dinstr;
        reg Der;
        reg [4:0] DerCode;
        always @(posedge clk) begin : proc_D
            if(reset) begin
                Dpc4 <= 0;
                Dinstr <= 0;
                Der <= 0;
                DerCode <= 0;
            end else if (ExcTr) begin
                Dinstr <= 0;
                Der <= 0;
                DerCode <= 0;
            end else if (Dflush) begin
                Dinstr <= 0;
                Der <= 0;
                DerCode <= 0;
            end else if (!stall) begin
                Dpc4 <= pc + 4;
                Dinstr <= IMinstr;
                Der <= erF;
                DerCode <= ercodeF;
            end
        end
    // ESeg
        reg [31:0] Einstr, Epc8, Erdat1, Erdat2, Eimm;
        reg [4:0] Eshamt, Erreg1, Erreg2, Ewreg, Erd;
        reg [3:0] EALUop, EDMwbse;
        reg [2:0] EMUDVop;
        reg [1:0] Etnew, EGRFwdst, EGRFwdatsrc, EMUDVwen, Eressrc, EDMrbse, EDMmask, EcheckOv, Ememop;
        reg EGRFwen, EALUshsrc, EALUien, EDMwen, EMUDVstart, ECP0wen, Emtc0;

        reg Eer, Ebj;
        reg [4:0] EerCode;
        always @(posedge clk) begin
            if(reset) begin
                Einstr      <= 0;
                Epc8        <= 0;
                Erdat1      <= 0;
                Erdat2      <= 0;
                Eimm        <= 0;
                Eshamt      <= 0;
                Erreg1      <= 0;
                Erreg2      <= 0;
                Ewreg       <= 0;
                Etnew       <= 0;
                EGRFwdst    <= 0;
                EGRFwdatsrc <= 0;
                EDMwen      <= 0;
                EGRFwen     <= 0;
                EALUop      <= 0;
                EALUshsrc   <= 0;
                EALUien     <= 0;
                EMUDVstart  <= 0;
                EMUDVop     <= 0;
                EMUDVwen    <= 0;
                Eressrc     <= 0;
                EDMmask     <= 0;
                EDMrbse     <= 0;
                EDMwbse     <= 0;
                EcheckOv    <= 0;
                Eer         <= 0;
                EerCode     <= 0;
                Ebj         <= 0;
                Ememop      <= 0;
                ECP0wen     <= 0;
                Erd         <= 0;
                Emtc0      <= 0;
            end else if (ExcTr) begin
                Einstr      <= 0;
                Erdat1      <= 0;
                Erdat2      <= 0;
                Eimm        <= 0;
                Eshamt      <= 0;
                Erreg1      <= 0;
                Erreg2      <= 0;
                Ewreg       <= 0;
                Etnew       <= 0;
                EGRFwdst    <= 0;
                EGRFwdatsrc <= 0;
                EDMwen      <= 0;
                EGRFwen     <= 0;
                EALUop      <= 0;
                EALUshsrc   <= 0;
                EALUien     <= 0;
                EMUDVstart  <= 0;
                EMUDVop     <= 0;
                EMUDVwen    <= 0;
                Eressrc     <= 0;
                EDMmask     <= 0;
                EDMrbse     <= 0;
                EDMwbse     <= 0;
                EcheckOv    <= 0;
                Eer         <= 0;
                EerCode     <= 0;
                Ebj         <= 0;
                Ememop      <= 0;
                ECP0wen     <= 0;
                Erd         <= 0;
                Emtc0      <= 0;
            end else begin
                Einstr      <= FSinstr;
                Epc8        <= Dpc4 + 4;
                Erdat1      <= Drdat1;
                Erdat2      <= Drdat2;
                Eimm        <= Dimm;
                Eshamt      <= FSshamt;
                Erreg1      <= Drreg1;
                Erreg2      <= Drreg2;
                Ewreg       <= Dwreg;
                Etnew       <= TNinit;
                EGRFwdst    <= DGRFwdst;
                EGRFwdatsrc <= DGRFwdatsrc;
                EDMwen      <= DDMwen;
                EGRFwen     <= DGRFwen;
                EALUop      <= DALUop;
                EALUshsrc   <= DALUshsrc;
                EALUien     <= DALUien;
                EMUDVstart  <= DMUDVstart;
                EMUDVop     <= DMUDVop;
                EMUDVwen    <= DMUDVwen;
                Eressrc     <= Dressrc;
                EDMmask     <= DDMmask;
                EDMrbse     <= DDMrbse;
                EDMwbse     <= DDMwbse;
                EcheckOv    <= DcheckOv;
                Eer         <= Der | erD;
                EerCode     <= Der ? DerCode : ercodeD;
                Ebj         <= Dbj;
                Ememop      <= Dmemop;
                ECP0wen     <= DCP0wen;
                Erd         <= FSrd;
                Emtc0      <= Dmtc0;
            end
        end
    // MSeg
        assign Mpc = Mpc8 - 8;
        reg [31:0] Minstr, Mpc8, Mres, Mdmwdat;
        reg MGRFwen, MDMwen;
        reg [1:0] MGRFwdst, MGRFwdatsrc, MDMmask, MDMrbse;
        reg [3:0] MDMwbse;
        reg [4:0] Mwreg, Mrreg2, Mrd;
        reg [1:0] Mtnew, Mmemop;

        reg Mer, Mbj, MCP0wen, Mmtc0;
        reg [4:0] MerCode;
        always @(posedge clk) begin
            if(reset) begin
                Minstr <= 0;
                Mpc8 <= 0;
                Mres <= 0;
                Mdmwdat <= 0;
                MGRFwen <= 0;
                MGRFwdst <= 0;
                MGRFwdatsrc <= 0;
                MDMwen <= 0;
                Mwreg <= 0;
                Mrreg2 <= 0;
                Mtnew <= 0;
                MDMmask <= 0;
                MDMrbse <= 0;
                MDMwbse <= 0;
                Mer <= 0;
                MerCode <= 0;
                Mbj <= 0;
                Mmemop <= 0;
                MCP0wen <= 0;
                Mrd     <= 0;
                Mmtc0 <= 0;
            end else if (ExcTr) begin
                Minstr <= 0;
                Mres <= 0;
                Mdmwdat <= 0;
                MGRFwen <= 0;
                MGRFwdst <= 0;
                MGRFwdatsrc <= 0;
                MDMwen <= 0;
                Mwreg <= 0;
                Mrreg2 <= 0;
                Mtnew <= 0;
                MDMmask <= 0;
                MDMrbse <= 0;
                MDMwbse <= 0;
                Mer <= 0;
                MerCode <= 0;
                Mbj <= 0;
                Mmemop <= 0;
                MCP0wen <= 0;
                Mrd     <= 0;
                Mmtc0 <= 0;
            end else begin
                Minstr <= Einstr;
                Mpc8 <= Epc8;
                Mres <= Eres;
                Mdmwdat <= ALUreg2;
                MGRFwen <= EGRFwen;
                MGRFwdst <= EGRFwdst;
                MGRFwdatsrc <= EGRFwdatsrc;
                MDMwen <= EDMwen;
                Mwreg <= Ewreg;
                Mrreg2 <= Erreg2;
                MDMmask <= EDMmask;
                MDMrbse <= EDMrbse;
                MDMwbse <= EDMwbse;
                if (Etnew > 0) begin
                    Mtnew <= Etnew - 1;
                end else begin
                    Mtnew <= 0;
                end

                Mer <= Eer | erE;
                MerCode <= Eer ? EerCode : ercodeE;
                Mbj <= Ebj;
                Mmemop <= Ememop;
                MCP0wen <= ECP0wen;
                Mrd     <= Erd;
                Mmtc0 <= Emtc0;
            end
        end
    // WSeg
        reg [31:0] Winstr, Wpc8, Wres, Wdmrdat, WCP0rdat;

        reg WGRFwen;
        reg [1:0] WGRFwdst, WGRFwdatsrc;

        reg [4:0] Wwreg;
        reg [1:0] Wtnew;

        reg Wbj;

        always @(posedge clk) begin
            if(reset) begin
                Winstr <= 0;
                Wpc8 <= 0;
                Wres <= 0;
                Wdmrdat <= 0;
                WGRFwen <= 0;
                WGRFwdst <= 0;
                WGRFwdatsrc <= 0;
                Wwreg <= 0;
                Wtnew <= 0;
                Wbj <= 0;
                WCP0rdat <= 0;
            end else if (ExcTr) begin
                Winstr <= 0;
                Wres <= 0;
                Wdmrdat <= 0;
                WGRFwen <= 0;
                WGRFwdst <= 0;
                WGRFwdatsrc <= 0;
                Wwreg <= 0;
                Wtnew <= 0;
                Wbj <= 0;
                WCP0rdat <= 0;
            end else begin
                Winstr <= Minstr;
                Wpc8 <= Mpc8;
                Wres <= Mres;
                Wdmrdat <= DMrdat;
                WGRFwen <= MGRFwen;
                WGRFwdst <= MGRFwdst;
                WGRFwdatsrc <= MGRFwdatsrc;
                Wwreg <= Mwreg;
                if (Mtnew > 0) begin
                    Wtnew <= Mtnew - 1;
                end else begin
                    Wtnew <= 0;
                end 
                Wbj <= Mbj;
                WCP0rdat <= CP0rdat;
            end
        end
        wire [31:0] Wdat;

        // OUT OF DATE
        reg [31:0] Instr1, Instr2, Instr3;
        always @(posedge clk) begin
            if(reset) begin
                Instr1 <= 0;
                Instr2 <= 0;
                Instr3 <= 0;
            end else begin
                Instr1 <= Winstr;
                Instr2 <= Instr1;
                Instr3 <= Instr2;
            end
        end

/******************* IF *******************/
    // Exception: pc_nali(PC not align), pc_eran(PC exceeds range)
        wire erF = pc_nali | pc_eran;
            wire pc_nali = pc[1:0] != 2'b00;
            wire pc_eran = (pc < 32'h0000_3000) || (pc >= 32'h0000_7000);
        wire [4:0] ercodeF = EXC_ADEL;
    // PC
        wire [31:0] npc =
                TReret ? CP0epc :
                (PCsrc == PCSRC_NORM) ? pc + 4 : 
                (PCsrc == PCSRC_BRAN) ? pc4ofs : 
                (PCsrc == PCSRC_JADD) ? pcjadd : 
                (PCsrc == PCSRC_JREG) ? pcjreg : 
                0;  // undefined

        reg [31:0] pc;
        always @(posedge clk) begin : proc_PC
            if (reset) begin
                pc <= PCBASE;
            end else if (ExcTr) begin
                pc <= 32'h0000_4180;
            end else if (!(stall | eretstall)) begin
                pc <= npc;
            end else begin
                pc <= pc;
            end
        end
    // Instr Memory(EX)
        wire [31:0] in_IMinstr = i_inst_rdata;
        assign i_inst_addr = pc;
    // Special ERET jump
        wire TReret = in_IMinstr == 32'h4200_0018;
        wire eretstall = TReret & (Dmtc0 | Emtc0 | Mmtc0);
        wire [31:0] IMinstr = (eretstall | erF) ? 32'd0 : in_IMinstr;
        assign exlclr = TReret & ~eretstall;

/******************* ID *******************/
    // Exception: sysc(Syscall), ri(udf instruction)
        wire erD = ri | sysc;
            wire ri, sysc;
        wire [4:0] ercodeD =
            ri   ? EXC_RIST :
            sysc ? EXC_SYSC :
            5'b11111; // udf
    // Stall Control
        wire [5:0] SCopcode = ({Dinstr[31:26]});
    	wire [5:0] SCfunct = ({Dinstr[5:0]});
        wire [4:0] SCrs = ({Dinstr[25:21]});
        wire [4:0] SCrt = ({Dinstr[20:16]});
        wire MUDVoccu;
    	 
        wire stall;
        stlctl StallCtrl(
            .opcode(SCopcode),
            .funct(SCfunct),
            .rs(SCrs),
            .rt(SCrt),
            .occupied(MUDVoccu),

            .EGRFwen(EGRFwen),
            .Ewreg(Ewreg),
            .Etnew(Etnew),
            .Einstr(Einstr),

            .MGRFwen(MGRFwen),
            .Mwreg(Mwreg),
            .Mtnew(Mtnew),
            .Minstr(Minstr),

            .stall(stall)
        );
    // Field Selector
        // FS
        wire [31:0] FSinstr = stall ? NOP : Dinstr;

        wire [25:0] FSjadd;
        wire [15:0] FSimm;
        wire [5:0] FSopcode, FSfunct;
        wire [4:0] FSshamt, FSrs, FSrt, FSrd;

        fs FieldSel(
            .instr(FSinstr),
            .jadd(FSjadd),
            .shamt(FSshamt),
            .rs(FSrs),
            .rt(FSrt),
            .rd(FSrd),
            .imm(FSimm),
            .opcode(FSopcode),
            .funct(FSfunct)
        );

        // Drreg, Dwreg, Dimm
        wire [4:0] Drreg1, Drreg2, Dwreg;
        assign Drreg1 = FSrs;
        assign Drreg2 = FSrt;
        assign Dwreg  = 
            (DGRFwdst == WDST_RT) ? FSrt :
            (DGRFwdst == WDST_RD) ? FSrd :
            (DGRFwdst == WDST_RA) ? 5'd31 :
            0; // undefined

        wire [31:0] Dimm = 
            (EXTsign) ? {{16{FSimm[15]}}, FSimm} : {16'h0000, FSimm};
    // GRF
        wire [31:0] GRFrdat1, GRFrdat2;
        wire [31:0] GRFwpc = Wpc8 - 8;
        grf GRF(
            .clk    (clk),
            .rst    (reset),
            .wpc    (GRFwpc),

            .radd1  (Drreg1),
            .radd2  (Drreg2),
            .rdat1  (GRFrdat1),
            .rdat2  (GRFrdat2),

            .wadd   (Wwreg),
            .GRFwen (WGRFwen),
            .wdat   (Wdat)    // write-data & W-stage data
        );
        assign w_grf_we = WGRFwen;
        assign w_grf_addr = Wwreg;
        assign w_grf_wdata = /*(w_inst_addr == 32'h000030a8) ? LO :*/ Wdat;
        assign w_inst_addr = GRFwpc;
    // PC calculation
        wire Dflush = 0;
        // branch judge
        wire bran =
            BRANcond == BRAN_EQU ? zero :
            BRANcond == BRAN_NEQ ? ~zero :
            /*
            BRANcond == BRAN_LEZ ? ... :
            BRANcond == BRAN_GTZ ? ... :
            */
            0; // udf
            
        
        wire zero = (Drdat1 == Drdat2);

        wire [31:0] pc4ofs, pcjadd, pcjreg;
        wire [31:0] Dpc = Dpc4 - 4;
        assign pc4ofs = 
            (bran) ? Dpc4 + ({{14{FSimm[15]}}, FSimm, 2'b00}) : 
            Dpc4 + 4;
        assign pcjadd = {{Dpc[31:28]}, FSjadd, 2'b00};
        assign pcjreg = Drdat1;
    // Main Control
        wire [2:0] DMUDVop;
        wire [1:0] DMUDVwen, Dressrc;
        wire DMUDVstart;
        wire DGRFwen, DALUshsrc, DALUien, EXTsign, DDMwen, DCP0wen, Dmtc0;
        wire [1:0] BRANcond, DGRFwdst, DGRFwdatsrc, PCsrc, TNinit, DDMrbse, DDMmask, ALUov;
        wire [3:0] ALUfn, DDMwbse;
        wire [1:0] Dmemop;
        ctl MainCtrl(
            .opcode(FSopcode),
            .funct(FSfunct),
            .instr(FSinstr),

            .BRANcond(BRANcond),

            .GRFwen(DGRFwen),
            .GRFwdst(DGRFwdst),
            .GRFwdatsrc(DGRFwdatsrc),

            .ALUfn(ALUfn),
            .ALUshsrc(DALUshsrc),
            .ALUien(DALUien),
            .EXTsign(EXTsign),
            
            .MUDVstart(DMUDVstart),
            .MUDVop   (DMUDVop),
            .MUDVwen  (DMUDVwen),
            .ressrc   (Dressrc),

            .PCsrc(PCsrc),
            .DMwen(DDMwen),
            .DMmask(DDMmask),
            .DMwbse(DDMwbse),
            .DMrbse(DDMrbse),
            .TNinit(TNinit),

            .ALUov     (ALUov),
            .memop     (Dmemop),
            .sysc      (sysc),
            .ri        (ri),
            .CP0wen    (DCP0wen),

            .mtc0      (Dmtc0)
        );
        wire Dbj = (PCsrc == PCSRC_BRAN) || (PCsrc == PCSRC_JADD) || (PCsrc == PCSRC_JREG);
    // ALU Control
        wire [3:0] DALUop;
        wire [1:0] DcheckOv;
        aluctl ALUCtrl(
            .funct(FSfunct),
            .ALUfn(ALUfn),
            .ALUop(DALUop),
            .ALUov  (ALUov),
            .checkOv(DcheckOv)
        );
    // Forwarding Control
        // DFWCtrl
        wire [1:0] Dfw1, Dfw2;
        dfw DFWCtrl (
            .Drreg1(Drreg1),
            .Drreg2(Drreg2),

            .Ewreg(Ewreg),
            .EGRFwen(EGRFwen),
            .EGRFwdst(EGRFwdst),
            .Etnew   (Etnew),

            .Mwreg(Mwreg),
            .MGRFwen(MGRFwen),
            .MGRFwdst(MGRFwdst),
            .Mtnew   (Mtnew),

            .Dfw1(Dfw1),
            .Dfw2(Dfw2)
        );

        // forwarding muxes
        wire [31:0] Drdat1, Drdat2;
        assign Drdat1 =
            (Dfw1 == DFW_NONE) ? GRFrdat1 :
            (Dfw1 == DFW_MRES) ? Mres    :
            (Dfw1 == DFW_MPC8) ? Mpc8     :
            (Dfw1 == DFW_EPC8) ? Epc8     :
            0; // undefined
        assign Drdat2 =
            (Dfw2 == DFW_NONE) ? GRFrdat2 :
            (Dfw2 == DFW_MRES) ? Mres    :
            (Dfw2 == DFW_MPC8) ? Mpc8     :
            (Dfw2 == DFW_EPC8) ? Epc8     :
            0; // undefined

/******************* EX *******************/
    // Universal terms in the section 'exception':
    //   erX: an error happen in stage X
    //   ercodeX: the error code for the error in stage X
    //   Xer: an X-stage register, recording the first error state until X(X not included)
    //   XerCode: an X-stage register, recording the reason of the first error until X(X not included)

    // Exception: Ov, AdEL(load add overflow), AdES(store add overflow)
        wire erE = ov;
            wire ov = (EcheckOv != ALUOV_NON) && overflow;
        wire [4:0] ercodeE =
            EcheckOv == ALUOV_CALC ? EXC_OVFL :
            EcheckOv == ALUOV_ADEL ? EXC_ADEL :
            EcheckOv == ALUOV_ADES ? EXC_ADES :
            5'b11111; // udf
    // Forwarding Control
        // EFW
        wire [2:0] Efw1, Efw2;
        efw EFWCtrl(
            .Erreg1(Erreg1),
            .Erreg2(Erreg2),

            .Mwreg(Mwreg),
            .MGRFwen(MGRFwen),
            .MGRFwdst(MGRFwdst),
            .Mtnew   (Mtnew),

            .Wwreg(Wwreg),
            .WGRFwen(WGRFwen),
            .WGRFwdst(WGRFwdst),
            .Wtnew   (Wtnew),

            .Efw1(Efw1),
            .Efw2(Efw2)
        );

        // forwarding muxes
        wire [31:0] ALUreg1, ALUreg2;
        assign ALUreg1 =
            (Efw1[1:0] == 2'b00)? Erdat1:
            (Efw1 == EFW_WDAT)  ? Wdat  :
            (Efw1 == EFW_MRES)  ? Mres :
            (Efw1 == EFW_WPC8)  ? Wpc8  :
            (Efw1 == EFW_MPC8)  ? Mpc8  :
            0; // undefined
        assign ALUreg2 =
            (Efw2[1:0] == 2'b00)? Erdat2:
            (Efw2 == EFW_WDAT)  ? Wdat  :
            (Efw2 == EFW_MRES)  ? Mres :
            (Efw2 == EFW_WPC8)  ? Wpc8  :
            (Efw2 == EFW_MPC8)  ? Mpc8  :
            0; // undefined
    // ALU Operation
        wire [31:0] ALUres;
        wire [4:0] ALUshamt = (EALUshsrc) ? 5'd16 : Eshamt;
        wire [31:0] ALUopn2 = (EALUien) ? Eimm : ALUreg2;
        wire overflow;
        alu ALU(
            .shamt(ALUshamt),
            .op1(ALUreg1),
            .op2(ALUopn2),
            .ALUop(EALUop),
            .res(ALUres),
            .overflow(overflow)
        );
    // MUDV Operation
        wire [31:0] HI, LO;
        wire MUDVbusy;
        assign MUDVoccu = MUDVbusy | (EMUDVstart & ~Err);
        mudv MUDV(
            .clk(clk),
            .rst(reset),
            .op1(ALUreg1),
            .op2(ALUopn2),

            .start(EMUDVstart & ~Err),
            .mdop(EMUDVop),
            .wen(EMUDVwen),

            .busy(MUDVbusy),
            .LO(LO),
            .HI(HI)
        );
    // Select Result
        wire [31:0] Eres =
            Eressrc == 2'b00 ? ALUres :
            Eressrc == 2'b01 ? LO :
            Eressrc == 2'b10 ? HI :
            32'h00114514; // udf

/******************* ME *******************/
    // Exception: 
    //   load
    //     address: lw_nali, lh_nali, l_eran
    //     device: l_tc_nali(use lh, lb to access Timer registers)
    //   store
    //     address: sw_nali, sh_nali, s_eran
    //     device: s_tc_nali(use lh, lb to access Timer registers), s_tc_wcnt(write Timer[counter] which is read-only)
        wire erM =
            lw_nali | lh_nali | l_eran |
            sw_nali | sh_nali | s_eran |
            l_tc_nali | s_tc_nali | s_tc_wcnt;
            wire lw_nali = Mmemop == MEM_L && MDMmask == 2'b00 && Mres[1:0] != 2'b00;
            wire lh_nali = Mmemop == MEM_L && MDMmask == 2'b10 && Mres[0]   != 1'b0;
            wire l_eran  = Mmemop == MEM_L && !maddInRan;
            wire sw_nali = Mmemop == MEM_S && MDMmask == 2'b00 && Mres[1:0] != 2'b00;
            wire sh_nali = Mmemop == MEM_S && MDMmask == 2'b10 && Mres[0]   != 1'b0;
            wire s_eran  = Mmemop == MEM_S && !maddInRan;
            wire l_tc_nali = Mmemop == MEM_L && maddTimer && MDMmask != 2'b00;
            wire s_tc_nali = Mmemop == MEM_S && maddTimer && MDMmask != 2'b00;
            wire s_tc_wcnt = Mmemop == MEM_S && (Mres == 32'h0000_7f08 || Mres == 32'h0000_7f18);
        wire [4:0] ercodeM =
            (lw_nali | lh_nali | l_eran | l_tc_nali)             ? EXC_ADEL :
            (sw_nali | sh_nali | s_eran | s_tc_nali | s_tc_wcnt) ? EXC_ADES :
            5'b11111; // udf

        wire maddInRan =
            (Mres >= 32'h0000_0000 && Mres < 32'h0000_3000) ||
            (Mres >= 32'h0000_7f00 && Mres < 32'h0000_7f0c) ||
            (Mres >= 32'h0000_7f10 && Mres < 32'h0000_7f1c) ||
            (Mres >= 32'h0000_7f20 && Mres < 32'h0000_7f24);
        wire maddTimer =
            (Mres >= 32'h0000_7f00 && Mres < 32'h0000_7f0c) ||
            (Mres >= 32'h0000_7f10 && Mres < 32'h0000_7f1c);
    
    // Main Exception Handle Unit
        assign Err = Mer | erM;
        assign ErCode = Mer ? MerCode : ercodeM;
        assign BD = Wbj;
        assign CP0wen = MCP0wen;
        assign CP0addr = Mrd;
        assign CP0wdat = DMwdat;
    // Forwarding Control
        // MFW
        wire Mfw;
        mfw MFWCtrl(
            .Mrreg2(Mrreg2),
            .WGRFwen(WGRFwen),
            .Wwreg(Wwreg),
            .Wtnew  (Wtnew),
            .Mfw(Mfw)
        );

        // forwarding muxes
        wire [31:0] DMwdat = (Mfw) ? Wdat : Mdmwdat;
    // Data Mem(EX)
        wire [31:0] DMwpc = Mpc8 - 8;
        wire [31:0] DMrdat;
        assign m_inst_addr = DMwpc;
        assign mem_addr = Mres;
        assign mem_wdata = DMwdat << { 27'd0, MDMmask & Mres[1:0], 3'b000 };
        assign mem_byteen =
            Err ? 4'd0 :
            MDMwbse << (MDMmask & Mres[1:0]);
        assign DMrdat =
            $signed(mem_rdata << { 27'd0, MDMrbse - (MDMmask & Mres[1:0]), 3'b000 }) >>> { 27'd0, MDMrbse, 3'b000 };

/******************* WB *******************/
    // Select Write Data
        assign Wdat =
            (WGRFwdatsrc == WDSRC_ALU ) ? Wres    :
            (WGRFwdatsrc == WDSRC_DM  ) ? Wdmrdat :
            (WGRFwdatsrc == WDSRC_WPC8) ? Wpc8    :
            (WGRFwdatsrc == WDSRC_COP0) ? WCP0rdat:
            0; // undefined

endmodule