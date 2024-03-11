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