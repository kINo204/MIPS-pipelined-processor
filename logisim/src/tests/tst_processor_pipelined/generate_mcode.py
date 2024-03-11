import os
import paths

# generate machine codes for test cases
test_case_asm = os.listdir(paths.test_case_asm)
for file_name in test_case_asm:
	os.system("java -jar " + paths.mars_home + " " \
							+ paths.test_case_asm + file_name \
							+ " nc mc CompactDataAtZero a db dump .text HexText " \
							+ paths.test_case_mcode + file_name[:-4] + ".txt")