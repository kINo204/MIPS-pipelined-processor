# MIPS Mini System

>  README file for MIPS Mini System design
>
>  author: kINo
>
>  last updated: 2023.12.13

[TOC]

## 1. Systemizing the Design

![structure](.\images\structure.svg)

### 1.1 Modulizing the Processor

Let `mips.v` (the top module) be the MIPS system.

A MIPS MINI SYSTEM should contain:

- processor
- bridge
- timers
- co-processor_0(CP0)

> **From** `mips.v`(processor)
>
>  **to** `mips.v`-(instancing)->`processor.v`

Graph 1.1.1: processor in mips.v with interfaces

![structure_MIPS_system](.\images\structure_MIPS_system.jpg)

### 1.2 Supporting I/O Devices

#### 1.2.1 the Sys Bridge

Behaviour of bridge:

```
Decode PRaddr to generate DEVhit:
	DEVhit =
		PRaddr[...] >= DEV_MIN && PRaddr[...] < DEV_MAX

Read from some device:
	(IN DEVICE)
	ofs = DEVaddr[...]
	DEVrdat = Device[ofs]  // watch device as "memory"
	(IN BRIDGE)
	if DEVhit:
		PRrdat = DEVrdat
	
Write to some device:
	DEVwdat = PRwdat
	if DEVhit:
		DEVbyteen = PRbyteen
	else:
		DEVbyteen = 0
```

Processor -> Bridge:

- mem_addr -> PRaddr
- mem_rdata <- PRrdat
- mem_wdata -> PRwdat
- mem_byteen -> PRbyteen

Bridge -> Device:

- DEVaddr -> in-device-offset
- DEVrdat <- device read data
- DEVwdat -> device write data
- DEVbyteen -> device byte enable

> To conclude:
>
> - Processor's mem_rdata is chosen from all devices' read data on **hits**;
> - A device's byteen is determined to be available or not on **hits**.

#### 1.2.2 (Virtual) Address Map

| DEVICE              | ADDR                      | BASE                | SIZE(WORD)    |
| ------------------- | ------------------------- | ------------------- | ------------- |
| Data Memory         | 0x 0000 0000-0x 0000 2fff | 0x 0000 0-0x 0000 2 | 3072(0x 0c00) |
| Instr Memory        | 0x 0000 3000-0x 0000 6fff | 0x 0000 3-0x 0000 6 | 4096(0x 1000) |
| Timer_0             | 0x 0000 7f00-0x 0000 7f0b | 0x 0000 7f0         | 3             |
| Timer_1             | 0x 0000 7f10-0x 0000 7f1b | 0x 0000 7f1         | 3             |
| Interrupt Responder | 0x 0000 7f20-0x 0000 7f23 | 0x 0000 7f2         | 1             |

#### 1.2.3 Handling I/O Devices

Data Memory: Bridge -> DM interface (-> tb)

Timer: Bridge -> Timer

Interrupt Generator: Bridge -> IG interface (-> tb)

## 2. Supporting Exceptions

### 2.1 Hardware/Software Exception Handling Flow

#### 2.1.1 Enter Exception

![exception_handle_flow](.\images\exception_handle_flow_enter.png)

Exception = Internal Error + Exteral Interrupt

By using the strategy above, we assure:

- The exception is accurate, M-stage instr(right before entering the exception) is the VICTIM.
  - Error: VICTIM with error detected when in M-stage,  then flushed, assuring the VICTIM & latter instructions are not performed.
  - Interrupt: IRQ read, letting instr in M-stage become the VICTIM and not be performed with latter instructions.

```
Enter exception:
	if ExcState != NON:
	
        (Staging)
        if ExcState == INT:
            Cause[ExcCode] = interrupt
        else:
            Cause[ExcCode] = excCode
        if Wstage is J/B:
            Cause[BD] = 1
            EPC       = Wpc
        else:
            Cause[BD] = 0
            EPC       = Mpc

        (Jump to handler)
        (in CPU) PC = (ExcState != NON) ? PC_HANDLER : ...

        (Enter Core-mode(set EXL)
        SR(EXL) = 1
```

#### 2.1.2 Return from Handler: ERET

Jump without delay slot: judge in F-stage.

**No need for resetting cause and EPC.**

### 2.2 Detecting Internal Errors

| Exception Type                | ExcCode | Pipeline Stage |
| ----------------------------- | ------- | -------------- |
| Interrupt(Int)                | 0       | /              |
| Address Exception Load(AdEL)  | 4       | EX, Mem        |
| Address Exception Store(AdES) | 5       | EX, Mem        |
| Syscall                       | 8       | IF             |
| Raw Instruction(RI)           | 10      | IF             |
| Overflow(Ov)                  | 12      | EX             |

**Restrictions of behaviors(cause exception)**

PC:

- edge: word
- range: 0x3000-0x6ffc
- cause exception: syscall & udfInstr

Mem Addr:

- edge: MW word, MH half, MB none
- range: All devices

ALU:

- overload detect: (signed)calculation

Timers:

- R/W: CTRL, PRESET; Ronly: COUNT
- must be loaded/stored *in word*.

