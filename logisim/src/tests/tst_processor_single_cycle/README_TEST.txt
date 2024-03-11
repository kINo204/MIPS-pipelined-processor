Usage:
- In directory CPUsinglecycle\test\test_cases, create a .txt file with a specific format of `mips_instruction>expected_out_hex`;
- Continue to add test case file in the directory(multiple files supported);
- Then run the .bat file, the test project will automatically generate test logs in CPUsinglecycle\test\logs.txt. Check it to find out which test has passed and which hasn't.

feat v1.1:
- Dex numbers are now available in test case sources.
- Now ans and output files are automatically opened when an error occurs.

fix v1.2:
- Fixed counter's hex value not properly read.

feat v1.3:
- Now if a line of instruction is not to be carried out, write without a '>' will let it be ignored for comparing.