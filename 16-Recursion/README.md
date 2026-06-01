# 16 - Recursion

## Overview

Imagine standing in front of two mirrors facing each other.

You see:

```text
Mirror
   ↓
Mirror
   ↓
Mirror
   ↓
Mirror
   ↓
...
```

The same image appears repeatedly.

Recursion works similarly.

A function keeps calling itself until a condition tells it to stop.

Recursion is one of the most important concepts in programming because it is used in:

```text
Trees
Graphs
Backtracking
Divide & Conquer
Dynamic Programming
Competitive Programming
```

Many advanced DSA problems become much easier when solved recursively.

---

# What is Recursion?

Recursion is a programming technique where a function calls itself.

Example:

```cpp
void printNumbers(int n) {

    if(n == 0)
        return;

    cout << n << " ";

    printNumbers(n - 1);
}
```

Here:

```text
printNumbers()
calls
printNumbers()
```

which makes it recursive.

---

# Why Do We Need Recursion?

Many problems naturally break into smaller versions of themselves.

Example:

Finding:

```text
5!
```

can be written as:

```text
5 × 4!
```

Similarly:

```text
4!
```

can be written as:

```text
4 × 3!
```

This pattern continues until:

```text
1!
```

Recursion allows us to express such problems elegantly.

---

# Components of Recursion

Every recursive function must have:

```text
1. Base Case
2. Recursive Call
```

---

# Base Case

The condition that stops recursion.

Example:

```cpp
if(n == 0) {

    return;
}
```

Without a Base Case:

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

# Recursive Call

The function calling itself.

Example:

```cpp
printNumbers(n - 1);
```

Each call should move closer to the Base Case.

---

# How Recursion Works

Example:

```cpp
printNumbers(3);
```

Execution:

```text
printNumbers(3)
        ↓
printNumbers(2)
        ↓
printNumbers(1)
        ↓
printNumbers(0)
```

Base Case reached.

Now functions return one by one.

---

# Understanding the Call Stack

Every function call is stored in memory.

This memory structure is called:

```text
Call Stack
```

Example:

```cpp
printNumbers(3);
```

Stack:

```text
Top
│
├── printNumbers(0)
├── printNumbers(1)
├── printNumbers(2)
├── printNumbers(3)
│
Bottom
```

After reaching the Base Case:

```text
printNumbers(0) removed
printNumbers(1) removed
printNumbers(2) removed
printNumbers(3) removed
```

---

# Dry Run Example

Function:

```cpp
void printNumbers(int n)
{
    if(n == 0)
        return;

    cout << n << " ";

    printNumbers(n - 1);
}
```

Call:

```cpp
printNumbers(3);
```

Output:

```text
3 2 1
```

Execution:

```text
printNumbers(3)
Output: 3

printNumbers(2)
Output: 2

printNumbers(1)
Output: 1

printNumbers(0)
Stop
```

---

# Print Counting Using Recursion

Example:

```text
1 2 3 4 5
```

Approach:

```cpp
printCounting(n - 1);

cout << n;
```

Notice:

```text
Recursive Call First
Printing Later
```

This changes the output order.

---

# Factorial Using Recursion

Factorial Formula:

```text
n! = n × (n-1)!
```

Example:

```text
5! = 5 × 4 × 3 × 2 × 1

= 120
```

---

## Recursive Relation

```cpp
return n * factorial(n - 1);
```

---

## Base Case

```cpp
if(n == 0 || n == 1)
{
    return 1;
}
```

---

## Recursion Tree

```text
factorial(5)
      ↓
5 × factorial(4)
      ↓
4 × factorial(3)
      ↓
3 × factorial(2)
      ↓
2 × factorial(1)
      ↓
1
```

Result:

```text
120
```

---

# Fibonacci Using Recursion

Fibonacci Series:

```text
0 1 1 2 3 5 8 13 ...
```

Rule:

```text
Current Number =
Previous Number +
Second Previous Number
```

---

## Recursive Relation

```cpp
fibonacci(n - 1)
+
fibonacci(n - 2)
```

---

## Base Cases

```cpp
if(n == 0)
    return 0;

if(n == 1)
    return 1;
```

---

## Recursion Tree

Example:

```text
fibonacci(5)

            5
          /   \
         4     3
       /  \   / \
      3   2  2   1
     / \
    2   1
```

Many calculations repeat.

This is why recursive Fibonacci is inefficient.

---

# Power Calculation

Example:

