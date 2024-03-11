module mips(
    input clk,                    // 时钟信号
    input reset,                  // 同步复位信号    

    output [31:0] macroscopic_pc, // 宏观 PC

    output [31:0] i_inst_addr,    // IM 读取地址（取指 PC）
    input  [31:0] i_inst_rdata,   // IM 读取数据

    output [31:0] m_data_addr,    // DM 读写地址
    input  [31:0] m_data_rdata,   // DM 读取数据
    output [31:0] m_data_wdata,   // DM 待写入数据
    output [3 :0] m_data_byteen,  // DM 字节使能信号

    output [31:0] m_int_addr,     // 中断发生器待写入地址
    output [3 :0] m_int_byteen,   // 中断发生器字节使能信号
    input interrupt,              // 外部中断信号（from Interrupt Generator）

    output [31:0] m_inst_addr,    // M 级 PC

    output w_grf_we,              // GRF 写使能信号
    output [4 :0] w_grf_addr,     // GRF 待写入寄存器编号
    output [31:0] w_grf_wdata,    // GRF 待写入数据

    output [31:0] w_inst_addr     // W 级 PC
);
wire [31:0] mem_addr, mem_rdata, mem_wdata;
wire [3:0] mem_byteen;

// CPU
wire [31:0] Mpc, CP0epc, CP0addr, CP0rdat, CP0wdat;
wire [4:0] ErCode;
wire PrEr, isBD, exlclr, CP0wen;
assign macroscopic_pc = Mpc;
processor CPU(
    .clk         (clk),
    .reset       (reset),
    .Mpc         (Mpc),
    .CP0epc      (CP0epc),
    
    .i_inst_addr (i_inst_addr),
    .i_inst_rdata(i_inst_rdata),

    .w_grf_we    (w_grf_we),
    .w_grf_addr  (w_grf_addr),
    .w_grf_wdata (w_grf_wdata),

    .m_inst_addr (m_inst_addr),
    .w_inst_addr (w_inst_addr),

    // to bridge
    .mem_addr    (mem_addr),
    .mem_wdata   (mem_wdata),
    .mem_byteen  (mem_byteen),
    .mem_rdata   (mem_rdata),

    // exception
    .Err         (PrEr),
    .BD          (isBD),
    .ErCode      (ErCode),
    .exlclr      (exlclr),
    .ExcTr       (ExcTr),
    .CP0addr     (CP0addr),
    .CP0rdat     (CP0rdat),
    .CP0wdat     (CP0wdat),
    .CP0wen      (CP0wen)
);
wire [31:0] DEVaddr, DEVwdat;

// CoProc0
wire [5:0] DevInt = {
    3'b000,
    interrupt,
    Irq_Timer1,
    Irq_Timer0
};
coproc0 CoProc0(
    .clk   (clk),
    .rst   (reset),
    .CP0epc(CP0epc),

    .DevInt(DevInt),

    .PrEr(PrEr),
    .Vpc(Mpc),
    .isBD(isBD),
    .ErCode(ErCode),
    .ExcTr (ExcTr),
    .exlclr(exlclr),

    .addr  (CP0addr),
    .rdat  (CP0rdat),
    .wen   (CP0wen),
    .wdat  (CP0wdat)
);

// DM
assign m_data_addr  = DEVaddr;
assign m_data_wdata = DEVwdat;

// IG
assign m_int_addr   = DEVaddr;
wire [31:0] IG_rdat = 0;

// Timer0
wire [3:0] Timer0_byteen;
wire [31:0] Timer0_rdat;
TC Timer0(
    .clk  (clk),
    .reset(reset),

    .Addr (DEVaddr[31:2]),
    .WE   (|Timer0_byteen),
    .Din  (DEVwdat),
    .Dout (Timer0_rdat),
    .IRQ  (Irq_Timer0)
);

// Timer1
wire [3:0] Timer1_byteen;
wire [31:0] Timer1_rdat;
TC Timer1(
    .clk  (clk),
    .reset(reset),

    .Addr (DEVaddr[31:2]),
    .WE   (|Timer1_byteen),
    .Din  (DEVwdat),
    .Dout (Timer1_rdat),
    .IRQ  (Irq_Timer1)
);

// bridge
bridge Bridge(
    // to processor
    .PRaddr       (mem_addr),
    .PRrdat       (mem_rdata),
    .PRwdat       (mem_wdata),
    .PRbyteen     (mem_byteen),

    // to devices
    .DEVaddr      (DEVaddr),
    .DEVwdat      (DEVwdat),

    .DM_rdat      (m_data_rdata),
    .DM_byteen    (m_data_byteen),

    .Timer0_rdat  (Timer0_rdat),
    .Timer0_byteen(Timer0_byteen),
    
    .Timer1_rdat  (Timer1_rdat),
    .Timer1_byteen(Timer1_byteen),

    .IG_rdat      (IG_rdat), // no input
    .IG_byteen    (m_int_byteen)
);

endmodule