# Variables

## What is a Variable?

A variable is a named memory location used to store data that can change during program execution.

Variables allow embedded systems to store sensor readings, system states, and calculated values.

---

## Why Variables are Important

Embedded systems continuously process real-world information such as:

* Temperature
* Speed
* Pressure
* Position
* System status

Variables are used to temporarily store this information in memory.

Example:

```c
uint16_t rpm;
uint8_t engine_state;
```

---

## Memory Perspective

When a variable is declared:

```c
int speed = 60;
```

The compiler allocates memory and stores the value.

Example:

| Variable | Address | Value |
| -------- | ------- | ----- |
| speed    | 0x1000  | 60    |

The variable name is only for programmers.

The CPU accesses the data using memory addresses.

---

## Embedded Applications

### Sensor Data Storage

```c
uint16_t adc_value;
```

Used for:

* Temperature sensors
* Pressure sensors
* Position sensors

### System State Tracking

```c
uint8_t engine_state;
```

Example:

```text
0 = OFF
1 = ON
2 = ERROR
```

### Control Variables

```c
uint16_t rpm;
uint8_t fuel_injection;
```

Used by ECUs to perform real-time control.

---

## Variable vs Constant

| Variable              | Constant                   |
| --------------------- | -------------------------- |
| Value can change      | Value cannot change        |
| Used during execution | Fixed throughout execution |

---

## Where Variables are Stored

Primarily in:

* RAM (runtime storage)
* CPU registers (temporary fast access)

---

## Interview Questions

### What is a variable in C?

A variable is a named memory location used to store data that can change during program execution.

### Where are variables stored in embedded systems?

Variables are mainly stored in RAM, while temporary values may be stored in CPU registers.

### Why are variables important in embedded systems?

They store sensor data, system states, control signals, and calculation results.

### What is the difference between a variable and a constant?

Variables can change during execution, while constants remain fixed.

---

## Summary

Variables in embedded systems are memory locations used to represent sensor values, system states, and control information during program execution.
