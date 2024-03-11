import os
import paths

test_cases = os.listdir(paths.test_cases)
for file_name in test_cases:
	# b to h
	output = open(paths.test_case_output + file_name[:-4] + "_out.txt", 'r')
	outlines = output.readlines()
	output.close()
	output = open(paths.test_case_output + file_name[:-4] + "_out.txt", 'w')
	for line in outlines:
		if int("".join(line.split('\t')[0].split(' ')), 2) == 0 and int("".join(line.split('\t')[1].split(' ')), 2) == 0:
			continue;
		line = line.strip()
		first = True
		nums = (line.split('\t'))
		del nums[-1]
		for num in nums:
			num = "".join(num.split(' '))
			if first:
				output.write(str(hex(int(num, 2)))[2:])
				first = False
			else:
				output.write(" " + str(hex(int(num, 2)))[2:])
		output.write('\n')
	output.close()