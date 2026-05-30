# 08 - Number System

## Overview

Every photo you click, every video you watch, every game you play, and every program you write eventually becomes a collection of numbers inside a computer.

But here's the interesting part:

Computers don't understand:

```text
A, B, C
Hello
Images
Videos
Songs
```

They only understand two states:

```text
0 → OFF
1 → ON
```

This is why understanding Number Systems is one of the most important foundations in Computer Science.

Number Systems form the bridge between human-readable information and machine-readable information.

---

# Why Should We Learn Number Systems?

Imagine you have a room with a single light bulb.

The bulb can be:

```text
OFF → 0
ON  → 1
```

Now imagine 8 bulbs together.

Example:

```text
1 1 0 1 0 0 1 1
```

A computer stores information in a similar way.

Everything eventually becomes combinations of:

```text
0s and 1s
```

Understanding Number Systems helps in:

* Binary Operations
* Bitwise Operators
* Memory Management
* Computer Architecture
* Competitive Programming
* Data Structures & Algorithms

---

# What is a Number System?

A Number System is a way of representing numbers using a set of digits.

Different number systems use different bases.

---

# Common Number Systems

| Number System | Base | Digits Used  |
| ------------- | ---- | ------------ |
| Decimal       | 10   | 0 - 9        |
| Binary        | 2    | 0, 1         |
| Octal         | 8    | 0 - 7        |
| Hexadecimal   | 16   | 0 - 9, A - F |

---

# Understanding Base (Radix)

The base tells us how many unique digits are available.

---

## Decimal System (Base 10)

This is the number system we use every day.

Example:

```text
583
```

Breakdown:

```text
5 × 10² = 500
8 × 10¹ = 80
3 × 10⁰ = 3
```

Total:

```text
583
```

---

## Real Life Example

When counting money:

```text
₹1
₹10
₹100
₹1000
```

Each position increases by powers of 10.

That's Decimal Number System.

---

# Binary Number System (Base 2)

Computers use Binary.

Only two digits are allowed:

```text
0
1
```

Example:

```text
1101₂
```

Breakdown:

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

Therefore:

```text
1101₂ = 13₁₀
```

---

# Why Do Computers Use Binary?

Imagine a switch.

```text
ON  → 1
OFF → 0
```

Electronic circuits can easily distinguish between:

```text
High Voltage
Low Voltage
```

Using only two states makes computers:

* Faster
* Reliable
* Less Error-Prone

This is why computers use Binary instead of Decimal.

---

# Decimal to Binary Conversion

## Method

Repeatedly divide the number by 2.

Store the remainders.

Read the remainders from bottom to top.

---

## Example: Convert 13 to Binary

```text
13 ÷ 2 = 6  remainder 1
 6 ÷ 2 = 3  remainder 0
 3 ÷ 2 = 1  remainder 1
 1 ÷ 2 = 0  remainder 1
```

Read from bottom to top:

```text
1101
```

Answer:

```text
13₁₀ = 1101₂
```

---

# Binary to Decimal Conversion

Multiply each digit by powers of 2.

Example:

```text
1101₂
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

Answer:

```text
1101₂ = 13₁₀
```

---

# Binary Reference Table

```text
Decimal    Binary
-----------------
0          0000
1          0001
2          0010
3          0011
4          0100
5          0101
6          0110
7          0111
8          1000
9          1001
10         1010
11         1011
12         1100
13         1101
14         1110
15         1111
```

---

# Octal Number System (Base 8)

Uses digits:

```text
0 1 2 3 4 5 6 7
```

Example:

```text
123₈
```

Calculation:

```text
1 × 8² = 64
2 × 8¹ = 16
3 × 8⁰ = 3
```

Total:

```text
83
```

Therefore:

```text
123₈ = 83₁₀
```

---

# Why Was Octal Used?

Earlier computer systems grouped Binary digits into sets of 3.

Example:

```text
001 010 111
```

Which becomes:

```text
1 2 7
```

Octal is more compact than Binary.

---

# Decimal to Octal Conversion

Repeatedly divide by:

```text
8
```

Example:

```text
83 ÷ 8 = 10 remainder 3
10 ÷ 8 = 1  remainder 2
 1 ÷ 8 = 0  remainder 1
