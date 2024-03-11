import os, re
import paths

test_case_asm = os.listdir(paths.test_case_asm)
for file_name in test_case_asm:
	ans = open(paths.test_ans + file_name[:-4] + '.txt')
	ans_lines = ans.readlines()
	ans.close()
	stall_gap = 30  # pre-allocated space for nop by stalls
	max_counter = str(hex(4 + len(ans_lines) - 1 + stall_gap))[2:]  # +4 for pipeline pre-filling
	# print(file_name + ": " + max_counter)
	
	# overwrite ROM content & counter value
	mcode = open(paths.test_case_mcode + file_name[:-4] + ".txt").read()
	mymem = open(paths.home + "test.circ", encoding="utf-8").read()
	mymem = re.sub(r'addr/data: 12 32([\s\S]*?)</a>', "addr/data: 12 32\n" + mcode + "</a>", mymem, 1)
	mymem = re.sub(r'<a name="max" val="0x([abcdef\d]*)"/>', '<a name="max" val="0x'+ max_counter +'"/>', mymem)
	with open(paths.home + "test.circ", "w", encoding="utf-8") as file:
	    file.write(mymem)

	# run machine codes in Logisim
	os.system("java -jar " + paths.logisim_home + " " \
		+ paths.home + "test.circ "
		+ "-tty table" \
		+ "> " + paths.test_case_output + file_name[:-4] + "_out.txt")
	