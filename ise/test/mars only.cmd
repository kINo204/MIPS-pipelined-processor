@echo off
title Generating Answers and Mcodes...

echo Clearing last records ...
del /q test\simlog\*
del /q test\vvp\*

echo Running Mars ...
python RunMars.py

pause
