mflo $4
mfhi $5
# mult
# + * +
lui $1, 0x0fff
ori $1, $1, 0xffff
ori $2, $0, 0xf
mult $1, $1
mflo $4
mfhi $5
mfhi $5
mfhi $5
mult $1, $2
mflo $4
mfhi $5
# + * 0
mult $1, $0
mflo $4
mfhi $5
mult $2, $0
mflo $4
mfhi $5
# + * -
lui $2, 0xffff
ori $2, $2, 0xfff1 # $2 = -0xf
lui $3, 0xf000
ori $3, $3, 1 # $3 = -0x0fff_ffff
mult $1, $3
mflo $4
mfhi $5
mult $1, $2
mflo $4
mfhi $5
# 0 * +
mult $0, $1
mflo $4
mfhi $5
mult $0, $2
mflo $4
mfhi $5
# 0 * 0
mult $0, $0
mflo $4
mfhi $5
# 0 * -
mult $0, $2
mflo $4
mfhi $5
mult $0, $3
mflo $4
mfhi $5
# - * +
mult $3, $1
mflo $4
mfhi $5
mult $2, $1
mflo $4
mfhi $5
# - * 0
mult $2, $0
mflo $4
mfhi $5
mult $3, $0
mflo $4
mfhi $5
# - * -
lui $2, 0xf111
ori $2, $2, 0x1111
mult $2, $3
mflo $4
mfhi $5
lui $1, 0xffff
ori $1, $1, 0xfffe
mult $1, $1
mflo $4
mfhi $5