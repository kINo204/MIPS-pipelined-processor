import filecmp, os
import paths

test_log = open(paths.test + "logs.txt", 'w')

test_cases = os.listdir(paths.test_cases)
for file_name in test_cases:
	if filecmp.cmp(paths.test_ans + file_name, paths.test_case_output + file_name[:-4] + "_out.txt", False) == True:
		test_log.write("OK")
	else:
		test_log.write("--")
		os.system("start " + paths.test_ans + file_name)
		os.system("start " + paths.test_case_output + file_name[:-4] + "_out.txt")
	test_log.write("\t" + file_name[:-4] + '\n')