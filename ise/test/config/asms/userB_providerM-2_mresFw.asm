ori $1, $0, 0x1234
nop
beq $1, $0, label
nop
ori $1, $0, 0
nop
beq $1, $0, label1
nop
ori $1, $0, 0x1145
label1: ori $1, $0, 0x1234
nop
beq $0, $1, label
nop
ori $1, $0, 0
nop
beq $0, $1, label2
nop
ori $1, $0, 0x1145
label2: ori $2, $0, 1
label:  ori $3, $0, 1
