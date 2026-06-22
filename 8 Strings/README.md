# Embedded C – Strings

## Overview

Strings are important in embedded systems because they are used for communication, diagnostics, command processing, and displaying information.

A string in C is an array of characters terminated by a special character `'\0'`.

---

## Why Strings Exist

Embedded systems often need to handle text data such as:

* Diagnostic messages
* UART commands
* GPS NMEA sentences
* LCD display text
* Communication packets

Examples:

```
START
STOP
ERROR
$GPGGA,...
```

Strings allow these messages to be stored and processed efficiently.

---

## Simple Meaning

**String = Character array + Null terminator (`'\0'`)**

---

## Internal Working

Example:

```c
char str[] = "CAR";
```

Memory layout:

| Address | Value |
| ------- | ----- |
| 1000    | 'C'   |
| 1001    | 'A'   |
| 1002    | 'R'   |
| 1003    | '\0'  |

The null character marks the end of the string.

CPU reads:

```
'C'
'A'
'R'
'\0'
STOP
```

Without `'\0'`, the CPU may continue reading unwanted memory locations.

---

## Embedded Insight

Strings are simply arrays of characters stored sequentially in memory.

---

## Embedded and Automotive Applications

### UART Communication

Commands:

```
START
STOP
RESET
```

Example:

```c
char rx_buffer[20];
```

---

### Diagnostic Messages

ECU messages:

```
FAULT DETECTED
```

Example:

```c
char message[20];
```

---

### GPS Modules

NMEA sentences:

```
$GPGGA,1234,...
```

Stored in character buffers.

---

### LCD Displays

Example:

```
Speed = 80
```

Strings are used to display text information.

---

## Interview Questions

### What is a string in C?

A string is an array of characters terminated by the null character `'\0'`.

---

### Why is `'\0'` necessary?

It marks the end of the string. Without it, the CPU cannot determine where the string ends.

---

### Is string a separate data type?

No.

A string is simply an array of characters.

---

### Difference between character and string

Character:

```c
char ch = 'A';
```

Stores one character.

String:

```c
char str[] = "ABC";
```

Stores multiple characters and a terminating `'\0'`.

---

### Size of

```c
char str[] = "CAR";
```

Size = 4 bytes:

```
'C'
'A'
'R'
'\0'
```

---

### Why are strings used less than integers in embedded systems?

Because strings:

* Consume more memory
* Require additional processing
* Most embedded applications work with binary data rather than text

---

## Common Mistakes

### Forgetting the null character

Wrong:

```c
char str[3] = {'C','A','R'};
```

Correct:

```c
char str[4] = {'C','A','R','\0'};
```

---

### Confusing character and string

Wrong:

```c
char ch = "A";
```

Correct:

```c
char ch = 'A';
```

---

### Insufficient memory

Wrong:

```c
char str[3] = "CAR";
```

Correct:

```c
char str[4] = "CAR";
```

Need space for `'\0'`.

---

### Thinking string is a built-in datatype

A string is simply an array of characters.

---

## Applications

* UART receive buffers
* Diagnostic messages
* GPS modules
* LCD displays
* Communication protocols
* Command processing

---

## Final Summary

Strings in Embedded C are arrays of characters terminated by `'\0'`. They are mainly used for communication, diagnostics, displays, and command processing.

---

## One-Line Interview Answer

A string in C is a character array terminated by a null character `'\0'`, which indicates the end of the string and enables correct processing of text data.
