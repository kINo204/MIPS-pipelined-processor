`timescale 1ns / 1ps

module mips (
    input clk,
    input reset,

    // Instr Memory Interface
    output [31:0] i_inst_addr,
    input [31:0] i_inst_rdata,

    // GRF Test Signals
    output w_grf_we,
    output [4:0] w_grf_addr,
    output [31:0] w_grf_wdata,
    output [31:0] w_inst_addr,

    // Data Memory Interface
    output [31:0] m_data_addr,
    output [31:0] m_data_wdata,
    output [3:0] m_data_byteen,
    output [31:0] m_inst_addr,
    input [31:0] m_data_rdata
);
`include "mips.vh"

// DSeg
    reg [31:0] Dpc4, Dinstr;
    always @(posedge clk) begin : proc_D
        if(reset) begin
            Dpc4 <= 0;
            Dinstr <= 0;
        end else if (Dflush) begin
            Dinstr <= 0;
        end else if (!stall) begin
            Dpc4 <= pc + 4;
            Dinstr <= IMinstr;
        end else begin
            Dpc4 <= Dpc4;
            Dinstr <= Dinstr;
        end
    end
// ESeg
    reg [31:0] Einstr, Epc8, Erdat1, Erdat2, Eimm;
    reg [4:0] Eshamt, Erreg1, Erreg2, Ewreg;
    reg [3:0] EALUop, EDMwbse;
    reg [2:0] EMUDVop;
    reg [1:0] Etnew, EGRFwdst, EGRFwdatsrc, EMUDVwen, Eressrc, EDMrbse, EDMmask;
    reg EGRFwen, EALUshsrc, EALUien, EDMwen, EMUDVstart;
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
        end
    end
// MSeg
    reg [31:0] Minstr, Mpc8, Mres, Mdmwdat;
    reg MGRFwen, MDMwen;
    reg [1:0] MGRFwdst, MGRFwdatsrc, MDMmask, MDMrbse;
    reg [3:0] MDMwbse;
    reg [4:0] Mwreg, Mrreg2;
    reg [1:0] Mtnew;
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
        end
    end
// WSeg
    reg [31:0] Winstr, Wpc8, Wres, Wdmrdat;

    reg WGRFwen;
    reg [1:0] WGRFwdst, WGRFwdatsrc;

    reg [4:0] Wwreg;
    reg [1:0] Wtnew;

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
        end
    end
    wire [31:0] Wdat;

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

// PC
    wire [31:0] npc =
            (PCsrc == PCSRC_NORM) ? pc + 4 : 
            (PCsrc == PCSRC_BRAN) ? pc4ofs : 
            (PCsrc == PCSRC_JADD) ? pcjadd : 
            (PCsrc == PCSRC_JREG) ? pcjreg : 
            0;  // undefined

    reg [31:0] pc;
    always @(posedge clk) begin : proc_PC
        if (reset) begin
            pc <= PCBASE;
        end else if (!stall) begin
            pc <= npc;
        end else begin
            pc <= pc;
        end
    end
// Instr Memory(EX)
    wire [31:0] IMinstr = i_inst_rdata;
    assign i_inst_addr = pc;

/******************* ID *******************/

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
    wire DGRFwen, DALUshsrc, DALUien, EXTsign, DDMwen;
    wire [1:0] BRANcond, DGRFwdst, DGRFwdatsrc, PCsrc, TNinit, DDMrbse, DDMmask;
    wire [3:0] ALUfn, DDMwbse;
    ctl MainCtrl(
        .opcode(FSopcode),
        .funct(FSfunct),

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
        .TNinit(TNinit)
    );
// ALU Control
    wire [3:0] DALUop;
    aluctl ALUCtrl(
        .funct(FSfunct),
        .ALUfn(ALUfn),
        .ALUop    (DALUop)
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
    alu ALU(
        .shamt(ALUshamt),
        .op1(ALUreg1),
        .op2(ALUopn2),
        .ALUop(EALUop),
        .res(ALUres)
    );
// MUDV Operation
    wire [31:0] HI, LO;
    wire MUDVbusy;
    assign MUDVoccu = MUDVbusy | EMUDVstart;
    mudv MUDV(
        .clk(clk),
        .rst(reset),
        .op1(ALUreg1),
        .op2(ALUopn2),

        .start(EMUDVstart),
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
    assign m_data_addr = Mres;
    assign m_data_wdata = DMwdat << { 27'd0, MDMmask & Mres[1:0], 3'b000 };
    assign m_data_byteen =
        MDMwbse << (MDMmask & Mres[1:0]);
    assign DMrdat =
        $signed(m_data_rdata << { 27'd0, MDMrbse - (MDMmask & Mres[1:0]), 3'b000 }) >>> { 27'd0, MDMrbse, 3'b000 };

/******************* WB *******************/

// Select Write Data
    assign Wdat =
        (WGRFwdatsrc == WDSRC_ALU ) ? Wres    :
        (WGRFwdatsrc == WDSRC_DM  ) ? Wdmrdat :
        (WGRFwdatsrc == WDSRC_WPC8) ? Wpc8    :
        0; // undefined

endmodule