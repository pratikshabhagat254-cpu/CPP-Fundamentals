# 09 - Bitwise Operators

## Overview

Imagine you're controlling a room full of switches.

Each switch can only be in one of two states:

```text
OFF → 0
ON  → 1
```

Now imagine thousands of such switches working together.

That's essentially how a computer works.

At the lowest level, computers don't understand:

```text
Numbers
Strings
Images
Videos
Games
```

They only understand:

```text
0 and 1
```

Bitwise operators allow us to directly manipulate these 0s and 1s.

This makes them extremely powerful and efficient.

---

# Why Learn Bitwise Operators?

Most beginners think bitwise operators are just another topic.

In reality, they are used in:

```text
Competitive Programming
Data Structures & Algorithms
Computer Graphics
Networking
Operating Systems
Embedded Systems
Game Development
Cryptography
```

Many interview questions become significantly easier once you understand bitwise operations.

---

# What is a Bit?

A bit (Binary Digit) is the smallest unit of data in a computer.

A bit can store only:

```text
0
or
1
```

Example:

```text
1010
```

contains:

```text
4 Bits
```

---

# Storage Units

```text
1 Bit   = 0 or 1
8 Bits  = 1 Byte
1024 Bytes = 1 KB
1024 KB    = 1 MB
1024 MB    = 1 GB
1024 GB    = 1 TB
```

---

# Binary Refresher

Before learning bitwise operators, let's recall Binary.

Example:

```text
13
```

in Binary:

```text
1101
```

Calculation:

```text
1 × 2³ = 8
1 × 2² = 4
0 × 2¹ = 0
1 × 2⁰ = 1
```

Total:

```text
13
```

---

# What are Bitwise Operators?

Bitwise Operators work directly on individual bits.

Instead of operating on numbers as a whole, they operate on:

```text
Bit 1
Bit 2
Bit 3
Bit 4
...
```

This is why they are often faster than traditional arithmetic operations.

---

# Types of Bitwise Operators

```text
&  → Bitwise AND
|  → Bitwise OR
^  → Bitwise XOR
~  → Bitwise NOT
<< → Left Shift
>> → Right Shift
```

---

# Truth Table

Almost every bitwise operation is based on this table.

```text
A  B | AND OR XOR
-----------------
0  0 |  0   0   0
0  1 |  0   1   1
1  0 |  0   1   1
1  1 |  1   1   0
```

Memorize this table.

It appears frequently in interviews.

---

# 1. Bitwise AND (&)

## Rule

AND returns:

```text
1 only when both bits are 1
```

---

## Example

```cpp
5 & 3
```

Binary:

```text
5 = 0101
3 = 0011
```

Operation:

```text
0101
0011
----
0001
```

Result:

```text
1
```

---

## Real World Analogy

Think of AND as:

```text
Requirement 1 ✓
AND
Requirement 2 ✓
```

Both conditions must be satisfied.

Example:

```text
Age ≥ 18
AND
Has Driving License
```

---

## Uses

```text
Masking Bits
Permission Systems
Checking Specific Flags
```

---

# 2. Bitwise OR (|)

## Rule

OR returns:

```text
1 if at least one bit is 1
```

---

## Example

```cpp
5 | 3
```

Binary:

```text
0101
0011
----
0111
```

Result:

```text
7
```

---

## Real World Analogy

```text
Student Passes Exam
OR
Student Has Special Permission
```

Either one is sufficient.

---

## Uses

```text
Setting Bits
Combining Flags
Permission Management
```

---

# 3. Bitwise XOR (^)

## Rule

XOR returns:

```text
1 when bits are different
0 when bits are same
```

---

## Example

```cpp
5 ^ 3
```

Binary:

```text
0101
0011
----
0110
```

Result:

```text
6
```

---

## XOR Special Properties

### Property 1

```text
A ^ A = 0
```

Example:

```text
5 ^ 5 = 0
```

---

### Property 2

```text
A ^ 0 = A
```

Example:

```text
5 ^ 0 = 5
```

---

### Property 3

```text
(A ^ B) ^ B = A
```

Very important for interviews.

---

## Real World Usage

```text
Finding Unique Elements
Swapping Variables
Encryption
```

---

# Swapping Without Temporary Variable

```cpp
a = a ^ b;
b = a ^ b;
a = a ^ b;
```

Example:

```text
a = 5
b = 10
```

After swap:

```text
a = 10
b = 5
```

---

# 4. Bitwise NOT (~)

## Rule

NOT flips every bit.

```text
0 → 1
1 → 0
```

