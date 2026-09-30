# Embedded C – Functions

## Overview

Functions are reusable blocks of code that perform a specific task. They help divide firmware into smaller modules, improving readability, maintainability, and code reuse.

---

## Why Functions are Important

Embedded systems perform many tasks:

* Reading sensors
* Controlling actuators
* Sending UART data
* Checking faults
* Updating displays

Functions help organize these operations into independent modules.

Benefits:

* Better code organization
* Easier debugging
* Reusability
* Reduced complexity
* Modular firmware design

---

## Internal Working

When a function is called:

1. CPU jumps to the function's memory location.
2. Parameters are passed through registers or stack.
3. Instructions inside the function are executed.
4. Return value is produced.
5. CPU returns to the instruction after the function call.

Function calls are essentially CPU jumps to another memory location.

---

## Embedded and Automotive Applications

### Sensor Reading

```c
uint16_t Read_ADC(void);
```

Used for:

* Temperature sensors
* Pressure sensors
* Throttle position sensors

### GPIO Control

```c
void LED_ON(void);
```

Used for:

* Indicators
* Relays
* Actuators

### Communication

```c
void UART_Send(void);
```

Used for:

* Diagnostics
* Data transfer

### Fault Detection

```c
void Check_Error(void);
```

Used for:

* Sensor monitoring
* Abnormal condition detection

---

## Interview Questions

### What is a function?

A function is a reusable block of code that performs a specific task and improves modularity and maintainability.

### Why are functions used in embedded systems?

Functions improve:

* Readability
* Reusability
* Modularity
* Debugging

### What happens during a function call?

* CPU jumps to the function address.
* Parameters are passed.
* Instructions are executed.
* Result is returned.
* CPU returns to the caller.

### Why is recursion rarely used in embedded systems?

Because recursive calls consume stack memory and may cause stack overflow.

---

## Common Mistakes

* Writing very large functions
* Using recursion unnecessarily
* Forgetting return types
* Passing too many parameters
* Assuming CPU understands function names (it only knows addresses)

---

## Final Summary

Functions in Embedded C divide firmware into smaller reusable tasks, improving readability, maintainability, and modularity.

### One-Line Interview Answer

A function is a reusable block of code that performs a specific task. Internally, a function call causes the CPU to jump to another memory location, execute instructions, and return to the caller.
