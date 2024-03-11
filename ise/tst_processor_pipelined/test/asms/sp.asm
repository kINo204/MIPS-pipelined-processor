# 0 / any
addi $1, $0, 5
div $0, $1
mfhi $31
mflo $30

# 0 + 0
add $1, $0, $0

# 1 + -1
addi $1, $0, 5
addi $2, $0, -5
add $3, $1, $2

# 0 - 0
sub $3, $0, $0

# 1 - 1
addi $1, $0, 5
addi $2, $0, 5
sub $3, $1, $2

# -1 - -1
addi $1, $0, -5
addi $2, $0, -5
sub $3, $1, $2

# 0 + 0
addi $3, $0, 0

# 1 + -1
ori $1, $0, 5
addi $3, $1, -5

# -1 + 1
ori $1, $0, -5
addi $3, $1, 5

# 0 & 0
and $3, $0, $0

# 0 & any
and $3, $0, $1

# 0 | 0
or $3, $0, $0

# slt, >=
addi $1, $0, 5
addi $2, $0, 5
slt $3, $1, $2

addi $1, $0, 5
addi $2, $0, 4
slt $3, $1, $2

addi $1, $0, -5
addi $2, $0, -5
slt $3, $1, $2

addi $1, $0, -5
addi $2, $0, -6
slt $3, $1, $2

# sltu, >=
addi $1, $0, 5
addi $2, $0, 5
sltu $3, $1, $2

addi $1, $0, 5
addi $2, $0, 4
sltu $3, $1, $2

addi $1, $0, -5
addi $2, $0, -5
sltu $3, $1, $2

addi $1, $0, -5
addi $2, $0, -6
sltu $3, $1, $2
