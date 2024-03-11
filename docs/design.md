# Design Manual

## version 5.0: pipelined processor(logisim)

version description: A pipelined processor not solving hazards.

### designing plan

1. pipeline datapath
   1. naming rule	
      1. naming objects
      2. naming principles
      3. implement naming rules
   2. reorder former namings
   3. pipeline datapath implementation in Logisim
   4. pipeline testing methods
2. pipeline controls
3. control hazards
4. testbench development(without data hazards)
   1. run MARS cmd with delay slots option
   2. program count max change/output process abandon first 4 cmds
5. data hazards strategy
   1. forwarding datapath
   2. stalling datapath
   3. data hazards control(forwarding & stalling)

### data hazards strategy

reg data users:

![single_pipeline_users](images\single_pipeline_users.png)

reg data providers:

![forwarding_provider](images\forwarding_provider.png)

reg data forwarding strategies:

![forwarding_strategy](images\forwarding_strategy.png)

## version 5.1: pipelined processor(HDL)

### working principles

1. Top-down Implementation
2. Efficient
   1. Translation motivated + Refractoring when needed
   2. Reusing code in P4 AS UNIT(avoid mistakes)

### 附：思考题

1. 提前分支判断未能提高流水线CPI的情况

   2 delayslots = 1 delayslot + 1 stall

   ```assembly
   ori $1, $0, 1
   beq $1, $0, label
   ```

2. jal将PC+8写入$ra的原因

   PC+4处的延迟槽指令在跳转执行时已经执行过，返回时不需要重复执行。

3. 转发数据来源于流水线寄存器的原因

   否则将会加大等效流水线阶段的时延，破坏流水线加速效果。

4. 使用GPR内部转发的优点及GRF内部转发的实现

   将转发作为GRF行为要求，进一步封装，降低外部转发部件复杂性。

   实现：在GRF内部判断，若写入使能有效且读取和写入是同一个寄存器，则直接读取正在被写入的数据。

5. 转发数据需求者、供给者及转发数据通路综合结果（见上文图片）

6. 处理器新增指令的可能修改位置

   指令与处理器的关系：指令->处理器行为->每阶段行为->数据通路+控制信号

   故修改的位置为：需要增加的数据通路+控制器信号修改

   详细内容如下：

   ```
   【新指令的代码描述：单个指令行为+暂停（转发采用覆盖转发策略）】
   单指令行为：数据通路+（主）控制器
   暂停：数据有效性（Tnew+Tuse）
   
   【R型添加】
   A. New Rtype Operation
   数据通路：ALU加入新运算
   ALU控制器：选中新运算
   数据有效性：按照R型指令
   * 详细步骤：*
   1. <alu.v>新运算封装进函数
   *函数用法
   2. <alu.v><assign res =>添加新运算函数
   3. <alu.vh>添加新运算宏（值随意，不重复即可）
   4. <aluctl.v><always : proc_self_decide>添加新运算控制生成
   （控制信号类型无需修改）
   
   B. I型添加
   数据通路：ALU加入新运算
   主控制器：强制执行新运算(ALUfn)
   数据有效性：按照I型指令+ALUop强制选中新运算
   * 详细步骤：*
   1. <alu.v>将新运算封装进函数
   2. <alu.v><assign res =>添加新运算函数
   3. <alu.vh>添加新运算宏（值随意，不重复即可）
   4. <ctl.v>
   
   C. On Condition: Trigger M/D
   数据通路(Stage E)：
   - 特殊指令识别信号sp_instr
   - 特殊比较条件信号sp_cmp
   - 特殊指令时用sp_cmp代替原MUDVstart
   - 特殊指令时用硬编码乘除操作类型符号代替原MUDVop
   - 特殊指令时用硬编码2'b00代替原MUDVwen、ressrc
   控制器：Rtype->MDTrig基类型
   数据有效性：按照MDTrig类型
   * 详细步骤：*
   1. <mips.v><EX>添加sp_instr, sp_cmp生成模块
   2. <mips.v><MUDV module>EMUDVstart, EMUDVop, EMUDVwen加上't_'
   3. <mips.v><MUDVoccu = >EMUDVstart加上't_'
   4. <mips.v><Select Result>Eressrc加上't_'
   5. <mips.v><MUDV>用sp_instr, sp_cmp及每个t_signal相应的原信号生成新的t_Esignal(4个)
   6. <ctl.v>添加单独指令信号，并加入Rtype和MDTR，如果与现有指令类型重叠需要反选
   7. <stlctl.v>添加单独指令信号，并加入Rtype和MDTR，如果与现有指令类型重叠需要反选
   
   
   【J/B型添加】
   A. On Condition: Branch & Link
   数据通路：
   - 特殊指令识别信号sp_instr
   - 特殊比较条件信号sp_cmp
   - 特殊指令时用特殊比较条件代替原zero条件
   - 特殊指令时用特殊比较条件代替原GRFwen
   控制器：Bran基类型+Link操作控制（GRFwen, GRFwdst, GRFwdatsrc特殊取值）
   数据有效性：tnew按照JAL指令（由于B型TNinit同样为0，因此加入B型即可），非数据使用者。
   * 详细步骤：*
   1. <mips.v>添加sp_instr, sp_cmp生成模块
   2. <mips.v><ID><Main Control>模块接口连接tGRFwen, 利用sp_instr, sp_cmp, tGRFwen生成DGRFwen（将原信号后置，因为可能有其他位置使用了原信号）
   3. <mips.v><ID><PC calculation><wire zero =>加入sp_instr, sp_cmp生成zero
   4. <ctl.v>添加单独指令信号，并加入Bran型，如果与现有指令类型重叠需要反选
   5. <ctl.v>GRFwen, GRFwdst, GRFwdatsrc加入特殊指令，与JAL并列且取值相同(JAL|SP即可)
   6. <stlctl.v>添加单独指令信号，并加入Bran型，如果与现有指令类型重叠需要反选
   
   B. On Condition: Branch to New Offset & Link
   在A基础上增加：
   - 特殊指令时用新OFFSET代替原OFFSET
   
   【L型添加】
   A. Load to Specified Register
   数据通路：在W阶段将要写入的寄存器编号按要求进行修改
   控制器：主要控制信号按照对应的Load(LW/LB/LH)即可
   数据有效性：tnew按照Load即可，非数据使用者
   * 详细步骤：*
   1. <WSeg>将W寄存器Wwreg改为t_Wwreg, Wwreg改为新的wire信号
   2. <W>加入根据条件生成Wwreg（将原信号后置，因为可能有其他位置使用了原信号）
   3. <ctl.v>添加单独指令信号，并加入Load型，如果与现有指令类型重叠需要反选
   4. <stlctl.v>添加单独指令信号，并加入Load型，如果与现有指令类型重叠需要反选
   
   【测试】
   1. 编写MARS测试用例
   尽量少的测试文件中覆盖尽量多的情况
   测试思路：指令行为测试和转发暂停测试
   2. 导出到<code.txt>
   3. isim运行查看结果和调试
   ```

