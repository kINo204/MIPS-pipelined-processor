# This python script generates machine codes from test cases asms
# for the Verilog simulator to use.

import os
import paths

testCases = os.listdir(paths.asms)  # get all filenames of asms
progress = 1
total = len(testCases)
logLines = open("mtime.txt", 'r')
lastModifyingTimes = logLines.readlines()
logLines.close()

for fileName in testCases:
	print(str(progress)+"/"+str(total)+"\t"+fileName)
	progress = progress + 1
	mtime = str(os.path.getmtime(paths.asms+fileName))
	# if not modified: nop; else: change mtime to latest
	if len(lastModifyingTimes) == 0:  # no previous logs
		lastModifyingTimes.append(fileName+' '+str(mtime)+'\n')
		#print("empty")
	else:
		# get mtime
		found = False
		for log in lastModifyingTimes:
			lname = log.split(' ')[0].strip()
			lmtime = log.split(' ')[1].strip()
			if lname == fileName:
				found = True
				if lmtime != mtime:
					lastModifyingTimes[lastModifyingTimes.index(log)]=fileName+' '+str(mtime)+'\n'  # ? \n
					os.system('del '+paths.mcode+fileName[:-4] + ".txt")
					os.system('del '+paths.marsout+fileName[:-4] + "_ans.txt")
				break
		if found == False:
			#print("not found")
			lastModifyingTimes.append(fileName+' '+str(mtime)+'\n')

	
	# re-generate machine code:
	os.system("java -jar " + paths.mars + " "
							+ paths.asms + fileName
							+ " nc ex mc LargeText a db dump .text HexText "
							+ paths.mcode + fileName[:-4] + ".txt")

	# re-generating Mars standard answer:
	os.system("java -jar " + paths.mars + " "
							+ "ex lg mc LargeText db nc "
							+ paths.asms + fileName 
							+ " > " + paths.marsout + fileName[:-4] + "_ans.txt")
	ans = open(paths.marsout+fileName[:-4]+"_ans.txt", 'r')
	lines = ans.readlines()
	ans.close()
	for i in range(len(lines)):
		for j in range(len(lines[i])):
			if lines[i][j] == '\t':
				lines[i][j] = ' '
				print("Catch!\n")
	ans = open(paths.marsout+fileName[:-4]+"_ans.txt", 'w')
	for line in lines:
		ans.write(line)
	ans.close()

# write back mtime
logLines = open('mtime.txt', 'w')
for logLine in lastModifyingTimes:
	logLines.write(logLine)

logLines.close()