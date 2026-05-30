# 07 - Patterns

## Overview

Pattern problems are one of the best ways to learn loops and nested loops in C++.

Although pattern questions are rarely asked directly in interviews, they help build the thinking process required for:

* Arrays
* Matrices
* Strings
* Recursion
* Dynamic Programming
* Competitive Programming
* Data Structures & Algorithms

Pattern problems teach us how to visualize rows and columns and convert that visualization into code.

---

# What are Patterns?

A pattern is a structured arrangement of characters, numbers, or symbols printed according to a specific logic.

### Example

```text id="nt3q42"
*
**
***
****
*****
```

The goal is not printing stars.

The goal is learning how loops work together.

---

# Why Learn Pattern Problems?

Pattern questions improve:

```text id="2s9thj"
Loop Understanding
Logical Thinking
Problem Solving
Visualization Skills
Nested Loop Concepts
```

They form the foundation of DSA problem-solving.

---

# How to Think About Patterns

Most beginners try to memorize patterns.

This is the wrong approach.

Instead ask:

```text id="mp8sl4"
1. How many rows?
2. How many columns?
3. What should be printed?
4. What changes every row?
```

---

# Pattern Building Strategy

For every pattern:

```text id="sm0dww"
Step 1 → Count Rows
Step 2 → Count Columns
Step 3 → Observe Relationship
Step 4 → Write Outer Loop
Step 5 → Write Inner Loop
Step 6 → Print Pattern
```

---

# Understanding Nested Loops

Patterns are built using nested loops.

---

## Outer Loop

Controls rows.

```cpp id="65g7mf"
for(int i = 1; i <= n; i++)
```

---

## Inner Loop

Controls columns.

```cpp id="8swjlwm"
for(int j = 1; j <= n; j++)
```

---

## Visualization

```text id="s1pnj8"
Outer Loop → Rows

1
2
3
4
5

Inner Loop → Columns

* * * * *
```

Together they create patterns.

---

# Pattern Category 1: Square Pattern

## Problem

Print:

```text id="15nbx3"
* * * * *
* * * * *
* * * * *
* * * * *
* * * * *
```

---

## Logic

```text id="ytv0m9"
Rows = 5
Columns = 5

Print * in every position
```

---

## Code

```cpp id="f0e8c8"
for(int i = 1; i <= 5; i++) {

    for(int j = 1; j <= 5; j++) {
        cout << "* ";
    }

    cout << endl;
}
```

---

## Time Complexity

```text id="j0slr6"
O(n²)
```

---

# Pattern Category 2: Rectangle Pattern

## Problem

Print:

```text id="msf0ju"
* * * * * *
* * * * * *
* * * * * *
* * * * * *
```

---

## Logic

```text id="q7r9r4"
Rows = 4
Columns = 6
```

Rows and columns are different.

---

## Code

```cpp id="jlwmku"
for(int i = 1; i <= rows; i++) {

    for(int j = 1; j <= cols; j++) {
        cout << "* ";
    }

    cout << endl;
}
```

---

# Pattern Category 3: Pyramid Pattern

## Problem

```text id="hpx6zj"
    *
   ***
  *****
 *******
*********
```

---

## Observation

Each row contains:

```text id="wy0zth"
Spaces ↓
Stars  ↑
```

---

## Formula

For row i:

```text id="8pt4aj"
Spaces = n - i
Stars  = 2*i - 1
```

---

## Example

```text id="f2o7gh"
Row 1 → 1 Star
Row 2 → 3 Stars
Row 3 → 5 Stars
Row 4 → 7 Stars
Row 5 → 9 Stars
```

---

## Code Structure

```cpp id="4v6a3w"
Space Loop
Star Loop
```

---

# Pattern Category 4: Inverted Pyramid

## Problem

```text id="4u2whc"
*********
 *******
  *****
   ***
    *
```

---

## Observation

Opposite of Pyramid.

```text id="u4zvul"
Spaces ↑
Stars  ↓
```

---

## Formula

```text id="jvfpq8"
Spaces = n - i
Stars  = 2*i - 1
```

Loop runs in reverse order.

---

# Pattern Category 5: Diamond Pattern

## Problem

```text id="7b9yrz"
    *
   ***
  *****
 *******
*********
 *******
  *****
   ***
    *
```

---

## Observation

Diamond =

```text id="8j5zow"
Upper Pyramid
+
Lower Inverted Pyramid
```

---

## Approach

```text id="tvwddf"
Step 1 → Print Pyramid
Step 2 → Print Inverted Pyramid
```

---

# Pattern Category 6: Number Patterns

