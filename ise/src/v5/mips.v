`timescale 1ns / 1ps

module mips (
    input clk,
    input reset
);
`include "mips.vh"

// DSeg
    reg [31:0] Dpc4, Dinstr;
    always @(posedge clk) begin : proc_D
        if(reset) begin
            Dpc4 <= 0;
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
    reg [31:0] Epc8, Erdat1, Erdat2, Eimm;
    reg [4:0] Eshamt, Erreg1, Erreg2, Ewreg;
    reg [3:0] EALUop;
    reg [1:0] Etnew, EGRFwdst, EGRFwdatsrc;
    reg EGRFwen, EALUshsrc, EALUien, EDMwen;
    always @(posedge clk) begin
        if(reset) begin
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
            EALUshsrc   <= 0;
            EALUien     <= 0;
        end else begin
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
        end
    end
// MSeg
    reg [31:0] Mpc8, Maddr, Mdmwdat;

    reg MGRFwen, MDMwen;
    reg [1:0] MGRFwdst, MGRFwdatsrc;

    reg [4:0] Mwreg, Mrreg2;
    reg [1:0] Mtnew;

    always @(posedge clk) begin
        if(reset) begin
            Mpc8 <= 0;
            Maddr <= 0;
            Mdmwdat <= 0;
            MGRFwen <= 0;
            MGRFwdst <= 0;
            MGRFwdatsrc <= 0;
            MDMwen <= 0;
            Mwreg <= 0;
            Mrreg2 <= 0;
            Mtnew <= 0;
        end else begin
            Mpc8 <= Epc8;
            Maddr <= ALUres;
            Mdmwdat <= ALUreg2;
            MGRFwen <= EGRFwen;
            MGRFwdst <= EGRFwdst;
            MGRFwdatsrc <= EGRFwdatsrc;
            MDMwen <= EDMwen;
            Mwreg <= Ewreg;
            Mrreg2 <= Erreg2;
            if (Etnew > 0) begin
                Mtnew <= Etnew - 1;
            end else begin
                Mtnew <= 0;
            end
        end
    end
// WSeg
    reg [31:0] Wpc8, Walures, Wdmrdat;

    reg WGRFwen;
    reg [1:0] WGRFwdst, WGRFwdatsrc;

    reg [4:0] Wwreg;
    reg [1:0] Wtnew;

    always @(posedge clk) begin
        if(reset) begin
            Wpc8 <= 0;
            Walures <= 0;
            Wdmrdat <= 0;
            WGRFwen <= 0;
            WGRFwdst <= 0;
            WGRFwdatsrc <= 0;
            Wwreg <= 0;
            Wtnew <= 0;
        end else begin
            Wpc8 <= Mpc8;
            Walures <= Maddr;
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
// Instr Memory
    wire [31:0] IMinstr;
    im InstrMem(
        .pc(pc),
        .instr(IMinstr)
    );

/******************* ID *******************/

// Stall Control
    wire [5:0] SCopcode = ({Dinstr[31:26]});
	wire [5:0] SCfunct = ({Dinstr[5:0]});
    wire [4:0] SCrs = ({Dinstr[25:21]});
    wire [4:0] SCrt = ({Dinstr[20:16]});
	 
    wire stall;
    stlctl StallCtrl(
        .opcode(SCopcode),
        .funct(SCfunct),
        .rs(SCrs),
        .rt(SCrt),

        .EGRFwen(EGRFwen),
        .Ewreg(Ewreg),
        .Etnew(Etnew),

        .MGRFwen(MGRFwen),
        .Mwreg(Mwreg),
        .Mtnew(Mtnew),

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
// PC calculation
    // branch judge
    wire zero = (Drdat1 == Drdat2);

    wire [31:0] pc4ofs, pcjadd, pcjreg;
    wire [31:0] Dpc = Dpc4 - 4;
    assign pc4ofs = 
        (zero) ? Dpc4 + ({{14{FSimm[15]}}, FSimm, 2'b00}) : 
        Dpc4 + 4;
    assign pcjadd = {{Dpc[31:28]}, FSjadd, 2'b00};
    assign pcjreg = Drdat1;
// Main Control
    wire DGRFwen, DALUshsrc, DALUien, EXTsign, DDMwen;
    wire [1:0] DGRFwdst, DGRFwdatsrc, PCsrc, TNinit;
    wire [3:0] ALUfn;
    ctl MainCtrl(
        .opcode(FSopcode),
        .funct(FSfunct),

        .GRFwen(DGRFwen),
        .GRFwdst(DGRFwdst),
        .GRFwdatsrc(DGRFwdatsrc),
        .ALUfn(ALUfn),
        .ALUshsrc(DALUshsrc),
        .ALUien(DALUien),
        .EXTsign(EXTsign),
        .PCsrc(PCsrc),
        .DMwen(DDMwen),
        .TNinit(TNinit)
    );
// ALU Control
    wire [3:0] DALUop;
    aluctl ALUCtrl(
        .funct(FSfunct),
        .ALUfn(ALUfn),

        .ALUop(DALUop)
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
        (Dfw1 == DFW_MRES) ? Maddr    :
        (Dfw1 == DFW_MPC8) ? Mpc8     :
        (Dfw1 == DFW_EPC8) ? Epc8     :
        0; // undefined
    assign Drdat2 =
        (Dfw2 == DFW_NONE) ? GRFrdat2 :
        (Dfw2 == DFW_MRES) ? Maddr    :
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
        (Efw1 == EFW_MRES)  ? Maddr :
        (Efw1 == EFW_WPC8)  ? Wpc8  :
        (Efw1 == EFW_MPC8)  ? Mpc8  :
        0; // undefined
    assign ALUreg2 =
        (Efw2[1:0] == 2'b00)? Erdat2:
        (Efw2 == EFW_WDAT)  ? Wdat  :
        (Efw2 == EFW_MRES)  ? Maddr :
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
// Data Mem
    wire [31:0] DMwpc = Mpc8 - 8;
    wire [31:0] DMrdat;
    dm DataMem(
        .clk(clk),
        .rst(reset),
        .wpc(DMwpc),

        .addr(Maddr),
        .wdat(DMwdat),
        .DMwrite(MDMwen),

        .rdat(DMrdat)
    );

/******************* WB *******************/

// Select Write Data
    assign Wdat =
        (WGRFwdatsrc == WDSRC_ALU ) ? Walures :
        (WGRFwdatsrc == WDSRC_DM  ) ? Wdmrdat :
        (WGRFwdatsrc == WDSRC_WPC8) ? Wpc8    :
        0; // undefined

endmodule