import os
import paths

test_cases = os.listdir(paths.test_cases)
for file_name in test_cases:
	tcase = open(paths.test_cases + file_name, 'r')
	wr_ans = open(paths.test_ans + file_name, 'w')
	wr_asm = open(paths.test_case_asm + file_name[:-4] + '.asm', 'w')
	tcase_lines = tcase.readlines()
	for line in tcase_lines:
		line = line.strip()
		if '>' not in line:
			wr_asm.write(line + '\n')
			continue
		wr_asm.write((line.split('>')[0]).strip() + '\n')
		first = True
		for num in ((line.split('>')[1])).strip().split(' '):
			if len(num) >= 3 and num[0:2] == '0x':
				hnum = num[2:]
			else:
				hnum = str(hex(int(num, 10)))[2:]
			if first:
				wr_ans.write(hnum)
				first = False
			else:
				wr_ans.write(' ' + hnum)
		wr_ans.write('\n')
	tcase.close()
	wr_ans.close()
	wr_asm.close()