Instead of stars, numbers are printed.

---

## Example

```text id="7zd53r"
1
1 2
1 2 3
1 2 3 4
1 2 3 4 5
```

---

## Logic

```text id="g47m7z"
Row Number = Count of Numbers
```

---

## Code

```cpp id="wg12z4"
for(int i = 1; i <= n; i++) {

    for(int j = 1; j <= i; j++) {
        cout << j << " ";
    }

    cout << endl;
}
```

---

# Pattern Category 7: Alphabet Patterns

Instead of stars or numbers, characters are printed.

---

## Example

```text id="c6r3tf"
A
A B
A B C
A B C D
A B C D E
```

---

## Logic

Use ASCII values.

```text id="4wnlj1"
A = 65
B = 66
C = 67
```

---

## Code

```cpp id="2zyyuk"
for(char ch = 'A'; ch <= 'A' + i; ch++) {
    cout << ch << " ";
}
```

---

# Pattern Recognition Cheat Sheet

## Fixed Rows + Fixed Columns

```text id="uz3ebw"
Square
Rectangle
```

Use:

```cpp id="onotfp"
for()
{
    for()
}
```

---

## Increasing Pattern

```text id="5isdc4"
*
**
***
****
*****
```

Use:

```cpp id="2xkqv4"
j <= i
```

---

## Decreasing Pattern

```text id="u74f6o"
*****
****
***
**
*
```

Use:

```cpp id="0o4js7"
j <= n-i+1
```

---

## Pyramid Pattern

```text id="yran6f"
Spaces + Stars
```

Use:

```text id="v7w5f8"
Spaces = n-i
Stars  = 2*i-1
```

---

# Dry Run Example

Consider:

```cpp id="o44fbv"
for(int i = 1; i <= 3; i++) {

    for(int j = 1; j <= i; j++) {
        cout << "*";
    }

    cout << endl;
}
```

---

### Iteration 1

```text id="5zh9z6"
i = 1

*
```

---

### Iteration 2

```text id="7xnn4m"
i = 2

**
```

---

### Iteration 3

```text id="g2vdfw"
i = 3

***
```

---

## Final Output

```text id="h4bpt8"
*
**
***
```

---

# Common Beginner Mistakes

## Mistake 1

Mixing rows and columns.

Wrong thinking:

```text id="y4wzqm"
Outer Loop = Columns
Inner Loop = Rows
```

Correct:

```text id="e0y6gg"
Outer Loop = Rows
Inner Loop = Columns
```

---

## Mistake 2

Forgetting endl

Wrong:

```cpp id="c5gf1u"
cout << "*";
```

Pattern prints in one line.

---

## Mistake 3

Incorrect Loop Bounds

Wrong:

```cpp id="pcah2c"
j <= n
```

when

```cpp id="nhbth0"
j <= i
```

is required.

---

## Mistake 4

Memorizing Patterns

Don't memorize.

Instead:

```text id="9qz1tf"
Observe
Visualize
Identify Formula
Code
```

---

# Time Complexity

## Square Pattern

```text id="ydr7r6"
O(n²)
```

---

## Rectangle Pattern

```text id="g0vc55"
O(rows × columns)
```

---

## Pyramid Pattern

```text id="1xtr5s"
O(n²)
```

---

## Diamond Pattern

```text id="n87xvf"
O(n²)
```

---

# Interview Perspective

Interviewers generally don't ask pattern questions directly.

They use them to evaluate:

```text id="z4w1t7"
Loop Understanding
Problem Solving
Observation Skills
Nested Loop Concepts
Code Structuring
```

Students who understand patterns usually learn arrays and matrices much faster.

---

# How to Compile

```bash id="6u4icf"
g++ square_pattern.cpp -o square_pattern
```

---

# How to Run

```bash id="g21cg4"
./square_pattern
```

or

```bash id="mcfz5o"
square_pattern.exe
```

---

# Folder Structure

```text id="6fd4j4"
07-Patterns
│
├── README.md
├── square_pattern.cpp
├── rectangle_pattern.cpp
├── pyramid_pattern.cpp
├── inverted_pyramid.cpp
├── diamond_pattern.cpp
├── number_patterns.cpp
└── alphabet_patterns.cpp
```

---

# Key Takeaways

* Pattern problems are applications of nested loops.
* Outer loops control rows.
* Inner loops control columns.
* Most patterns follow mathematical relationships.
* Focus on logic rather than memorization.
* Pattern solving develops DSA thinking.
* Understanding patterns makes arrays, matrices, and recursion easier.

---

## Next Topic

➡️ 08 - Number System
