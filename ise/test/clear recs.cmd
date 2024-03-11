@echo off
title Clearing Records...

echo. > mtime.txt
del /s test\mcode\*
del /s test\marsout\*
del /s test\simlog\*
del /s test\vvp\*
pause