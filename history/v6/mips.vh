// mips.vh

localparam NOP = 32'd0;

localparam PCBASE = 32'h0000_3000;


// GRFwdst: $rt, $rd, $ra
localparam  WDST_RT = 2'b00,
            WDST_RD  = 2'b01,
            WDST_RA  = 2'b10;

// GRFwdatsrc
localparam  WDSRC_ALU   = 2'b00,
            WDSRC_DM    = 2'b01,
            WDSRC_WPC8  = 2'b10;

// PCsrc
localparam  PCSRC_NORM = 2'b00,
            PCSRC_BRAN = 2'b01,
            PCSRC_JADD = 2'b10,
            PCSRC_JREG = 2'b11;

// Branch Conditions
localparam  BRAN_EQU = 2'b00,
            BRAN_NEQ = 2'b01;
            /*
            BRAN_LEZ = 2'b10,
            BRAN_GTZ = 2'b11;
            */

// ALUfn
localparam  ALUFN_SLL = 4'b1111,
            ALUFN_SELF = 4'b0000,
            ALUFN_SRL = 4'b0001,
            ALUFN_SRA = 4'b0010,
            ALUFN_ADD = 4'b0011,
            ALUFN_SUB = 4'b0100,
            ALUFN_AND = 4'b0101,
            ALUFN_OR  = 4'b0110,
            ALUFN_SLT = 4'b0111,
            ALUFN_SLTU = 4'b1000,
            ALUFN_SP   = 4'b1001,
            ALUFN_ERR = 4'b1110;

// Forwarding
localparam  DFW_NONE = 2'b00,
            DFW_MRES = 2'b01,
            DFW_MPC8 = 2'b10,
            DFW_EPC8 = 2'b11;

localparam  EFW_WDAT = 3'b001,
            EFW_MRES = 3'b010,
            EFW_WPC8 = 3'b101,
            EFW_MPC8 = 3'b110;