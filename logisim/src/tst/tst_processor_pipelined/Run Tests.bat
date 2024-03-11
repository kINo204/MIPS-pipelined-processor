
echo clearing last test record ...
del /q test\test_case_mcode\*
del /q test\test_ans\*
del /q test\test_case_asm\*
del /q test\test_case_output\*

echo compiling test cases ...
python compile_testcase.py

echo generating machine codes for rom ...
python generate_mcode.py

echo running logisim ...
python run_mcode_in_logisim.py
python process_output.py

echo comparing ...
python compare.py
start test\logs.txt
pause
