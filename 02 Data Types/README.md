# Data Types

## What are Data Types?

Data types define how data is stored in memory and determine the range of values that can be represented.

In embedded systems, data types help optimize memory usage, improve performance, and match hardware requirements.

---

## Why Data Types Matter in Embedded Systems

* Efficient memory utilization
* Correct value range selection
* Hardware register compatibility
* Predictable system behavior
* Reduced processing overhead

---

## Common Data Types

| Type     | Typical Size* | Purpose                     |
| -------- | ------------- | --------------------------- |
| char     | 1 byte        | Characters and small values |
| int      | MCU dependent | General integer values      |
| float    | 4 bytes       | Decimal values              |
| uint8_t  | 1 byte        | 8-bit unsigned data         |
| uint16_t | 2 bytes       | 16-bit unsigned data        |
| uint32_t | 4 bytes       | 32-bit unsigned data        |

*Size may vary depending on architecture.

---

## Signed vs Unsigned

### Signed

Stores both positive and negative values.

Example:

```c
int8_t value;
```

Range:

```text
-128 to +127
```

### Unsigned

Stores only positive values.

Example:

```c
uint8_t value;
```

Range:

```text
0 to 255
```

---

## Embedded Perspective

Embedded developers often prefer fixed-width types such as:

```c
uint8_t
uint16_t
uint32_t
```

because their size remains predictable across different microcontrollers.

---

## Automotive Examples

### Sensor Value

```c
uint16_t adc_value;
```

Used for ADC readings and sensor measurements.

### Status Flag

```c
uint8_t crash_detected;
```

Used for ON/OFF conditions and status signals.

### Engine Data

```c
uint32_t engine_rpm;
```

Used when larger numeric ranges are required.

---

## Overflow

When a value exceeds the maximum range of a data type, overflow occurs.

Example:

```c
uint8_t x = 255;
x = x + 1;
```

Result:

```text
0
```

---

## Interview Questions

### Why are different data types used in Embedded C?

To optimize memory usage, improve performance, and match hardware requirements.

### Why use uint16_t instead of int?

Because it provides a fixed and predictable size across different microcontrollers.

### What is the difference between signed and unsigned data types?

Signed types allow negative values, while unsigned types store only positive values.

### What happens during overflow?

The value wraps around when it exceeds the maximum representable range.

---

## Summary

Data types in embedded systems are used to efficiently manage memory, ensure correct value ranges, and match hardware register sizes for predictable system behavior.