### 2.3 Receiving External Interrupts

```
Cause[IP] = device_interrupt
Int = |(Cause[IP] & SR(IM)) && IE && !EXL
```

### 2.4 Support Exception Handler

#### 2.4.1 Other Instrs: mfc0, mtc0

mfc0: special GRF write data source(from coproc0)

mtc0:

- update cop0 at M stage

  - if E stage or earlier, then

    0x3000: exception victim(M)

    0x3004: mtc0(E)

    *Hazard: write cop0 register at the same time.*

  - if W stage, then

    0x3000: mtc0(W)

    0x3004: exception victim(M)

    *Hazard: write cop0 register at the same time.*

#### 2.4.2 Simple Handler & Tester

```assembly
mfc0 $k0, $12
mfc0 $k0, $13
ori $k1, $0, 0x7c
and $k0, $k0, $k1
ori $k1, $0, 0x20
beq $k0, $k1, end
nop
mfc0 $k0, $14
addi $k0, $k0, 4
mtc0 $k0, $14
eret
end: ori $k0, $0, 0x1234
```

- Use syscall to end program;
- Handle by epc += 4.

### 2.5 CoProcessor_0 Design

#### 2.5.1 CoProc Registers

![coprocessor0_regs](.\images\coprocessor0_regs.png)



## 3 Appendix

> P7 思考题部分
>
> 1. 请查阅相关资料，说明鼠标和键盘的输入信号是如何被 CPU 知晓的？
>
>    即通过中断机制，中断请求通过总线传递给cpu。
>
> 2. 请思考为什么我们的 CPU 处理中断异常必须是已经指定好的地址？如果你的 CPU 支持用户自定义入口地址，即处理中断异常的程序由用户提供，其还能提供我们所希望的功能吗？如果可以，请说明这样可能会出现什么问题？否则举例说明。（假设用户提供的中断处理程序合法）
>
>    应当是可以实现的，用户提供入口地址的方式是通过程序规定，可以通过内存、立即数等方式确定地址，而CPU需要一个专门的寄存器来存放这个地址（即原来存放固定入口地址的那一个常量“寄存器”）。
>
> 3. 为何与外设通信需要 Bridge？
>
>    一个CPU不可能为每个外设都提供一套通信机制；
>
>    CPU与外设的通信机制高度相似；
>
>    抽象起来可以统一为BRIDGE。
>
>    （对修改关闭，对扩展开放）
>
> 4. 请阅读官方提供的定时器源代码，阐述两种中断模式的异同，并针对每一种模式绘制状态移图。
>
>    都是加载PRESET，根据CTRL进行对COUNT的递减。区别是一个递减周期完毕后是否自动循环。
>
>    ![TC_states](.\images\TC_states.jpg)
>
> 5. 倘若中断信号流入的时候，在检测宏观 PC 的一级如果是一条空泡（你的 CPU 该级所有信息均为空）指令，此时会发生什么问题？在此例基础上请思考：在 P7 中，清空流水线产生的空泡指令应该保留原指令的哪些信息？
>
>    宏观PC会突然变为非法值0。应该保留PC。
>
> 6. 为什么 `jalr` 指令为什么不能写成 `jalr $31, $31`？
>
>    JALR将$31修改为PC+8，当JALR后的延迟槽指令出现异常，返回后不会正常跳转到原$31的位置，而是跳转到PC+8.
>
> 7. [P7 选做] 请详细描述你的测试方案及测试数据构造策略。
>
>    测试Handler（其一）以在上文提及。
>
>    测试方案：
>
>    1. 继承测试
>
>    2. 测试要求审查
>
>    3. 基本功能
>
>    4. 1. 全局复位
>
>       2. 外设
>
>       3. 1. TC
>
>          2. 1. 读取
>             2. 写入
>
>          3. 中断发生器
>
>          4. DM
>
>       4. 异常
>
>       5. 1. 内部异常
>
>          2. 1. 进入异常
>
>             2. 1. 能检测所有内部异常
>
>                2. 进入异常行为正确
>
>                3. 1. 延迟槽行为
>                   2. 对CPU指令
>                   3. COP0记录
>
>                4. 精确异常
>
>                5. 1. 清空受害指令及后续
>                   2. 对MDV乘除操作表现符合要求
>
>             3. 异常中
>
>             4. 1. mtc0, mfc0行为
>
>                2. 异常中CPU操作正常
>
>                3. 1. 读写寄存器堆
>                   2. 读写DM
>
>                4. 1. 禁用中断
>
>             5. 退出异常
>
>             6. 1. eret行为
>
>                2. 1. 没有延迟槽
>                   2. 后续流水阶段不应有操作
>
>                3. 退出后正常执行
>
>          3. 外部中断
>
>          4. 1. 进入异常
>
>             2. 1. 能检测所有外部中断
>
>                2. 中断配置
>
>                3. 进入异常行为正确
>
>                4. 1. 延迟槽行为
>                   2. 对CPU指令
>                   3. COP0记录
>
>             3. 优先级高于内部异常
>
>       6. 特测
>
>       7. 1. @0x417c->0x4180正常执行