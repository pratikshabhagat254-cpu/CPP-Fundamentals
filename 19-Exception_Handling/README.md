# 19 - Exception Handling

## Why Do We Need Exception Handling?

Imagine you're using an ATM.

You try to withdraw:

```text
₹10,000
```

but your account balance is:

```text
₹5,000
```

What should happen?

Option 1:

```text
ATM Crashes
```

❌ Bad User Experience

Option 2:

```text
"Insufficient Balance"
```

✅ Clear Error Message

This is exactly why Exception Handling exists.

Instead of crashing the program when something unexpected happens, we can handle the error gracefully and continue execution.

---

## Real World Analogy

Think of a seatbelt in a car.

Most of the time:

```text
Everything Works Normally
```

But when something goes wrong:

```text
Accident
↓
Protection Activated
```

Exception Handling works similarly.

Most of the time the program runs normally.

When an error occurs:

```text
Error
↓
Exception Handling
↓
Program Recovers Safely
```

---

## What You'll Learn

```text
✓ Runtime Errors
✓ try Block
✓ throw Keyword
✓ catch Block
✓ Standard Exceptions
✓ Custom Exceptions
✓ Error Handling Best Practices
```

---

# Exception Handling Workflow

```text
try
 ↓
Error Occurs?
 ↓
throw
 ↓
catch
 ↓
Handle Error
```

---

# What is an Exception?

An Exception is an unexpected event that occurs during program execution.

Examples:

```text
Division By Zero
Invalid Input
File Not Found
Insufficient Balance
Array Index Out Of Range
```

These situations can cause programs to behave incorrectly.

---

# What is Exception Handling?

Exception Handling is a mechanism used to detect and handle runtime errors.

Instead of:

```text
Program Crashes
```

we get:

```text
Meaningful Error Message
```

and controlled program execution.

---

# 1. try Block

## Real World Example

Imagine carrying fragile glass items.

You know there is a possibility that something may break.

So you place them inside:

```text
Protective Packaging
```

Similarly:

```cpp
try
{
}
```

contains code that may generate an error.

---

## Syntax

```cpp
try
{
    // Risky Code
}
```

Example:

```cpp
try
{
    throw 10;
}
```

---

## Purpose

The try block tells the compiler:

```text
"This code might generate an exception."
```

---

# 2. throw Keyword

## Real World Example

Imagine a fire alarm.

Everything is normal until smoke is detected.

Then:

```text
Alarm Triggered
```

The throw keyword works similarly.

It signals that an exception has occurred.

---

## Syntax

```cpp
throw value;
```

Example:

```cpp
throw 10;
```

or

```cpp
throw "Error";
```

or

```cpp
throw runtime_error("Invalid Input");
```

---

## Purpose

Used to generate an exception.

---

# 3. catch Block

## Real World Example

Imagine a hospital emergency team.

When an emergency occurs:

```text
Emergency
↓
Medical Team Responds
```

Similarly:

```text
Exception
↓
Catch Block Handles It
```

---

## Syntax

```cpp
catch(type variable)
{
}
```

Example:

```cpp
catch(int value)
{
    cout << value;
}
```

---

# Complete Example

```cpp
try
{
    throw 10;
}
catch(int value)
{
    cout << value;
}
```

Output:

```text
10
```

---

# How Exception Handling Works

Example:

```cpp
try
{
    throw 100;
}
catch(int value)
{
    cout << value;
}
```

Execution Flow:

```text
Program Starts
       ↓
Enter try Block
       ↓
throw 100
       ↓
Exception Generated
       ↓
catch Block Found
       ↓
Exception Handled
       ↓
Program Continues
```

---

# Runtime Errors

Runtime Errors occur while the program is running.

Examples:

```text
Division By Zero
File Access Failure
Memory Allocation Failure
Invalid User Input
```

These errors cannot always be predicted during compilation.

---

# Example: Age Validation

Imagine applying for a driving license.

Rule:

```text
Minimum Age = 18
```

Input:

```text
15
```

Program:

```text
Age < 18
↓
Exception Thrown
↓
User Receives Error Message
```

Instead of allowing invalid data.

---

# Standard Exceptions

C++ provides built-in exception classes.

Header:

```cpp
#include <stdexcept>
```

Common Exceptions:

```text
runtime_error
logic_error
overflow_error
underflow_error
```

---

# runtime_error

Used for runtime-related problems.

Example:

```cpp
throw runtime_error(
    "Insufficient Balance"
);
```

Output:

```text
Insufficient Balance
```

---

# What is a Custom Exception?

A Custom Exception is an exception designed by the programmer for a specific situation.

Example:

```text
Bank Balance Too Low
Invalid Login
Negative Marks Entered
Product Out Of Stock
```

These are application-specific errors.

---

# Example: Bank Withdrawal

Account Balance:

```text
₹5000
```

User Requests:

```text
₹10000
```

Condition:

```cpp
if(withdrawAmount > balance)
{
    throw runtime_error(
        "Insufficient Balance"
    );
}
```

Result:

```text
Exception Generated
```

and handled safely.

---

# Benefits of Exception Handling

```text
✔ Prevents Program Crashes
✔ Improves User Experience
✔ Makes Debugging Easier
✔ Handles Unexpected Situations
✔ Produces Cleaner Code
```

---

# Common Interview Questions

## Q1

What is an Exception?

Answer:

```text
An unexpected event that occurs during program execution.
```

---

## Q2

What is the purpose of try?

Answer:

```text
Contains code that may generate an exception.
```

---

## Q3

What is the purpose of throw?

Answer:

```text
Generates an exception.
```

---

## Q4

What is the purpose of catch?

Answer:

```text
Handles an exception.
```

---

## Q5

Can multiple catch blocks exist?

Answer:

```text
Yes
```

Example:

```cpp
catch(int value)
{
}

catch(char value)
{
}
```

---

# Common Beginner Mistakes

## Mistake 1

Throwing an exception without a catch block.

Wrong:

```cpp
throw 10;
```

Without handling it.

---

## Mistake 2

Using Exception Handling for normal program logic.

Bad Example:

```cpp
throw 1;
```

for every small condition.

Exceptions should be used only for exceptional situations.

---

## Mistake 3

Ignoring meaningful error messages.

Bad:

```cpp
throw 0;
```

Better:

```cpp
throw runtime_error(
    "Invalid Input"
);
```

---

# Where is Exception Handling Used?

Exception Handling is heavily used in:

```text
Banking Applications
Payment Systems
E-Commerce Platforms
File Management Systems
Game Development
Desktop Applications
Backend Development
```

Almost every production application uses exception handling.

---

# Time Complexity

Exception Handling itself does not have a fixed algorithmic complexity.

Normal execution:

```text
O(1)
```

The complexity depends on the operations inside the try block.

---

# Folder Structure

```text
19-Exception-Handling
│
├── README.md
├── try_catch.cpp
└── custom_exception.cpp
```

---

# Key Takeaways

* Exceptions represent unexpected runtime events.
* try contains risky code.
* throw generates an exception.
* catch handles an exception.
* Exception Handling prevents program crashes.
* Standard Exceptions are available through `<stdexcept>`.
* Custom Exceptions allow meaningful application-specific errors.
* Exception Handling is widely used in real-world software.

---

## Next Topic

➡️ 20 - File Handling

You'll learn how programs create, read, write, and update files stored on a computer, enabling data persistence beyond program execution.
