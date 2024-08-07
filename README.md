the design :


![Capture](https://github.com/user-attachments/assets/1b682742-6449-47e7-8aa5-a7365f620b83)


CPU Design Overview
This repository contains detailed documentation and resources related to a comprehensive CPU design. The provided diagram offers an insightful look into the various components and their interactions within a basic computer processor. This README will guide you through the key elements of the design and their functions.

Components Overview

Registers (Reg0 to Reg7)
Description: Small, fast storage locations directly accessible by the CPU.
Purpose: Hold intermediate data and provide quick data manipulation.

Program Counter (ProgCnt)
Description: Keeps track of the address of the next instruction to be executed.
Purpose: Ensures the CPU processes instructions sequentially.

Address Register (AddrReg)
Description: Holds the memory address of data to be accessed or stored.
Purpose: Acts as a bridge between the CPU and memory.

Instruction Register (InstrReg)
Description: Temporarily holds the current instruction being executed.
Purpose: Allows the CPU to decode and process instructions.

Arithmetic Logic Unit (ALU)
Description: The heart of the CPU, performing arithmetic and logical operations.
Purpose: Executes operations essential for data processing.

Shifter
Description: Performs shift operations on data.
Purpose: Essential for bitwise manipulation of data.

Control Unit
Description: Manages and coordinates the activities of the CPU.
Purpose: Sends control signals to other components based on the instruction being executed.


wave forms :


![image](https://github.com/user-attachments/assets/1f494943-f573-4857-9526-979c7b2592ee)

