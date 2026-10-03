# 🧠 Embedded C – Header Files

## Overview
Header files (`.h`) are used to share declarations between multiple C source files. They improve code organization, reduce duplication, and make firmware easier to maintain.

In embedded systems, header files commonly contain:
- Function prototypes
- Macros (`#define`)
- Structures (`struct`)
- Enumerations (`enum`)
- `typedef`s
- `extern` variable declarations
- Hardware register definitions

---

## Why Header Files?

Without a header file, every source file would need to repeat the same declarations.

Example (without a header):

```c
void UART_Init(void);
void UART_Send(char data);
char UART_Read(void);
```

Instead, place them in a single header:

```c
// uart.h
void UART_Init(void);
void UART_Send(char data);
char UART_Read(void);
```

Now any source file can simply include:

```c
#include "uart.h"
```

---

## Compilation Flow

```
main.c
    │
    ▼
#include "uart.h"
    │
    ▼
Preprocessor
    │
    ▼
Contents of uart.h inserted
    │
    ▼
Compiler
```

Header files are processed during preprocessing, not at runtime.

---

## Declaration vs Definition

Header file (`speed.h`)

```c
extern int speed;
```

Source file (`speed.c`)

```c
int speed = 80;
```

- `extern` → Declaration (no memory allocated)
- Variable definition → Memory allocated

---

## Embedded System Usage

Header files are widely used for:

- Peripheral driver declarations
- Register definitions
- Shared structures
- Shared enums
- Macros
- Function prototypes

Example:

```c
// gpio.h
void GPIO_Init(void);
void GPIO_Write(void);
```

```c
// gpio.c
void GPIO_Init(void)
{
    /* Implementation */
}
```

---

## Include Guards

```c
#ifndef UART_H
#define UART_H

/* Declarations */

#endif
```

Include guards prevent multiple inclusion of the same header file.

---

## Header File vs Source File

| Header File (.h) | Source File (.c) |
|------------------|------------------|
| Declarations | Implementations |
| Shared across files | Compiled separately |
| No executable code by itself | Contains executable code |

---

## Common Mistakes

### ❌ Defining Variables in Header Files

Wrong

```c
int speed = 100;
```

Correct

```c
extern int speed;
```

Define the variable in exactly one `.c` file.

---

### ❌ Forgetting Include Guards

Always protect headers using:

```c
#ifndef HEADER_NAME_H
#define HEADER_NAME_H

...

#endif
```

---

### ❌ Putting Function Bodies in Headers

Normally:

```c
// led.h
void LED_On(void);
```

```c
// led.c
void LED_On(void)
{
    /* Implementation */
}
```

Function implementations belong in `.c` files unless there is a specific reason (such as `static inline` functions).

---

## Interview Points

**Q: What is a header file?**

A file containing shared declarations such as function prototypes, macros, structures, enums, typedefs, register definitions, and `extern` variable declarations.

**Q: Why use header files?**

- Organize code
- Share declarations
- Reduce duplication
- Improve maintainability

**Q: What should not normally be placed in a header file?**

Variable definitions.

Use `extern` declarations instead.

**Q: What are include guards?**

Preprocessor directives that prevent multiple inclusion of the same header file.

---

## Key Takeaways

- `.h` files contain declarations.
- `.c` files contain implementations.
- Header files are processed by the preprocessor.
- They do not allocate memory or generate machine code.
- Include guards prevent multiple inclusion.
- Variable definitions belong in one `.c` file, not in headers.

---

## One-Line Interview Answer

A header file contains shared declarations that can be included by multiple source files. In embedded systems, header files organize firmware by sharing function prototypes, macros, structures, enums, register definitions, and `extern` declarations.
