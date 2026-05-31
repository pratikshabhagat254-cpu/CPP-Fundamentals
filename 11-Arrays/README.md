# 11 - Arrays

## Overview

Imagine entering a movie theatre.

Every seat has a fixed position:

```text
Seat 0
Seat 1
Seat 2
Seat 3
Seat 4
```

If someone asks:

```text
Who is sitting on Seat 2?
```

You can directly locate that person.

Arrays work exactly the same way.

Each element is stored at a specific position called an **index**.

Arrays are one of the most important data structures because almost every advanced topic in DSA is built on top of them.

```text
Arrays
   ↓
Strings
   ↓
Vectors
   ↓
Sorting
   ↓
Searching
   ↓
Matrices
   ↓
Dynamic Programming
```

---

# What is an Array?

An Array is a collection of elements of the same data type stored in contiguous memory locations.

Example:

```cpp
int arr[5] = {10, 20, 30, 40, 50};
```

Visualization:

```text
Index   0    1    2    3    4
       ------------------------
Value   10   20   30   40   50
```

---

# Why Do We Need Arrays?

Without Arrays:

```cpp
int marks1 = 90;
int marks2 = 85;
int marks3 = 78;
int marks4 = 95;
int marks5 = 88;
```

Imagine storing marks of:

```text
100 Students
1000 Students
100000 Students
```

This becomes impossible to manage.

Arrays solve this problem by storing multiple values under one name.

```cpp
int marks[100];
```

---

# Real World Examples

## Student Marks

```cpp
int marks[5] = {90, 85, 78, 95, 88};
```

---

## Monthly Expenses

```cpp
int expenses[12];
```

---

## Temperature Records

```cpp
float temperature[30];
```

---

## Cricket Scores

```cpp
int scores[11];
```

---

# Array Declaration

Syntax:

```cpp
dataType arrayName[size];
```

Example:

```cpp
int arr[5];
```

This creates an array capable of storing 5 integers.

---

# Array Initialization

Initializing values during declaration.

```cpp
int arr[5] = {10, 20, 30, 40, 50};
```

---

# Array Indexing

Each element is identified using an index.

Important:

```text
Array Indexing Starts From 0
```

Example:

```cpp
arr[0] → 10
arr[1] → 20
arr[2] → 30
arr[3] → 40
arr[4] → 50
```

---

# Accessing Elements

```cpp
cout << arr[0];
```

Output:

```text
10
```

---

# Modifying Elements

```cpp
arr[2] = 100;
```

Updated Array:

```text
10 20 100 40 50
```

---

# Memory Representation

One of the most important interview concepts.

Arrays store data in contiguous memory locations.

Example:

```cpp
int arr[5];
```

Visualization:

```text
Address
1000 → arr[0]
1004 → arr[1]
1008 → arr[2]
1012 → arr[3]
1016 → arr[4]
```

Notice:

```text
Addresses are consecutive.
```

This is called:

```text
Contiguous Memory Allocation
```

---

# Why Contiguous Memory Matters?

Because it allows:

```text
Fast Access
Efficient Traversal
Better Cache Performance
```

This is one reason arrays are extremely efficient.

---

# Traversing an Array

Traversal means visiting every element one by one.

---

## Example

```cpp
for(int i = 0; i < 5; i++) {

    cout << arr[i] << " ";
}
```

Output:

```text
10 20 30 40 50
```

---

# Why Traversal is Important?

Traversal is used in:

```text
Searching
Sorting
Finding Maximum
Finding Minimum
Calculating Sum
Calculating Average
```

Almost every array problem begins with traversal.

---

# Insertion in Array

Insertion means adding a new element.

Example:

```text
10 20 30 40 50
```

Insert:

```text
25
```

at position:

```text
2
```

Result:

```text
10 20 25 30 40 50
```

---

## How Insertion Works?

Before inserting:

```text
10 20 30 40 50
```

Shift elements right:

```text
10 20 30 30 40 50
```

Insert element:

```text
10 20 25 30 40 50
```

---

## Time Complexity

```text
O(n)
```

because elements may need to be shifted.

---

# Deletion in Array

Deletion means removing an element.

Example:

```text
10 20 30 40 50
```

Delete:

```text
30
```

Result:

```text
10 20 40 50
```

---

## How Deletion Works?

Shift elements left.

Before:

```text
10 20 30 40 50
```

After Shift:

```text
10 20 40 50
```

---

## Time Complexity

```text
O(n)
```

---

# Finding Maximum Element

Example:

```text
25 10 90 45 5
```

Maximum:

```text
90
```

Approach:

```text
Assume First Element is Maximum
Compare with Remaining Elements
Update Maximum if Needed
```

---

## Time Complexity

```text
O(n)
```

---

# Finding Minimum Element

Example:

```text
25 10 90 45 5
```

Minimum:

```text
5
```

Approach:

```text
Assume First Element is Minimum
Compare with Remaining Elements
Update Minimum if Needed
```

---

## Time Complexity

```text
O(n)
```

---

# Linear Search

Linear Search checks every element one by one.

---

## Example

Array:

```text
10 20 30 40 50
```

Target:

```text
30
```

Process:

```text
Check 10 ❌
Check 20 ❌
Check 30 ✅
```

Element Found.

---

## Algorithm

```text
Start from Index 0
Compare Every Element
If Found → Return Index
Otherwise → Return -1
```

---

## Time Complexity

Best Case:

```text
O(1)
```

Target found at first position.

Worst Case:

```text
O(n)
```

Target found at last position or absent.

---

# Advantages of Arrays

```text
✔ Fast Access Using Index
✔ Easy Traversal
✔ Memory Efficient
✔ Simple Implementation
✔ Foundation of DSA
```

---

# Limitations of Arrays

```text
✘ Fixed Size
✘ Costly Insertions
✘ Costly Deletions
✘ Stores Same Data Type Only
```

---

# Time Complexity Summary

| Operation | Complexity |
| --------- | ---------- |
| Access    | O(1)       |
| Traversal | O(n)       |
| Search    | O(n)       |
| Insertion | O(n)       |
| Deletion  | O(n)       |
| Find Max  | O(n)       |
| Find Min  | O(n)       |

---

# Common Beginner Mistakes

## Mistake 1

Accessing Invalid Index

Wrong:

```cpp
arr[5]
```

for:

```cpp
int arr[5];
```

Valid indices:

```text
0 to 4
```

---

## Mistake 2

Confusing Size and Last Index

```text
Size = 5
Last Index = 4
```

---

## Mistake 3

Loop Boundary Errors

Wrong:

```cpp
for(int i = 0; i <= 5; i++)
```

Correct:

```cpp
for(int i = 0; i < 5; i++)
```

---

## Mistake 4

Ignoring Array Bounds

Arrays do not automatically prevent invalid access.

This may lead to:

```text
Undefined Behaviour
```

---

# Compile and Run

Compile:

```bash
g++ array_basics.cpp -o array_basics
```

Run:

```bash
./array_basics
```

or

```bash
array_basics.exe
```

---

# Folder Structure

```text
11-Arrays
│
├── README.md
├── array_basics.cpp
├── traversal.cpp
├── insertion.cpp
├── deletion.cpp
├── max_min.cpp
└── linear_search.cpp
```

---

# Key Takeaways

* Arrays store multiple values under one variable name.
* Array indexing starts from 0.
* Arrays use contiguous memory allocation.
* Accessing elements by index is O(1).
* Traversal is the foundation of most array problems.
* Insertion and Deletion require shifting elements.
* Linear Search checks elements one by one.
* Arrays are the first and most important data structure in DSA.

---

## Next Topic

➡️ 12 - Strings
