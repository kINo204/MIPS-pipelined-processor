# multu
# + * +
lui $1, 0x0fff
ori $1, $1, 0xffff
ori $2, $0, 0xf
multu $1, $1
mflo $4
mfhi $5
multu $1, $2
mflo $4
mfhi $5
# + * 0
multu $1, $0
mflo $4
mfhi $5
multu $2, $0
mflo $4
mfhi $5
# + * -
lui $2, 0xffff
ori $2, $2, 0xfff1 # $2 = -0xf
lui $3, 0xf000
ori $3, $3, 1 # $3 = -0x0fff_ffff
multu $1, $3
mflo $4
mfhi $5
multu $1, $2
mflo $4
mfhi $5
# 0 * +
multu $0, $1
mflo $4
mfhi $5
multu $0, $2
mflo $4
mfhi $5
# 0 * 0
multu $0, $0
mflo $4
mfhi $5
# 0 * -
multu $0, $2
mflo $4
mfhi $5
multu $0, $3
mflo $4
mfhi $5
# - * +
multu $3, $1
mflo $4
mfhi $5
multu $2, $1
mflo $4
mfhi $5
# - * 0
multu $2, $0
mflo $4
mfhi $5
multu $3, $0
mflo $4
mfhi $5
# - * -
lui $2, 0xf111
ori $2, $2, 0x1111
multu $2, $3
mflo $4
mfhi $5
lui $1, 0xffff
ori $1, $1, 0xfffe
multu $1, $1
mflo $4
mfhi $5