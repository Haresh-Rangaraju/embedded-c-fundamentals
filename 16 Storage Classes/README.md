# Embedded C - Storage Classes

## Overview
Storage classes in C define:
- Where a variable is stored
- How long it exists (lifetime)
- Where it can be accessed (scope)

In embedded systems, storage classes help manage limited RAM, organize firmware, and control data visibility.

---

# Why Storage Classes Matter

When declaring a variable, three questions arise:

- Where is it stored?
- How long does it exist?
- Who can access it?

Storage classes answer these questions.

Example:

```c
int speed = 80;
```

Storage class determines whether `speed`:
- Exists only inside a function
- Retains its value after function calls
- Can be accessed from other files

---

# Storage Classes in C

| Storage Class | Lifetime | Scope | Default Value |
|--------------|----------|-------|---------------|
| auto | Function call | Local | Garbage value |
| register | Function call | Local | Garbage value |
| static | Entire program | Local/File | 0 |
| extern | Entire program | Global | Defined elsewhere |

---

# 1. auto

## Purpose
Used for normal local variables.

```c
void func()
{
    int x = 10;
}
```

### Characteristics

- Stored on the stack
- Created when function starts
- Destroyed when function ends
- Does not retain its value

### Embedded Use

Used for:
- Temporary calculations
- Local counters
- Intermediate variables

---

# 2. register

## Purpose

Requests the compiler to keep a variable in a CPU register for faster access.

```c
register int count;
```

### Characteristics

- Compiler may ignore the request
- Usually stored in CPU registers if possible
- Cannot reliably take its address using `&`

Example:

```c
register int x;

// &x   // Not allowed by C language intent
```

### Embedded Use

Historically used in fast loops.

Modern compilers automatically optimize register usage.

---

# 3. static

## Purpose

Creates a variable only once and preserves its value throughout the program.

```c
void counter()
{
    static int count = 0;
    count++;
}
```

### Characteristics

- Memory allocated only once
- Value retained between function calls
- Stored in Data/BSS section

Example

Call 1

```
count = 1
```

Call 2

```
count = 2
```

Call 3

```
count = 3
```

### Embedded Use

Very common for:

- Error counters
- State machines
- Previous sensor values
- Communication states
- Retry counters

---

# 4. extern

## Purpose

Used to access a global variable defined in another source file.

File1.c

```c
int speed = 80;
```

File2.c

```c
extern int speed;
```

### Characteristics

- Does not allocate new memory
- Refers to an existing global variable
- Helps share data across multiple source files

### Embedded Use

Useful in large firmware projects where multiple files access common variables.

---

# Memory Summary

| Storage Class | Typical Memory Location |
|---------------|-------------------------|
| auto | Stack |
| register | CPU Register (if chosen) |
| static | Data/BSS Section |
| extern | Existing Global Variable |

---

# Embedded & Automotive Relevance

### auto
- Temporary calculations
- Local variables

### register
- Historical optimization
- Rarely used manually today

### static
- State machines
- Error counters
- Sensor history
- Communication states

### extern
- Sharing variables across multiple firmware modules

---

# Common Interview Questions

### What is a storage class?

A storage class defines a variable's storage location, lifetime, and scope.

---

### Difference between auto and static?

| auto | static |
|------|---------|
| Created every function call | Created once |
| Destroyed after function ends | Exists throughout program |
| Does not retain value | Retains value |

---

### What does extern do?

It declares a variable that is defined in another source file.

It does not allocate memory.

---

### What is register?

It requests the compiler to store a variable in a CPU register for faster access.

Modern compilers usually handle this automatically.

---

### Which storage class is most common in embedded systems?

`static`

Because it preserves values between function calls.

---

# Common Mistakes

❌ Thinking static means global

Wrong:

```c
void func()
{
    static int x;
}
```

`x` is still local to `func()`.

---

❌ Thinking extern creates memory

Wrong:

```c
extern int speed;
```

Memory already exists elsewhere.

---

❌ Assuming register guarantees faster execution

It is only a request.

The compiler decides.

---

❌ Forgetting local variables disappear

```c
void func()
{
    int x = 10;
}
```

`x` no longer exists after the function returns.

---

# Key Takeaways

- `auto` → Temporary local variable
- `register` → Request CPU register storage
- `static` → Retains value throughout program
- `extern` → Access variable defined in another file

---

# One-Line Interview Answer

Storage classes in C define a variable's storage location, lifetime, and scope. The four storage classes are `auto`, `register`, `static`, and `extern`, with `static` being especially important in embedded systems because it preserves data across function calls.
