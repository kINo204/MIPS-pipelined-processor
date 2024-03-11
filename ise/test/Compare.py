import filecmp, os
import paths

test_log = open(paths.test + "logs.txt", 'w')

mcodes = os.listdir(paths.mcode)
for fileName in mcodes:
	if filecmp.cmp(paths.marsout + fileName[:-4]+'_ans.txt', paths.simlog+fileName[:-4]+"_out.txt", False) == True:
		test_log.write("OK")
	else:
		test_log.write("--")
		os.system("start " + paths.marsout + fileName[:-4]+'_ans.txt')
		os.system("start " + paths.simlog + fileName[:-4] + "_out.txt")
	test_log.write("\t" + fileName[:-4] + '\n')
test_log.close()
os.system("start test/logs.txt")