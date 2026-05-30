# 04 - Operators

## Overview

Operators are special symbols that perform operations on variables and values.

They allow us to:

* Perform calculations
* Compare values
* Make decisions
* Assign values
* Modify variables efficiently

Without operators, programming would be nearly impossible because we wouldn't be able to manipulate data.

---

# What is an Operator?

An operator is a symbol that tells the compiler to perform a specific operation.

### Example

```cpp
int a = 10;
int b = 20;

cout << a + b;
```

Here:

```text
a and b -> Operands
+       -> Operator
```

Output:

```text
30
```

---

# Types of Operators in C++

```text
1. Arithmetic Operators
2. Relational Operators
3. Logical Operators
4. Assignment Operators
5. Increment & Decrement Operators
6. Ternary Operator
7. Bitwise Operators (covered separately)
```

---

# 1. Arithmetic Operators

Arithmetic Operators are used to perform mathematical calculations.

## Addition (+)

Adds two values.

### Example

```cpp
int a = 10;
int b = 5;

cout << a + b;
```

Output:

```text
15
```

### Real World Usage

* Total Marks
* Sum of Prices
* Total Revenue

---

## Subtraction (-)

Subtracts one value from another.

### Example

```cpp
cout << 10 - 5;
```

Output:

```text
5
```

### Real World Usage

* Remaining Balance
* Inventory Reduction
* Profit/Loss Calculation

---

## Multiplication (*)

Multiplies values.

### Example

```cpp
cout << 10 * 5;
```

Output:

```text
50
```

### Real World Usage

* Area Calculation
* Salary Computation
* Interest Calculations

---

## Division (/)

Divides values.

### Example

```cpp
cout << 10 / 5;
```

Output:

```text
2
```

---

### Integer Division

```cpp
cout << 10 / 3;
```

Output:

```text
3
```

Why?

```text
Both operands are integers.
Decimal part gets discarded.
```

---

### Floating Point Division

```cpp
cout << 10.0 / 3;
```

Output:

```text
3.33333
```

### Real World Usage

* Average Calculation
* Percentage Calculation

---

## Modulus (%)

Returns the remainder after division.

### Example

```cpp
cout << 10 % 3;
```

Output:

```text
1
```

### Real World Usage

Checking:

```text
Even/Odd Numbers
Cyclic Patterns
Hashing Functions
```

Example:

```cpp
if(num % 2 == 0)
```

---

# 2. Relational Operators

Relational operators compare two values.

The result is always:

```text
true  -> 1
false -> 0
```

---

## Equal To (==)

Checks if two values are equal.

### Example

```cpp
10 == 10
```

Output:

```text
1
```

### Used In

* Login Systems
* Password Validation
* Input Verification

---

## Not Equal To (!=)

Checks whether values are different.

### Example

```cpp
10 != 20
```

Output:

```text
1
```

---

## Greater Than (>)

### Example

```cpp
10 > 5
```

Output:

```text
1
```

### Used In

* Eligibility Checking
* Ranking Systems
* Sorting Algorithms

---

## Less Than (<)

### Example

```cpp
5 < 10
```

Output:

```text
1
```

---

## Greater Than Or Equal To (>=)

### Example

```cpp
age >= 18
```

### Used In

* Voting Eligibility
* Driving License Eligibility

---

## Less Than Or Equal To (<=)

### Example

```cpp
marks <= 100
```

---

# 3. Logical Operators

Logical operators combine multiple conditions.

---

## Logical AND (&&)

Returns true only when both conditions are true.

### Example

```cpp
(age >= 18) && (citizen == true)
```

Output:

```text
1
```

### Real World Usage

```text
Login Permissions
Eligibility Criteria
Form Validation
```

---

## Logical OR (||)

Returns true if at least one condition is true.

### Example

```cpp
(age >= 18) || (hasPermission == true)
```

Output:

```text
1
```

### Real World Usage

```text
Multiple Login Methods
Search Filters
Access Rules
```