```text
2⁴
```

can be written as:

```text
2 × 2³
```

Recursive Relation:

```cpp
return a * power(a, b - 1);
```

Base Case:

```cpp
if(b == 0)
    return 1;
```

---

# Binary Search Using Recursion

Binary Search works only on:

```text
Sorted Arrays
```

Example:

```text
10 20 30 40 50
```

Find:

```text
40
```

---

## Steps

```text
Check Middle Element

Target Found?
│
├── Yes → Return Index
│
└── No
      ↓
Search Left Half
OR
Search Right Half
```

---

## Time Complexity

```text
O(log n)
```

which is much faster than Linear Search.

---

# Recursion vs Iteration

## Iteration

Uses:

```cpp
for
while
do-while
```

Example:

```cpp
for(int i=1;i<=5;i++)
```

---

## Recursion

Uses:

```cpp
Function Calls Itself
```

Example:

```cpp
printNumbers(n - 1);
```

---

## Comparison

| Recursion                       | Iteration                    |
| ------------------------------- | ---------------------------- |
| Uses Function Calls             | Uses Loops                   |
| Easier To Express Some Problems | Usually Faster               |
| Uses Extra Stack Memory         | Uses Less Memory             |
| Cleaner For Trees & Graphs      | Better For Simple Repetition |

---

# When Should We Use Recursion?

Use Recursion when:

```text
Problem Can Be Divided Into Smaller Similar Problems
```

Examples:

```text
Factorial
Fibonacci
Binary Search
Tree Traversal
Backtracking
Merge Sort
Quick Sort
```

---

# Advantages of Recursion

```text
✔ Cleaner Code
✔ Elegant Solutions
✔ Useful For Trees
✔ Useful For Divide & Conquer
✔ Simplifies Complex Problems
```

---

# Limitations of Recursion

```text
✘ Extra Stack Memory
✘ Slower Due To Function Calls
✘ Risk Of Stack Overflow
✘ Can Be Hard To Debug
```

---

# Common Interview Questions

## Q1

What are the two components of recursion?

Answer:

```text
Base Case
Recursive Call
```

---

## Q2

What happens without a Base Case?

Answer:

```text
Infinite Recursion
Stack Overflow
```

---

## Q3

Which memory stores recursive calls?

Answer:

```text
Call Stack
```

---

## Q4

Can every recursive solution be written iteratively?

Answer:

```text
Yes
```

Most recursive solutions can be converted into loops.

---

# Common Beginner Mistakes

## Mistake 1

Forgetting Base Case

Wrong:

```cpp
void func()
{
    func();
}
```

Infinite recursion.

---

## Mistake 2

Not Moving Towards Base Case

Wrong:

```cpp
func(n);
```

Correct:

```cpp
func(n - 1);
```

---

## Mistake 3

Ignoring Stack Memory Usage

Too many recursive calls can cause:

```text
Stack Overflow
```

---

## Mistake 4

Confusing Recursive Call With Loop

Recursion uses:

```text
Function Calls
```

not loops.

---

# Time Complexity Summary

| Problem           | Complexity |
| ----------------- | ---------- |
| Print Counting    | O(n)       |
| Factorial         | O(n)       |
| Power             | O(n)       |
| Fibonacci (Basic) | O(2ⁿ)      |
| Binary Search     | O(log n)   |

---

# Compile and Run

Compile:

```bash
g++ factorial.cpp -o factorial
```

Run:

```bash
./factorial
```

or

```bash
factorial.exe
```

---

# Folder Structure

```text
16-Recursion
│
├── README.md
├── recursion_intro.cpp
├── print_counting.cpp
├── factorial.cpp
├── fibonacci.cpp
├── power.cpp
├── binary_search_recursion.cpp
└── recursion_vs_iteration.cpp
```

---

# Key Takeaways

* Recursion is when a function calls itself.
* Every recursive function must have a Base Case.
* Recursive calls should move towards the Base Case.
* Recursive calls are stored in the Call Stack.
* Factorial, Fibonacci, Power, and Binary Search are classic recursion problems.
* Recursion often produces cleaner solutions than loops.
* Excessive recursion can lead to Stack Overflow.
* Recursion is heavily used in Trees, Graphs, Backtracking, and Dynamic Programming.

---

## Next Topic

➡️ 17 - STL (Standard Template Library)

After mastering Recursion, you'll be ready to use STL containers and algorithms efficiently in coding interviews and competitive programming.
