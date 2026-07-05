# Embedded C - Structures

## Overview

A structure is a **user-defined data type** in C that groups related variables of **different data types** under a single name.

Structures help represent real-world objects by organizing related information into one logical unit.

Example:

```c
struct Sensor
{
    int id;
    float temperature;
    char status;
    long timestamp;
};
```

Instead of managing multiple independent variables, all information related to one sensor is stored together.

---

# Why Structures Exist

Real-world devices contain multiple pieces of related information.

For example, a temperature sensor may have:

- Sensor ID
- Temperature
- Status
- Timestamp

Keeping these values as separate variables makes programs harder to organize and maintain.

Structures solve this by grouping related data together.

---

# Why Embedded Systems Use Structures

Structures are used to:

- Organize related data
- Improve code readability
- Simplify function parameters
- Represent real-world devices
- Build communication packets
- Store peripheral configurations

---

# Structure Syntax

```c
struct Sensor
{
    int id;
    float temperature;
    char status;
    long timestamp;
};
```

Creating a structure variable:

```c
struct Sensor sensor1;
```

Accessing members:

```c
sensor1.id = 1;
sensor1.temperature = 36.5;
sensor1.status = 'A';
sensor1.timestamp = 1000;
```

---

# Memory Organization

Example:

```c
struct Student
{
    int roll;
    char grade;
};
```

Assume:

- int = 4 bytes
- char = 1 byte

Possible memory layout:

| Address | Member |
|----------|--------|
| 0x1000 | roll |
| 0x1004 | grade |

The compiler allocates **one continuous block of memory** for the structure.

---

# How the CPU Accesses Members

Suppose:

Base Address = **0x1000**

| Member | Offset |
|---------|--------|
| roll | 0 |
| grade | 4 |

When accessing:

```c
s1.grade
```

The CPU performs:

```
Base Address + Offset

0x1000 + 4

↓

0x1004
```

It then reads or writes the value stored at that location.

The CPU never searches by member name—it calculates the address using the offset.

---

# Structure Padding

Consider:

```c
struct Example
{
    char a;
    int b;
};
```

You might expect:

```
1 + 4 = 5 bytes
```

However,

```c
sizeof(struct Example)
```

may return **8 bytes**.

Why?

The compiler inserts **padding bytes** to align members in memory for faster CPU access.

Example:

```
Byte 0 : char a
Byte 1 : Padding
Byte 2 : Padding
Byte 3 : Padding
Byte 4-7 : int b
```

Phase 1 Tip:

Know that padding exists for memory alignment.
Detailed alignment rules can be learned later.

---

# Embedded System Applications

## 1. Sensor Data

```c
struct Sensor
{
    uint16_t temperature;
    uint16_t pressure;
    uint8_t status;
};
```

Keeps all information about one sensor together.

---

## 2. Communication Packets

```c
struct CAN_Message
{
    uint32_t id;
    uint8_t length;
    uint8_t data[8];
};
```

Represents one complete CAN frame.

---

## 3. ECU Status

```c
struct ECU_Status
{
    uint16_t rpm;
    uint16_t speed;
    uint8_t engine_on;
};
```

Stores vehicle operating information.

---

## 4. Peripheral Configuration

```c
struct UART_Config
{
    uint32_t baudrate;
    uint8_t parity;
    uint8_t stopBits;
};
```

Used to configure UART drivers.

---

# Structure vs Array

| Array | Structure |
|--------|-----------|
| Stores same data type | Stores different data types |
| Elements have identical type | Members may have different types |
| Example: `int arr[5]` | Example: `struct Sensor` |

---

# Member Access

For a normal structure variable:

```c
sensor.temperature
```

For a pointer to a structure:

```c
sensorPtr->temperature
```

Remember:

- `.` → Structure variable
- `->` → Pointer to structure

---

# Common Interview Questions

### What is a structure?

A structure is a user-defined data type that groups related variables of different data types under one name.

---

### Why are structures used?

They improve organization, readability, maintainability, and allow software to model real-world objects.

---

### Can structures contain different data types?

Yes.

A structure may contain:

- int
- char
- float
- uint16_t
- Arrays
- Other structures

---

### Where are structures stored?

Structure variables are stored in memory like any other variable.

All members occupy locations within one continuous block of memory.

---

### What is structure padding?

Padding is extra memory inserted by the compiler to align members for faster CPU access.

---

### Why are structures important in embedded systems?

They represent:

- Sensors
- ECU Status
- Communication Packets
- Peripheral Configurations
- Device Information

---

# Common Mistakes

❌ Confusing structures with arrays.

✔ Arrays store elements of the same type.

✔ Structures group different data types.

---

❌ Assuming structure size equals the sum of member sizes.

✔ Padding may increase the total size.

---

❌ Thinking members are stored separately.

✔ All members belong to one continuous memory block.

---

❌ Using `->` for a normal structure variable.

Wrong:

```c
sensor->temperature;
```

Correct:

```c
sensor.temperature;
```

---

❌ Assuming structures reduce performance.

✔ Structures simply organize memory.

The CPU accesses members efficiently using offsets.

---

# Practical Examples

## Example 1 – Student Information

```c
struct Student
{
    int roll;
    char grade;
};

struct Student s;

s.roll = 12;
s.grade = 'A';
```

One variable stores multiple related values.

---

## Example 2 – Sensor Information

```c
struct Sensor
{
    uint16_t temp;
    uint8_t status;
};

struct Sensor sensor1;
```

Represents one sensor.

---

## Example 3 – CAN Message

```c
struct CAN_Message
{
    uint32_t id;
    uint8_t data[8];
};
```

Represents one complete CAN message.

---

# Key Takeaways

- Structures are user-defined data types.
- They group related variables into one logical unit.
- Members may have different data types.
- The compiler stores members in one continuous memory block.
- The CPU accesses members using offsets from the base address.
- Padding may increase the structure size.
- Structures are widely used in embedded systems for sensors, communication packets, ECU status, and peripheral configurations.

---

# One-Line Interview Answer

A structure is a user-defined data type that groups related variables of different data types into a single logical unit, making embedded software more organized, readable, and suitable for representing real-world devices such as sensors, communication packets, peripherals, and ECU configurations.
