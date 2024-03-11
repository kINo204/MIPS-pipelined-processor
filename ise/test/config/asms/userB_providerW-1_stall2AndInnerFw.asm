ori $1, $0, 0x1234
sw $1, 0xc
lw $2, 0xc
beq $2, $2, label
nop
nop
label: nop
