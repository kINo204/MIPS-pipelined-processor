lui $1, 0xfedc
ori $1, $1, 0xba98

mthi $1
mtlo $1

mfhi $2
mflo $2

lui $3, 0xfff
ori $3, $3, 0xffff
ori $4, $0, 0xff
mult $3, $4
mthi $1
mfhi $2
mtlo $1
mflo $2