ori $1, $0, 0x1234
beq $1, $0, label
nop
ori $1, $0, 0
beq $1, $0, label1
nop
ori $1, $0, 0x1145
label1: ori $1, $0, 0x1234
beq $0, $1, label
nop
ori $1, $0, 0
beq $0, $1, label2
nop
ori $1, $0, 0x1145
label2: ori $1, $0, 0x4511
label: ori $1, $0, 0x5414