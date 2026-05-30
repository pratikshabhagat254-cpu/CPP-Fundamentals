# 06 - Loops

## Overview

Loops are used to execute a block of code repeatedly until a specific condition becomes false.

Imagine you want to print numbers from 1 to 100.

Without loops:

```cpp
cout << 1;
cout << 2;
cout << 3;
...
cout << 100;
```

This would be repetitive and inefficient.

Loops solve this problem by allowing us to write a set of instructions once and execute them multiple times.

---

# What is a Loop?

A loop is a control structure that repeatedly executes a block of code as long as a given condition remains true.

### Example

```cpp
for(int i = 1; i <= 5; i++) {
    cout << i << " ";
}
```

Output:

```text
1 2 3 4 5
```

---

# Why Do We Need Loops?

Loops help us:

* Reduce code duplication
* Automate repetitive tasks
* Process large amounts of data
* Traverse arrays and strings
* Solve algorithmic problems efficiently

---

# Real World Applications

```text
Printing numbers from 1 to 100
Reading file contents
Processing student records
Traversing arrays
Traversing strings
Game loops
Menu-driven applications
Generating reports
```

---

# Components of a Loop

Every loop consists of three important parts:

## 1. Initialization

Starting point.

```cpp
int i = 1;
```

---

## 2. Condition

Determines whether the loop should continue.

```cpp
i <= 5
```

---

## 3. Update

Changes the loop variable after every iteration.

```cpp
i++
```

---

# Loop Execution Flow

```text
Initialization
      ↓
Check Condition
      ↓
True?
      ↓
Execute Body
      ↓
Update
      ↓
Check Condition Again
      ↓
False?
      ↓
Exit Loop
```

---

# Types of Loops in C++

```text
1. while Loop
2. do-while Loop
3. for Loop
```

---

# 1. while Loop

The while loop executes as long as the condition remains true.

---

## Syntax

```cpp
while(condition) {
    // code
}
```

---

## Example

```cpp
int i = 1;

while(i <= 5) {
    cout << i << " ";
    i++;
}
```

Output:

```text
1 2 3 4 5
```

---

## How It Works

```text
i = 1
↓
1 <= 5 ✓
Print 1
↓
i = 2
↓
2 <= 5 ✓
Print 2
...
↓
i = 6
↓
6 <= 5 ✗
Stop
```

---

## When to Use while Loop?

Use when the number of iterations is unknown.

### Examples

```text
ATM Menu
User Input Validation
Game Loops
Password Checking
```

---

# 2. do-while Loop

The do-while loop executes the loop body first and checks the condition later.

This guarantees at least one execution.

---

## Syntax

```cpp
do {

    // code

} while(condition);
```

---

## Example

```cpp
int i = 1;

do {
    cout << i << " ";
    i++;
}
while(i <= 5);
```

Output:

```text
1 2 3 4 5
```

---

## Important Difference

Consider:

```cpp
int i = 10;
```

### while Loop

```cpp
while(i <= 5) {
    cout << i;
}
```

Output:

```text
Nothing
```

---

### do-while Loop

```cpp
do {
    cout << i;
}
while(i <= 5);
```

Output:

```text
10
```

Because the body executes before checking the condition.

---

## When to Use do-while Loop?

Use when the code must execute at least once.

### Examples

```text
Menu Driven Programs
Login Systems
ATM Interfaces
Games
```

---

# 3. for Loop

The most commonly used loop.

Everything is written in one place:

```text
Initialization
Condition
Update
```

---

## Syntax

```cpp
for(initialization; condition; update) {

    // code

}
```

---

## Example

```cpp
for(int i = 1; i <= 5; i++) {
    cout << i << " ";
}
```

Output:

```text
1 2 3 4 5
```

---

## Breakdown

```cpp
for(int i = 1; i <= 5; i++)
```

### Initialization

```cpp
int i = 1;
```

Runs only once.

---

### Condition

```cpp
i <= 5
```

Checked before every iteration.

---

### Update

```cpp
i++
```

Runs after every iteration.

---

## When to Use for Loop?

