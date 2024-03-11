@echo off
title Running Full Tests...

echo Clearing last records ...
del /q test\simlog\*
del /q test\vvp\*

echo Running Mars ...
python RunMars.py

echo Running Iverilog simulator ...
python RunSim.py

echo Comparing ...
python Compare.py

pause
