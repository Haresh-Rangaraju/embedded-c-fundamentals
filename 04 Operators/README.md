# Operators

## What are Operators?

Operators are symbols used to perform operations on variables and values.

In embedded systems, operators are used for:

- Arithmetic calculations
- Decision making
- Hardware control
- Bit manipulation
- Register operations

---

## Why Operators are Important

Microcontrollers continuously:

- Read sensor values
- Compare thresholds
- Control outputs
- Modify hardware registers

Examples:

```c
if(temp > 80)
```

```c
if(speed > 60 && seatbelt == 0)
```

```c
PORTA |= (1 << 2);
```

---

## CPU Perspective

Example:

```c
c = a + b;
```

Internally:

1. CPU reads `a`
2. CPU reads `b`
3. ALU performs addition
4. Result stored in `c`

### Hardware Blocks

| Operator Type | Hardware Unit |
|--------------|--------------|
| + - * / | ALU |
| & \| ^ | Bitwise Logic Unit |
| << >> | Shifter Unit |
| == != > < | Comparator Unit |

Operators are executed by CPU hardware blocks.

---

## Embedded Applications

### Sensor Comparison

```c
if(temp > 80)
```

Used for:

- Over-temperature protection
- Battery monitoring
- Engine protection

---

### Logical Operations

```c
if(speed > 60 && seatbelt == 0)
```

Used in:

- Vehicle safety logic
- ECU decision making

---

### Bit Manipulation

```c
PORTA |= (1 << 2);
```

Meaning:

- Set bit 2
- Enable a specific output pin

---

### Bit Checking

```c
status & 0x01
```

Used to:

- Check flags
- Read status bits
- Monitor peripherals

---

## Common Interview Questions

### What are operators in C?

Operators are symbols used to perform operations on variables and values.

### Why are bitwise operators important in embedded systems?

They allow direct manipulation of hardware registers at bit level.

### Difference between && and &?

| Operator | Meaning |
|----------|----------|
| && | Logical AND |
| & | Bitwise AND |

### Why are shift operators used?

Shift operators are used to move, set, clear, and manipulate bits efficiently.

### What happens when a + b executes?

The CPU ALU performs addition and stores the result.

---

## Common Mistakes

- Confusing `&&` and `&`
- Ignoring operator precedence
- Avoiding bitwise operations
- Treating operators as syntax only

---

## Summary

Operators allow the CPU to perform calculations, make decisions, and manipulate hardware registers in embedded systems.