---

## Logical NOT (!)

Reverses the result.

### Example

```cpp
!(10 > 5)
```

Output:

```text
0
```

### Real World Usage

```cpp
if(!isLoggedIn)
```

---

# 4. Assignment Operators

Used to assign values to variables.

---

## Assignment (=)

### Example

```cpp
int a = 10;
```

Stores value 10 inside variable a.

---

## Compound Assignment Operators

### Addition Assignment

```cpp
a += 5;
```

Equivalent to:

```cpp
a = a + 5;
```

---

### Subtraction Assignment

```cpp
a -= 5;
```

Equivalent to:

```cpp
a = a - 5;
```

---

### Multiplication Assignment

```cpp
a *= 5;
```

Equivalent to:

```cpp
a = a * 5;
```

---

### Division Assignment

```cpp
a /= 5;
```

Equivalent to:

```cpp
a = a / 5;
```

---

### Modulus Assignment

```cpp
a %= 5;
```

Equivalent to:

```cpp
a = a % 5;
```

---

# 5. Increment & Decrement Operators

Used to increase or decrease values by one.

---

## Increment (++)

### Example

```cpp
a++;
```

Equivalent to:

```cpp
a = a + 1;
```

---

## Decrement (--)

### Example

```cpp
a--;
```

Equivalent to:

```cpp
a = a - 1;
```

---

## Pre Increment

```cpp
++a
```

### Working

```text
1. Increment value
2. Use value
```

Example:

```cpp
int a = 5;

cout << ++a;
```

Output:

```text
6
```

---

## Post Increment

```cpp
a++
```

### Working

```text
1. Use value
2. Increment value
```

Example:

```cpp
int a = 5;

cout << a++;
```

Output:

```text
5
```

Final value:

```text
6
```

---

# 6. Ternary Operator

A shorthand version of if-else.

---

## Syntax

```cpp
condition ? expression1 : expression2;
```

---

## Example

```cpp
int age = 20;

(age >= 18)
? cout << "Adult"
: cout << "Minor";
```

Output:

```text
Adult
```

### Real World Usage

```text
Quick Decisions
Conditional Output
Simple Validations
```

---

# Operator Precedence

When multiple operators appear in an expression, precedence decides which operator executes first.

---

## Example

```cpp
10 + 5 * 2
```

Output:

```text
20
```

Because:

```text
5 * 2 = 10
10 + 10 = 20
```

Multiplication has higher precedence than addition.

---

## Example with Parentheses

```cpp
(10 + 5) * 2
```

Output:

```text
30
```

Parentheses always get highest priority.

---

# Common Operator Precedence Order

```text
()
Unary Operators
*, /, %
+, -
<, <=, >, >=
==, !=
&&
||
=
```

---

# Common Beginner Mistakes

## Assignment vs Equality

Wrong:

```cpp
if(a = 5)
```

Correct:

```cpp
if(a == 5)
```

---

## Integer Division Mistake

Wrong Expectation:

```cpp
10 / 3
```

Expected:

```text
3.33
```

Actual:

```text
3
```

Use:

```cpp
10.0 / 3
```

instead.

---

# How to Compile

```bash
g++ arithmetic.cpp -o arithmetic
```

---

# How to Run

```bash
./arithmetic
```

or

```bash
arithmetic.exe
```

---

# Folder Structure

```text
04-Operators
│
├── README.md
├── arithmetic.cpp
├── relational.cpp
├── logical.cpp
├── assignment.cpp
├── increment_decrement.cpp
├── ternary.cpp
└── precedence.cpp
```

---

# Key Takeaways

* Operators perform actions on data.
* Arithmetic operators perform calculations.
* Relational operators compare values.
* Logical operators combine conditions.
* Assignment operators store and update values.
* Increment and decrement modify values by one.
* Ternary operator is a compact if-else.
* Operator precedence determines evaluation order.
* Parentheses can be used to control execution order.

---

## Next Topic

➡️ 05 - Conditionals
