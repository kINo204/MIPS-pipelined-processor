# This python script iverilog simulator to generate simouts.

import os
import paths

mcodes = os.listdir(paths.mcode)
progress=1
total = len(mcodes)
for mcode in mcodes:
    print(str(progress)+"/"+str(total)+"\t"+mcode)
    progress = progress + 1
    # Load code.txt
    os.system("copy "+paths.mcode+mcode+' '+paths.src+'code.txt > nul')

    # Generate .vvp
    os.system("iverilog "
                        +'-o '+paths.vvp+mcode[:-4]+'.vvp'
                        +' -I '+paths.src+" "
                        +' -I '+paths.src+'code.txt '
                        +paths.src+"*.v")
    # Run simulator
    os.system('vvp -l ' +paths.simlog+mcode[:-4]+'_out.txt '
                        +paths.vvp+mcode[:-4]+'.vvp > nul')

# Processing output format:
print("Processing output format ...")
simlogs = os.listdir(paths.simlog)

for fileName in simlogs:
    # Get lines in simlog
    file = open(paths.simlog+fileName, 'r')
    lines = file.readlines()
    file.close()
    # Delete the info part(line 0 & 1)
    del lines[0]
    del lines[-1]

    writeGrfAndStore = False;
    tmpPrevLine = ''
    for i in range(len(lines)):
        target = i

        if writeGrfAndStore == True:
            lines[i-1] = '@' + tmpPrevLine.strip().split('@')[1] + '\n' # choose after '@'
            writeGrfAndStore = False
            continue
        elif i < len(lines) - 1: # not the last line
            if lines[i+1].strip().split('@')[0] == lines[i].strip().split('@')[0]: # act simutaniously
                if lines[i].find('*') != -1 and lines[i+1].find('$') != -1:
                    writeGrfAndStore = True
                    tmpPrevLine = lines[i+1]
                    target = i + 1
        lines[target] = '@' + lines[i].strip().split('@')[1] + '\n' # choose after '@'
    
    # Write lines back to the simlog
    file = open(paths.simlog+fileName, 'w')
    for line in lines:
        file.write(line)
    file.write('\n')
    file.close()