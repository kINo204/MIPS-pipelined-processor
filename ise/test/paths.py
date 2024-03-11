# set paths
version = open("testversion.txt", 'r')
src = "..\\src\\" + version.readline().strip() + "\\"
test = "config\\"
asms = test + "asms\\"
marsout = test + "marsout\\"
mcode = test + "mcode\\"
simlog = test + "simlog\\"
vvp = test + "vvp\\"

mars = "D:\\MyLib\\Softwares\\marsco.jar"
mars_perf = "D:\\MyLib\\Softwares\\Mars_perfect.jar"
logisim = "D:\\MyLib\\Softwares\\logisim-generic-2.7.1.jar"