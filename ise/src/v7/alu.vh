// alu.vh

localparam  SLL = 4'b0000,
            SRL = 4'b0001,
            SRA = 4'b0010,
            ADD = 4'b0011,
            SUB = 4'b0100,
            AND = 4'b0101,
            OR  = 4'b0110,
            SLT = 4'b0111,
            SLTU= 4'b1000,

            ALUSP  = 4'b1001;

localparam
    ALUOV_NON  = 2'b00,
    ALUOV_CALC = 2'b01,
    ALUOV_ADEL = 2'b10,
    ALUOV_ADES = 2'b11;