# 10 - Functions

## Overview

Imagine ordering food at a restaurant.

You don't go into the kitchen and cook the food yourself.

Instead:

```text
You Place Order
       ↓
Kitchen Does The Work
       ↓
Food Is Returned
```

Functions work in a similar way.

You call a function, it performs a task, and optionally returns a result.

Functions help us avoid writing the same code repeatedly and make programs easier to read, maintain, and debug.

---

# What is a Function?

A Function is a reusable block of code that performs a specific task.

Instead of writing the same logic multiple times, we can place it inside a function and call it whenever needed.

---

## Real World Analogy

Think of a coffee machine.

```text
Press Button
      ↓
Machine Prepares Coffee
      ↓
Coffee Returned
```

You don't care how the machine works internally.

You simply use it.

Functions work exactly the same way.

---

# Why Do We Need Functions?

Without Functions:

```cpp
cout << "Welcome";
cout << "Welcome";
cout << "Welcome";
cout << "Welcome";
```

With Functions:

```cpp
greet();
greet();
greet();
greet();
```

Advantages:

```text
✔ Reusability
✔ Readability
✔ Modularity
✔ Easier Debugging
✔ Better Maintenance
```

---

# Function Syntax

```cpp
return_type function_name(parameters) {

    // function body

}
```

Example:

```cpp
void greet() {

    cout << "Hello";
}
```

---

# Components of a Function

A Function consists of:

```text
1. Function Declaration
2. Function Definition
3. Function Call
```

---

# Function Declaration

A declaration tells the compiler that a function exists.

Example:

```cpp
void greet();
```

Also called:

```text
Function Prototype
```

---

# Function Definition

The actual implementation of the function.

Example:

```cpp
void greet() {

    cout << "Welcome";
}
```

---

# Function Call

Calling a function means executing it.

Example:

```cpp
greet();
```

Execution Flow:

```text
main()
   ↓
greet()
   ↓
Function Executes
   ↓
Returns Control
```

---

# Return Type

The return type specifies what value a function sends back.

---

## void

Returns nothing.

```cpp
void greet() {

    cout << "Hello";
}
```

---

## int

Returns an integer.

```cpp
int add(int a, int b) {

    return a + b;
}
```

---

## double

Returns decimal values.

```cpp
double area(double radius) {

    return 3.14 * radius * radius;
}
```

---

## Example

```cpp
int add(int a, int b) {

    return a + b;
}
```

Function Call:

```cpp
int result = add(10, 20);
```

Output:

```text
30
```

---

# Parameters and Arguments

Many beginners confuse these terms.

---

## Parameters

Variables declared in the function definition.

```cpp
void greet(string name)
```

Here:

```text
name → Parameter
```

---

## Arguments

Actual values passed during function call.

```cpp
greet("Pratiksha");
```

Here:

```text
"Pratiksha" → Argument
```

---

# Pass By Value

In Pass By Value, a copy of the variable is passed to the function.

Changes inside the function do not affect the original variable.

---

## Example

```cpp
void update(int num) {

    num = num + 10;
}
```

```cpp
int num = 5;

update(num);
```

Result:

```text
Original Value Remains Unchanged
```

---

## Visualization

```text
Original Variable
       ↓
Copy Created
       ↓
Function Uses Copy
```

---

# Pass By Reference

In Pass By Reference, the actual variable is shared with the function.

Changes inside the function affect the original variable.

---

## Syntax

```cpp
int &num
```

The `&` operator creates a reference.

---

## Example

```cpp
void update(int &num) {

    num = num + 10;
}
```

Output:

```text
Original Variable Gets Modified
```

---

## Visualization

```text
Function
    ↓
Directly Accesses
    ↓
Original Variable
```

---

# Pass By Value vs Pass By Reference

```text
Pass By Value
│
├── Copy Created
├── Original Safe
└── More Memory Used

Pass By Reference
│
├── No Copy Created
├── Original Modified
└── More Efficient
```

