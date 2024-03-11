ori $1, $0, 0x1234
sw $1, 0xc
lw $2, 0xc
nop
nop
beq $2, $2, label
nop
ori $1, $0, 0x1145
label: ori $1, $0, 0x4511
