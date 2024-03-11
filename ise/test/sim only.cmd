@echo off
title Running the Simulator...

echo Clearing last records ...
del /q test\simlog\*
del /q test\vvp\*

echo Running Iverilog simulator ...
python RunSim.py

pause
