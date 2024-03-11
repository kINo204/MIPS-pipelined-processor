ori $1, $0, 0x1234
ori $2, $0, 0x4321
ori $3, $0, 0x1234
nop
nop
beq $1, $2, label1
nop
beq $1, $3, label2
nop
label1: ori $1, $0, 0
label2: ori $2, $0, 0
