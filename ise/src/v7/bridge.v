module bridge (
    input [31:0] PRaddr,
    output [31:0] PRrdat,
    input [31:0] PRwdat,
    input [3:0] PRbyteen,

    output [31:0] DEVaddr,
    output [31:0] DEVwdat,

    input [31:0] DM_rdat,
    output [3:0] DM_byteen,

    input [31:0] Timer0_rdat,
    output [3:0] Timer0_byteen,

    input [31:0] Timer1_rdat,
    output [3:0] Timer1_byteen,

    input [31:0] IG_rdat,
    output [3:0] IG_byteen
);

assign DEVaddr = PRaddr;
assign DEVwdat = PRwdat;

// Generate hits
wire hit_DM = PRaddr >= 'h0000_0000 && PRaddr < 'h0000_3000;
wire hit_Timer0 = PRaddr >= 'h0000_7f00 && PRaddr < 'h0000_7f0c;
wire hit_Timer1 = PRaddr >= 'h0000_7f10 && PRaddr < 'h0000_7f1c;
wire hit_IG = PRaddr >= 'h0000_7f20 && PRaddr < 'h0000_7f24;

// PRrdat <- DEVrdat(s)
assign PRrdat =
    hit_Timer0 ? Timer0_rdat :
    hit_Timer1 ? Timer1_rdat :
    hit_DM     ? DM_rdat     :
    hit_IG     ? IG_rdat     :
    0; // no device hit.

// PRbyteen -> DEVbyteen(s)
assign DM_byteen = hit_DM ? PRbyteen : 0;
assign Timer0_byteen = hit_Timer0 ? PRbyteen : 0;
assign Timer1_byteen = hit_Timer1 ? PRbyteen : 0;
assign IG_byteen = hit_IG ? PRbyteen : 0;

endmodule