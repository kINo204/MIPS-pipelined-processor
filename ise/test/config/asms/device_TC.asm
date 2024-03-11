# view timer init value
lw $s0, 0x7f00
lw $s0, 0x7f04
lw $s0, 0x7f08
# timer init
ori $t0, $zero, 5
sw $t0, 0x7f04
lw $s0, 0x7f04 # view PRESET = 5
# mode 0, start
ori $t0, $zero, 1
lw $s0, 0x7f08 # view COUNT = 0 
sw $t0, 0x7f00 # start count
lw $s0, 0x7f08 # view COUNT = 4 ? decr
lw $s0, 0x7f08
lw $s0, 0x7f00 # view CTRL
lw $s0, 0x7f08
lw $s0, 0x7f08
lw $s0, 0x7f08 # view COUNT end
lw $s0, 0x7f00 # view CTRL