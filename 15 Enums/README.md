# Embedded C – ENUMS (Enumerations)

Enums are used to give meaningful names to a set of related integer constants. Instead of using numbers like `0`, `1`, or `2`, enums make the code easier to read and maintain by using descriptive names such as `ENGINE_OFF`, `ENGINE_ON`, and `ENGINE_FAULT`.

---

## What is an Enum?

An `enum` is a user-defined data type in C that assigns meaningful names to integer constants.

### Example

```c
enum EngineState
{
    ENGINE_OFF,
    ENGINE_ON,
    ENGINE_FAULT
};
```

By default, the compiler assigns integer values starting from `0`.

| Enum Constant | Integer Value |
|----------------|----------------|
| ENGINE_OFF     | 0 |
| ENGINE_ON      | 1 |
| ENGINE_FAULT   | 2 |

---

## Why Enums are Used in Embedded Systems

Enums are commonly used because they:

- Improve code readability
- Avoid **magic numbers**
- Represent system states
- Represent operating modes
- Reduce programming mistakes

### Without Enum

```c
if(state == 2)
```

### With Enum

```c
if(state == ENGINE_FAULT)
```

The second version is much easier to understand.

---

## Internal Working

When an enum variable is stored in memory, only its integer value is stored.

```c
enum EngineState state = ENGINE_ON;
```

Memory stores:

| Address | Value |
|----------|--------|
| 0x1000   | 1 |

The descriptive names exist only during compilation for readability.

---

## Custom Enum Values

Enum values can also be assigned manually.

```c
enum ErrorCode
{
    OK = 0,
    SENSOR_ERROR = 10,
    MOTOR_ERROR = 20
};
```

| Enum Constant | Value |
|----------------|-------|
| OK             | 0 |
| SENSOR_ERROR   | 10 |
| MOTOR_ERROR    | 20 |

---

## Embedded and Automotive Applications

### Engine States

```c
enum EngineState
{
    ENGINE_OFF,
    ENGINE_ON,
    ENGINE_FAULT
};
```

### Gear Positions

```c
enum Gear
{
    PARK,
    REVERSE,
    NEUTRAL,
    DRIVE
};
```

### Communication Status

```c
enum CAN_Status
{
    CAN_OK,
    CAN_BUSY,
    CAN_ERROR
};
```

### ECU Modes

```c
enum ECU_Mode
{
    STARTUP,
    NORMAL,
    DIAGNOSTIC,
    SHUTDOWN
};
```

---

## Interview Questions

### What is an enum?

An enum is a user-defined data type that assigns meaningful names to a set of integer constants.

### Why use enums instead of integers?

Enums improve readability, maintainability, and reduce errors caused by unexplained numeric values.

### What values are assigned by default?

The first constant gets `0`, and each subsequent constant increases by `1`.

### Can enum values be assigned manually?

Yes. Enum values can be explicitly assigned by the programmer.

### How are enums stored internally?

Enums are stored as integer values in memory.

---

## Common Mistakes

- Thinking enums store strings.
- Using raw integers instead of descriptive enum constants.
- Assuming enums consume extra memory.
- Using enums for values that change during execution.

---

## Key Takeaways

- Enums represent fixed sets of related values.
- They improve code readability.
- They reduce the use of magic numbers.
- They are commonly used for states, modes, and error codes in embedded systems.

---

## One-Line Interview Answer

An enum is a user-defined data type that assigns meaningful names to a set of integer constants. It is widely used in embedded systems to represent operating modes, states, error codes, and status values in a readable and maintainable way.