```

Read from bottom to top:

```text
123₈
```

---

# Hexadecimal Number System (Base 16)

Uses:

```text
0 1 2 3 4 5 6 7 8 9 A B C D E F
```

---

## Why A to F?

Decimal has only:

```text
0 - 9
```

Hexadecimal requires:

```text
16 symbols
```

So:

```text
A = 10
B = 11
C = 12
D = 13
E = 14
F = 15
```

---

# Hexadecimal Reference Table

```text
Decimal    Hexadecimal
----------------------
10         A
11         B
12         C
13         D
14         E
15         F
```

---

# Example: Convert 255 to Hexadecimal

```text
255 ÷ 16 = 15 remainder 15
15 ÷ 16 = 0  remainder 15
```

Remainders:

```text
15 → F
15 → F
```

Answer:

```text
FF₁₆
```

---

# Why Do Programmers Use Hexadecimal?

Imagine writing:

```text
11111111
```

instead of:

```text
FF
```

Hexadecimal is shorter and easier to read.

---

# Where is Hexadecimal Used?

```text
Memory Addresses
Color Codes
Machine Code
Networking
Operating Systems
```

Example:

```text
#FFFFFF → White
#000000 → Black
```

Used in Web Development.

---

# Relationship Between Number Systems

```text
Decimal
   ↓
Binary
   ↓
Octal
   ↓
Hexadecimal
```

All four represent the same information differently.

---

# Memory Representation

Computers store data in:

```text
Bits
```

A bit is:

```text
0 or 1
```

---

## 8 Bits = 1 Byte

Example:

```text
01000001
```

Represents:

```text
'A'
```

using ASCII.

---

## Storage Units

```text
8 Bits      = 1 Byte
1024 Bytes  = 1 KB
1024 KB     = 1 MB
1024 MB     = 1 GB
1024 GB     = 1 TB
```

---

# Common Interview Questions

## Q1

Convert:

```text
13 → Binary
```

Answer:

```text
1101
```

---

## Q2

Convert:

```text
1101 → Decimal
```

Answer:

```text
13
```

---

## Q3

Why do computers use Binary?

Answer:

```text
Electronic circuits can easily represent two states:
ON and OFF.
```

---

## Q4

What is the base of Hexadecimal?

Answer:

```text
16
```

---

# Common Beginner Mistakes

## Mistake 1

Reading binary left to right.

Always remember:

```text
Powers increase from right to left.
```

---

## Mistake 2

Forgetting powers start from 0.

Wrong:

```text
2¹ 2² 2³ ...
```

Correct:

```text
2⁰ 2¹ 2² 2³ ...
```

---

## Mistake 3

Thinking A-F are letters.

In Hexadecimal:

```text
A = 10
B = 11
C = 12
D = 13
E = 14
F = 15
```

---

# How to Compile

```bash
g++ decimal_to_binary.cpp -o decimal_to_binary
```

---

# How to Run

```bash
./decimal_to_binary
```

or

```bash
decimal_to_binary.exe
```

---

# Folder Structure

```text
08-Number_System
│
├── README.md
├── decimal_to_binary.cpp
├── binary_to_decimal.cpp
├── decimal_to_octal.cpp
└── decimal_to_hexadecimal.cpp
```

---

# Key Takeaways

* Computers understand only Binary.
* Decimal uses Base 10.
* Binary uses Base 2.
* Octal uses Base 8.
* Hexadecimal uses Base 16.
* Binary is the foundation of Bitwise Operations.
* Hexadecimal provides a compact representation of Binary.
* Number Systems are fundamental for DSA, Competitive Programming, and Computer Science.

---

## Next Topic

➡️ 09 - Bitwise Operators
