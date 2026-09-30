# Embedded C – Arrays

## Overview

An array is a collection of elements of the same data type stored in contiguous memory locations.

Arrays allow embedded systems to store and process multiple values efficiently.

---

## Why Arrays are Important

Arrays help:

* Store multiple values
* Reduce code complexity
* Access data quickly
* Process sensor samples efficiently

Examples:

* ADC readings
* CAN data buffers
* UART receive buffers
* Fault history
* Lookup tables

---

## Internal Working

Example:

```c
int arr[4] = {10,20,30,40};
```

Memory layout:

| Address | Value |
| ------- | ----- |
| 1000    | 10    |
| 1002    | 20    |
| 1004    | 30    |
| 1006    | 40    |

Elements are stored continuously in memory.

The array name represents the address of the first element.

```c
arr == &arr[0]
```

Array indexing is performed internally using:

Address = Base Address + Index × Size of Data Type

This allows fast access to elements.

---

## Embedded and Automotive Applications

### Sensor Samples

```c
uint16_t adc[10];
```

Used for:

* Temperature readings
* Pressure readings
* Battery voltage measurements

---

### CAN Data Buffer

```c
uint8_t can_data[8];
```

Stores the 8 bytes of a CAN frame.

---

### Fault History

```c
uint8_t errors[20];
```

Stores diagnostic fault codes.

---

### UART Receive Buffer

```c
char rx_buffer[50];
```

Stores incoming characters.

---

## Interview Questions

### What is an array?

An array is a collection of elements of the same type stored in contiguous memory locations.

### Why are arrays fast?

Because the CPU can calculate element addresses directly.

### What does the array name represent?

The address of the first element.

```c
arr == &arr[0]
```

### Can arrays store different data types?

No. All elements must be of the same type.

### Why are arrays important in embedded systems?

They are widely used for:

* Buffers
* Sensor readings
* Communication packets
* Data storage

### How does array indexing work?

The CPU calculates:

Base Address + Index × Size of Data Type

---

## Common Mistakes

* Assuming indexing starts from 1
* Accessing beyond array size
* Thinking the array name stores values
* Assuming arrays grow automatically
* Confusing arrays with pointers

---

## Final Summary

Arrays are collections of same-type elements stored in contiguous memory locations, enabling efficient storage and fast access.

### One-Line Interview Answer

An array is a group of same-type elements stored in contiguous memory locations, widely used in embedded systems for sensor data, communication buffers, and efficient memory access.
