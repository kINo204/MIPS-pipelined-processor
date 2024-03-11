# MIPS-pipelined-Processor
 Course project of computer organization of Beihang University.

## Intro

The project contains approximately 2 types of a MIPS-32 based processor:

- In HDL(Verilog, \*.v): this contains a processor with CP0 and the bridge.
- In Logisim file(\*.circ): this contains a single-cycle processor and a pipelined processor; both only implement the processor itself.

The HDL version is the latest, supporting functionalities as follows(as required by the course):

- Running a subset of the user-level MIPS32 ISA;
- Implementing a classical MIPS 5-stage single pipeline;
- Supporting a subset of hardware exception handling mechanism;
- Hardware support(bridge, timer) for external interrupt and I/O.

## Note

A few HDL source files(timer, memory) are provided by the course.
