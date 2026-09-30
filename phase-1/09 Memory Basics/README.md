# Embedded C – Memory Basics

## Overview

Memory is fundamental to embedded systems because every program instruction, variable, sensor value, and function execution depends on memory.

Memory provides storage for:

* Program instructions
* Variables
* Sensor readings
* Function information
* Temporary calculations
* Hardware registers

Without memory:

* Programs cannot execute.
* Variables cannot exist.
* Sensors cannot be processed.
* Functions cannot run.

---

## Major Memory Areas

```text
Flash (ROM)
↓
Code / Constants

RAM
├── Global Variables (.data, .bss)
├── Heap (Dynamic Memory)
└── Stack (Function Calls)
```

---

## Flash Memory

Stores:

* Firmware
* Machine code
* Constants
* Lookup tables

Example:

```c
const int MAX_SPEED = 120;
```

Characteristics:

* Non-volatile
* Data retained after power OFF
* Write operation is slower

---

## RAM

Stores:

* Variables
* Arrays
* Runtime data

Example:

```c
int speed = 80;
```

Characteristics:

* Fast access
* Volatile
* Data lost after power OFF

---

## Stack

Used for:

* Function calls
* Local variables
* Parameters
* Return addresses

Example:

```c
void add()
{
    int a = 5;
}
```

Characteristics:

* Automatic allocation
* Fast
* Memory released when function ends

---

## Heap

Used with:

```c
malloc()
free()
```

Characteristics:

* Dynamic allocation
* Flexible

Not preferred in automotive systems because:

* Fragmentation may occur
* Behavior becomes less predictable
* Reliability concerns

Safety-critical systems prefer static memory allocation.

---

## Registers

Special high-speed memory locations used by CPU and peripherals.

Example:

```c
PORTA = 0xFF;
```

Registers are the fastest memory inside the MCU.

---

## CPU View

CPU works with addresses, not variable names.

```text
Address      Data
0x1000 ----> 25
0x1002 ----> 50
0x1004 ----> 100
```

---

## Embedded and Automotive Relevance

### Flash

Stores:

* ECU firmware
* Calibration constants
* Lookup tables

---

### RAM

Stores:

* RPM
* Temperature
* Sensor values

Example:

```c
uint16_t rpm;
```

---

### Stack

Used during function execution.

Example:

```c
void Read_ADC()
{
    int value;
}
```

`value` exists only while the function executes.

---

### Heap

Rarely used in automotive systems due to:

* Fragmentation
* Unpredictable behavior
* Reliability concerns

---

### Registers

Used to control hardware directly.

Example:

```c
PORTA = 0xFF;
```

---

## Interview Questions

### Difference between RAM and Flash?

RAM:

* Volatile
* Stores runtime variables

Flash:

* Non-volatile
* Stores firmware

---

### What is Stack?

Memory used for:

* Local variables
* Function calls
* Parameters
* Return addresses

---

### What is Heap?

Dynamic memory allocated using:

```c
malloc()
free()
```

---

### Why is dynamic memory avoided?

Because of:

* Fragmentation
* Unpredictable allocation
* Reliability issues

---

### Where are local variables stored?

Stack.

---

### Where are global variables stored?

RAM (.data and .bss sections).

---

### Which memory stores firmware?

Flash memory.

---

### Which memory is fastest?

Registers.

---

## Common Mistakes

❌ Variables are stored inside CPU.

✔ Variables are stored in memory.

---

❌ RAM and Flash are the same.

✔ RAM stores runtime data, Flash stores program code.

---

❌ Stack and Heap are identical.

✔ Stack is automatic, Heap is dynamic.

---

❌ Dynamic memory should be used everywhere.

✔ Automotive systems prefer static memory allocation.

---

❌ Addresses are random.

✔ Every memory location has a specific address.

---

## Final Summary

| Memory Area | Stores                          | Volatile |
| ----------- | ------------------------------- | -------- |
| Flash       | Program, constants              | No       |
| RAM         | Variables                       | Yes      |
| Stack       | Local variables, function calls | Yes      |
| Heap        | Dynamic memory                  | Yes      |
| Registers   | CPU and hardware data           | Yes      |

---

## One-Line Interview Answer

Memory in embedded systems consists of Flash for program storage, RAM for runtime variables, stack for function execution, heap for dynamic allocation, and registers for fast CPU and hardware operations.
