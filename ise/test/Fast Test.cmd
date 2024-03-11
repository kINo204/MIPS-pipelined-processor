@echo off
title Running Fast Test...

echo Clearing last records ...
del /q test\simlog\*
del /q test\vvp\*

echo Running Iverilog simulator ...
python RunSim.py

echo Comparing ...
python Compare.py

pause
