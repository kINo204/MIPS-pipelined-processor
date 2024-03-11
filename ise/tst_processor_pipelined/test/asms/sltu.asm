# positive 
# less 1
ori $1, $0, 8
ori $2, $0, 9
sltu $3, $1, $2

# bigger 1
ori $1, $0, 8
ori $2, $0, 9
sltu $3, $1, $2

# equal
ori $1, $0, 8
ori $2, $0, 8
sltu $3, $1, $2

# zero
# less 1
lui $1, 0xffff
ori $1, $0, 0xffff
sltu $3, $1, $0

# bigger 1
ori $1, $0, 1
sltu $3, $1, $0

# equal
ori $1, $0, 0
sltu $3, $1, $0