---

## Example

```cpp
~5
```

Binary:

```text
5 = 00000101
```

After NOT:

```text
11111010
```

Result:

```text
-6
```

---

# Why Does ~5 Give -6?

This happens because computers store negative numbers using:

```text
Two's Complement
```

---

# Understanding Two's Complement

Computers represent negative numbers using Two's Complement.

Steps:

### Step 1

Write Binary.

```text
5 = 00000101
```

---

### Step 2

Invert Bits.

```text
11111010
```

---

### Step 3

Add 1.

```text
11111011
```

Which represents:

```text
-5
```

This concept is heavily used in low-level programming.

---

# 5. Left Shift (<<)

## Rule

Shift bits to the left.

Every left shift multiplies by 2.

---

## Example

```cpp
5 << 1
```

Binary:

```text
0101
```

Shift:

```text
1010
```

Result:

```text
10
```

---

## Example

```cpp
5 << 2
```

Result:

```text
20
```

---

## Shortcut

```text
n << 1 = n × 2
n << 2 = n × 4
n << 3 = n × 8
```

---

## Real World Usage

```text
Fast Multiplication
Graphics Programming
Bit Manipulation
```

---

# 6. Right Shift (>>)

## Rule

Shift bits to the right.

Every right shift divides by 2.

---

## Example

```cpp
20 >> 1
```

Binary:

```text
10100
```

Shift:

```text
01010
```

Result:

```text
10
```

---

## Example

```cpp
20 >> 2
```

Result:

```text
5
```

---

## Shortcut

```text
n >> 1 = n ÷ 2
n >> 2 = n ÷ 4
n >> 3 = n ÷ 8
```

---

## Real World Usage

```text
Fast Division
Memory Optimization
Embedded Systems
```

---

# Common Interview Tricks

## Check Even or Odd

### Traditional Method

```cpp
if(n % 2 == 0)
```

---

### Bitwise Method

```cpp
if(n & 1)
```

Explanation:

```text
Odd Numbers  → Last Bit = 1
Even Numbers → Last Bit = 0
```

---

## Check Power of Two

```cpp
if((n & (n - 1)) == 0)
```

Examples:

```text
2
4
8
16
32
64
```

---

## Count Set Bits

A Set Bit means:

```text
Bit = 1
```

Example:

```text
13 = 1101
```

Set Bits:

```text
3
```

This concept appears frequently in coding interviews.

---

# Real World Applications

## Permission Systems

```text
Read Permission
Write Permission
Execute Permission
```

Stored as bits.

---

## Networking

IP Addresses are represented using Binary.

---

## Image Processing

Pixels are manipulated using bitwise operations.

---

## Competitive Programming

Bitmasking is built entirely on bitwise operators.

---

## Operating Systems

Process permissions and memory management use bitwise operations extensively.

---

# Common Beginner Mistakes

## Mistake 1

Confusing:

```cpp
&
```

with:

```cpp
&&
```

Remember:

```text
&  → Bitwise AND
&& → Logical AND
```

---

## Mistake 2

Confusing:

```cpp
|
```

with:

```cpp
||
```

Remember:

```text
|  → Bitwise OR
|| → Logical OR
```

---

## Mistake 3

Ignoring Binary Representation

Never solve bitwise questions without first converting to binary.

---

## Mistake 4

Not Understanding XOR Properties

Most interview questions rely on:

```text
A ^ A = 0
A ^ 0 = A
```

---

# Time Complexity

All basic bitwise operations run in:

```text
O(1)
```

because they operate directly on bits.

This is why they are often faster than arithmetic operations.

---

# How to Compile

```bash
g++ bitwise_and.cpp -o bitwise_and
```

---

# How to Run

```bash
./bitwise_and
```

or

```bash
bitwise_and.exe
```

---

# Folder Structure

```text
09-Bitwise_Operators
│
├── README.md
├── bitwise_and.cpp
├── bitwise_or.cpp
├── bitwise_xor.cpp
├── bitwise_not.cpp
├── left_shift.cpp
└── right_shift.cpp
```

---

# Key Takeaways

* Computers operate using Binary.
* Bitwise operators manipulate individual bits.
* AND requires both bits to be 1.
* OR requires at least one bit to be 1.
* XOR returns 1 when bits differ.
* NOT flips bits.
* Left Shift multiplies by powers of 2.
* Right Shift divides by powers of 2.
* Bitwise operations are extremely fast.
* Many DSA and interview problems rely on XOR and bit manipulation.

---

## Next Topic

➡️ 10 - Functions