7. 确定译码方式，简要描述译码器架构，以及说明该架构的优势与不足。

   集中分层式译码：

   - 由于funct在R型指令内可以基本决定ALU行为（实际上应当也是MIPS ISA设计用意所在），故使用单独的ALUCtrl，主要读取funct控制ALU；
   - 主控制器主要通过opcode决定其他控制信号；
   - opcode和funct采用组号+组内编号的方式（应当也是指令分布的设计用意），对大部分指令在类别层次处理，个别特殊情况特殊处理；
   - 三阶段转发控制采用三个独立转发控制器。

   优势：控制逻辑集中，较为简单。在控制逻辑量不大的情况下更加合适

   劣势：流水线寄存器较多。

8. 测试方案

   整体沿用P3开发的测试环境，Logisim项目和Verilog同步开发。增量内容主要为：

   - 测试项目的流水线化修改
   - 转发和暂停相关测试用例构造
   - Verilog的自动化测试方法

   测试用例构造：

   - 采用手工构造方法（根据目前学习的测试内容，生成大量测试数据的效率可能不及分析等价类和输入组合后以尽可能少的用例数覆盖输入情况的方法）；
   - 黑盒方法为主：覆盖转发-暂停策略矩阵的每种情况，构造测试用例；
   - 白盒方法补充：对上述用例没有覆盖的/覆盖弱的硬件部分进行用例覆盖

   具体用例位于测试项目中。

## version 6.0 MUDV

### design procedure

1. Design MUDV as a single component;
2. Merge MUDV into the processor.

### Single MUDV Design

**function requirement**

* at anytime: output value of LO/HI as required
* on posedge clk: trigger a multiplication/division if required
* on posedge clk: write LO/HI if required

**technical requirement of triggering MDoperation**

* Act on posedge clk

  ![mudv_edgetype](images\mudv_edgetype.png)

  | busy | start | Tleft == 0 | action  | description                                  |
  | ---- | ----- | ---------- | ------- | -------------------------------------------- |
  | 0    | 0     | x          | idle    | Might write LO/HI accordingly.               |
  | 0    | 1     | x          | trigger | Initialize Tleft and operants, Set busy to 1 |
  | 1    | x     | 0          | proceed | Decrement Tleft                              |
  | 1    | x     | 1          | refresh | Restore result to HILO, Set busy to 0        |

### Merge with Processor

- single instruction control;
- stall & forward control.

## version 6.1 Byte Level Memory

LB, LH, LW

SB, SH, SW

### Instruction Memory

ports:

- i_inst_rata
- i_inst_addr(FPC)

### Data Memory

ports:

- m_data_rdata(read data)
- m_data_addr(read/write address)
- m_data_wdata(write data)
- m_data_bytee(write byte enable)
- m_inst_addr(MPC)

behavior:

- read: always read a WORD at given addr;

P6思考题部分

1. 模块化的原则是：高内聚，低耦合。HI/LO仅与乘除法有关，功能与一般的GPR完全不同。
2. 按照二进制乘法的原理，不断移位、相加、判断，直到运算结束。
3. 按照教程，MUDVoccu = start & busy.
4. 通过字节使能，能够保持原有的按字读取的约定，保留了原有的大部分接口功能。

5. 不是，而是整个字。情况：按字节读的情况占多数。
6. 复杂度的控制方法：提取抽象层次，从较高的抽象层次开始分析、设计、实现。这样就能通过抽象将复杂度隐藏起来。
7. 冲突全部使用AT法解决。详见转发器、暂停控制器。
8. 详见forwarding_strategy.png。



单指令行为
​    

○ A指定数据通路正确工作（功能）Function
​    

○ B未指定数据通路不工作 Function Complement

转发与暂停行为(USER: C-E, PROVIDER: F-H)(对暂停仅能测试应暂停而为暂停情况，不能测试冗余暂停情况)
​    

○ C接受转发且暂停 user: Forward, Stall

○ D接受转发不暂停 user: Forward, NO Stall
​    

○ E不接受转发不暂停 user: NO Forward, NO Stall
​    

○ F发送转发且暂停 provider: Forward, Stall
​    

○ G发送转发不暂停 provider: Forward, NO Stall
​    

○ H不发送转发不暂停 provider: NO Forward, NO Stall