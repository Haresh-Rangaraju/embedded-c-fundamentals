# 🧠 Embedded C – Bit Manipulation Practice

## Overview

Bit manipulation is the process of reading, setting, clearing, toggling, and checking individual bits in a variable or hardware register using bitwise operators.

In embedded systems, hardware peripherals are controlled through registers, where each bit often represents a specific hardware function. Bit manipulation allows firmware to modify only the required bit without affecting the others.

---

# Why Bit Manipulation is Important

Microcontrollers control hardware using registers.

Example (8-bit Register):

```text
Bit:    7 6 5 4 3 2 1 0
Value:  0 1 1 0 1 0 0 1
```

Each bit may control a different hardware feature.

| Bit | Function |
|-----|----------|
| Bit 0 | LED Enable |
| Bit 1 | UART Enable |
| Bit 2 | ADC Enable |
| Bit 3 | Interrupt Enable |
| Bit 4 | Timer Enable |

If you want to enable only the timer, you should modify **Bit 4** without changing the remaining bits.

---

# Why Embedded Systems Need Bit Manipulation

Bit manipulation helps to:

- Control individual hardware features
- Configure peripheral registers
- Save memory
- Process communication data
- Set configuration flags

---

# Common Bit Manipulation Operations

## 1. Set a Bit

Sets a specific bit to **1**.

```c
reg |= (1 << n);
```

Example:

```text
Before : 00100000
Mask   : 00001000
Result : 00101000
```

---

## 2. Clear a Bit

Clears a specific bit to **0**.

```c
reg &= ~(1 << n);
```

Example:

```text
Before : 00101000
Mask   : 11011111
Result : 00001000
```

---

## 3. Toggle a Bit

Changes a bit from **0→1** or **1→0**.

```c
reg ^= (1 << n);
```

---

## 4. Read a Bit

Checks whether a bit is set.

```c
if (reg & (1 << n))
{
    /* Bit is set */
}
```

---

# CPU Working

When executing:

```c
reg |= (1 << 2);
```

The CPU performs:

```text
Read Register
      ↓
Generate Mask
      ↓
OR Operation
      ↓
Write Result Back
```

Only the selected bit changes.

---

# Embedded Applications

### GPIO

Turn ON an LED connected to Bit 5.

```c
PORT |= (1 << 5);
```

---

### ADC

Enable the ADC peripheral.

```c
ADC_CTRL |= (1 << 0);
```

---

### UART

Enable UART parity.

```c
UART_CTRL |= (1 << 2);
```

---

### CAN Controller

Bit manipulation is used to control:

- Error flags
- Transmission
- Reception
- Interrupts

---

# Common Interview Questions

### How do you set a bit?

```c
reg |= (1 << n);
```

---

### How do you clear a bit?

```c
reg &= ~(1 << n);
```

---

### How do you toggle a bit?

```c
reg ^= (1 << n);
```

---

### How do you check whether a bit is set?

```c
if (reg & (1 << n))
```

---

### Why not assign directly?

Wrong:

```c
reg = 0x20;
```

This overwrites the entire register.

Correct:

```c
reg |= (1 << 5);
```

Only the required bit changes.

---

# Common Mistakes

❌ Overwriting an entire register

```c
reg = (1 << 3);
```

✔ Correct

```c
reg |= (1 << 3);
```

---

❌ Clearing using XOR

```c
reg ^= (1 << 4);
```

✔ Correct

```c
reg &= ~(1 << 4);
```

---

❌ Forgetting parentheses

Wrong:

```c
1 << 2 + 1
```

Correct:

```c
1 << (2 + 1)
```

---

# Practice Examples

## Set Bit 2

```c
reg |= (1 << 2);
```

Result:

```text
00000100
```

---

## Clear Bit 4

```c
reg &= ~(1 << 4);
```

Result:

```text
11101111
```

---

## Check Bit 1

```c
if (reg & (1 << 1))
{
    /* Bit is set */
}
```

---

## Set Multiple Bits

```c
reg |= (1 << 2) | (1 << 5);
```

---

## Clear Multiple Bits

```c
reg &= ~((1 << 2) | (1 << 5));
```

---

## Toggle Multiple Bits

```c
reg ^= (1 << 1) | (1 << 7);
```

---

## Extract Bits 4–7

```c
value = (reg >> 4) & 0x0F;
```

This shifts bits **4–7** to positions **0–3** and masks the remaining bits.

---

# Key Takeaways

- Bit manipulation modifies individual bits without affecting others.
- Hardware registers are controlled using bitwise operations.
- Common operations include **Set, Clear, Toggle, and Read**.
- It is one of the most frequently used techniques in embedded firmware.

---

# One-Line Interview Answer

Bit manipulation is the use of bitwise operators to modify or examine individual bits in a variable or hardware register. It is essential for configuring peripherals and controlling hardware efficiently in embedded systems.