---

# Default Arguments

Default Arguments provide a value when no argument is supplied.

---

## Example

```cpp
void printName(string name = "Guest") {

    cout << name;
}
```

Function Call:

```cpp
printName();
```

Output:

```text
Guest
```

---

## Override Default Value

```cpp
printName("Pratiksha");
```

Output:

```text
Pratiksha
```

---

# Inline Functions

Inline Functions reduce function call overhead.

The compiler may replace the function call with the actual code.

---

## Syntax

```cpp
inline int square(int n)
```

---

## Example

```cpp
inline int square(int n) {

    return n * n;
}
```

Output:

```text
square(5)
↓
25
```

---

## When To Use?

Use only for:

```text
Small Functions
Simple Logic
Frequently Called Functions
```

---

# Function Overloading

Function Overloading allows multiple functions with the same name.

The difference must be in:

```text
Number of Parameters
OR
Data Types
```

---

## Example

```cpp
int add(int a, int b)
```

```cpp
double add(double a, double b)
```

Both functions have the same name:

```text
add()
```

But different parameter types.

---

## Why Use It?

Because the same operation can work with different data types.

Example:

```text
Addition
├── Integers
├── Floats
└── Doubles
```

---

# Recursion Introduction

Recursion is a technique where a function calls itself.

---

## Example

```cpp
void printNumbers(int n) {

    if(n == 0)
        return;

    cout << n;

    printNumbers(n - 1);
}
```

Output:

```text
5 4 3 2 1
```

---

# Base Case

The Base Case stops recursion.

Without it:

```text
Function
↓
Calls Itself
↓
Calls Itself
↓
Calls Itself Forever
```

Result:

```text
Stack Overflow
```

---

## Example

```cpp
if(n == 0)
    return;
```

This is the Base Case.

---

# Understanding the Call Stack

Every function call is stored inside a Call Stack.

Example:

```cpp
printNumbers(3);
```

Stack:

```text
printNumbers(3)
printNumbers(2)
printNumbers(1)
printNumbers(0)
```

Then functions return one by one.

---

# Scope of Variables

Scope determines where a variable can be accessed.

---

## Local Variable

Created inside a function.

```cpp
void demo() {

    int x = 10;
}
```

Accessible only inside:

```text
demo()
```

---

## Global Variable

Declared outside all functions.

```cpp
int x = 10;
```

Accessible throughout the program.

---

# Common Beginner Mistakes

## Mistake 1

Forgetting Parentheses

Wrong:

```cpp
greet;
```

Correct:

```cpp
greet();
```

---

## Mistake 2

Missing Return Statement

Wrong:

```cpp
int add(int a, int b) {

}
```

Correct:

```cpp
return a + b;
```

---

## Mistake 3

Infinite Recursion

Wrong:

```cpp
printNumbers(n);
```

without a Base Case.

---

## Mistake 4

Confusing Parameters and Arguments

```text
Function Definition → Parameters
Function Call       → Arguments
```

---

# Compile and Run

Compile:

```bash
g++ function_basics.cpp -o function_basics
```

Run:

```bash
./function_basics
```

or

```bash
function_basics.exe
```

---

# Folder Structure

```text
10-Functions
│
├── README.md
├── function_basics.cpp
├── function_with_return.cpp
├── pass_by_value.cpp
├── pass_by_reference.cpp
├── default_arguments.cpp
├── inline_functions.cpp
├── function_overloading.cpp
└── recursion_intro.cpp
```

---

# Key Takeaways

* Functions are reusable blocks of code.
* Functions improve readability and maintainability.
* Functions can accept parameters and return values.
* Pass By Value creates a copy.
* Pass By Reference modifies the original variable.
* Default Arguments provide fallback values.
* Inline Functions can improve performance for small functions.
* Function Overloading allows the same function name with different parameters.
* Recursion is when a function calls itself.
* Every recursive function must have a Base Case.

---

## Next Topic

➡️ 11 - Arrays