Use when the number of iterations is known.

### Examples

```text
Printing Numbers
Traversing Arrays
Traversing Strings
Competitive Programming
Pattern Printing
```

---

# while vs do-while vs for

```text
while
│
├── Condition checked first
├── May execute zero times
└── Iterations usually unknown

do-while
│
├── Condition checked later
├── Executes at least once
└── Used for menus

for
│
├── Compact syntax
├── Best when iterations are known
└── Most commonly used
```

---

# Infinite Loops

A loop that never ends.

---

## Example

```cpp
while(true) {
    cout << "Hello";
}
```

---

## Another Example

```cpp
for(;;) {
    cout << "Infinite Loop";
}
```

---

## Why Avoid Infinite Loops?

```text
Program Freeze
High CPU Usage
Memory Waste
Application Crash
```

---

# break Statement

The break statement immediately terminates the loop.

---

## Syntax

```cpp
break;
```

---

## Example

```cpp
for(int i = 1; i <= 10; i++) {

    if(i == 6)
        break;

    cout << i << " ";
}
```

Output:

```text
1 2 3 4 5
```

---

## Real World Usage

```text
Search Operations
Menu Exit Option
Game Termination
Early Loop Termination
```

---

# continue Statement

The continue statement skips the current iteration and moves to the next one.

---

## Syntax

```cpp
continue;
```

---

## Example

```cpp
for(int i = 1; i <= 10; i++) {

    if(i == 6)
        continue;

    cout << i << " ";
}
```

Output:

```text
1 2 3 4 5 7 8 9 10
```

---

## Real World Usage

```text
Skipping Invalid Inputs
Filtering Data
Ignoring Specific Records
```

---

# Nested Loops

A loop inside another loop.

---

## Syntax

```cpp
for(...) {

    for(...) {

    }

}
```

---

## Example

```cpp
for(int i = 1; i <= 3; i++) {

    for(int j = 1; j <= 3; j++) {

        cout << "* ";

    }

    cout << endl;
}
```

Output:

```text
* * *
* * *
* * *
```

---

## Where Are Nested Loops Used?

```text
Pattern Problems
Matrices
2D Arrays
Game Boards
Graphs
```

---

# Common Beginner Mistakes

## Mistake 1: Forgetting Update

Wrong:

```cpp
int i = 1;

while(i <= 5) {
    cout << i;
}
```

Result:

```text
Infinite Loop
```

---

## Mistake 2: Wrong Condition

Wrong:

```cpp
for(int i = 1; i >= 5; i++)
```

Output:

```text
No Iteration
```

---

## Mistake 3: Semicolon After Loop

Wrong:

```cpp
for(int i = 1; i <= 5; i++);
{
    cout << i;
}
```

The semicolon ends the loop immediately.

---

## Mistake 4: Modifying Loop Variable Incorrectly

Wrong:

```cpp
for(int i = 1; i <= 10; i--) {
```

May cause an infinite loop.

---

# Time Complexity of Loops

## Single Loop

```cpp
for(int i = 0; i < n; i++)
```

Complexity:

```text
O(n)
```

---

## Nested Loop

```cpp
for(int i = 0; i < n; i++) {

    for(int j = 0; j < n; j++) {

    }

}
```

Complexity:

```text
O(n²)
```

---

# How to Compile

```bash
g++ for_loop.cpp -o for_loop
```

---

# How to Run

```bash
./for_loop
```

or

```bash
for_loop.exe
```

---

# Folder Structure

```text
06-Loops
│
├── README.md
├── while_loop.cpp
├── do_while_loop.cpp
├── for_loop.cpp
├── break.cpp
└── continue.cpp
```

---

# Key Takeaways

* Loops execute code repeatedly.
* while checks the condition before execution.
* do-while executes at least once.
* for loop is best when iterations are known.
* break exits a loop immediately.
* continue skips the current iteration.
* Nested loops are used for patterns and matrices.
* Infinite loops should generally be avoided.
* Loops are fundamental for DSA, arrays, strings, and algorithms.

---

## Next Topic

➡️ 07 - Patterns
