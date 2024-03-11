ori $1, $0, 1
ori $2, $0, 1
bne $1, $2, label1
nop
ori $1, $0, 2
label1: ori $1, $0, 3
bne $1, $2, label2
nop
ori $1, $0, 2
label2: ori $1, $0, 3