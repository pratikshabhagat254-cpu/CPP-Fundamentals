# 13 - Pointers

## Overview

Imagine you live in a city.

Your house has:

```text
House Number → 101
Street Name  → ABC Road
City         → Nagpur
```

If someone wants to visit you, they don't need to know everything about you.

They only need your address.

Pointers work exactly the same way.

Instead of storing data, a pointer stores the address where the data is located.

Understanding pointers is essential because they are used in:

```text
Dynamic Memory Allocation
Arrays
Strings
Linked Lists
Trees
Graphs
STL Internals
Operating Systems
```

Pointers are one of the most important concepts in C++.

---

# Why Do We Need Pointers?

Normally we work with values.

Example:

```cpp
int num = 10;
```

Here:

```text
num stores 10
```

But sometimes we need:

```text
The Memory Address
Direct Memory Access
Efficient Data Manipulation
```

This is where pointers become useful.

---

# What is a Pointer?

A Pointer is a variable that stores the memory address of another variable.

Example:

```cpp
int num = 10;

int *ptr = &num;
```

Visualization:

```text
Variable      Value
------------------
num           10

ptr           Address of num
```

---

# Memory Address

Every variable is stored somewhere in memory.

Example:

```cpp
int num = 10;
```

Possible Memory Layout:

```text
Address     Value
------------------
1000        10
```

The address may vary every time the program runs.

---

# Address Of Operator (&)

The Address Of Operator returns the memory address of a variable.

Example:

```cpp
int num = 10;

cout << &num;
```

Output:

```text
1000
```

Example Address:

```text
1000
```

Actual address will differ.

---

# Pointer Declaration

Syntax:

```cpp
dataType *pointerName;
```

Example:

```cpp
int *ptr;
```

This declares a pointer capable of storing an integer address.

---

# Initializing a Pointer

Example:

```cpp
int num = 10;

int *ptr = &num;
```

Explanation:

```text
num  → Stores Value
&num → Gives Address
ptr  → Stores Address
```

---

# Understanding * Operator

The * operator has two meanings.

---

## Meaning 1: Pointer Declaration

```cpp
int *ptr;
```

Here:

```text
* indicates ptr is a pointer
```

---

## Meaning 2: Dereference Operator

```cpp
*ptr
```

Returns the value stored at the address.

Example:

```cpp
int num = 10;

int *ptr = &num;
```

```cpp
cout << *ptr;
```

Output:

```text
10
```

---

# Memory Visualization

Example:

```cpp
int num = 10;

int *ptr = &num;
```

Visualization:

```text
Address     Value
------------------
1000        10
2000        1000
```

Explanation:

```text
num stored at address 1000

ptr stored at address 2000

ptr contains 1000
```

Which is:

```text
Address of num
```

---

# num vs ptr vs *ptr

One of the most important interview concepts.

Example:

```cpp
int num = 10;

int *ptr = &num;
```

---

## num

```cpp
cout << num;
```

Output:

```text
10
```

---

## ptr

```cpp
cout << ptr;
```

Output:

```text
Address of num
```

Example:

```text
1000
```

---

## *ptr

```cpp
cout << *ptr;
```

Output:

```text
10
```

Because it accesses the value stored at the address.

---

# Changing Value Through Pointer

Example:

```cpp
int num = 10;

int *ptr = &num;

*ptr = 50;
```

Result:

```text
num becomes 50
```

Because:

```text
Pointer accesses original variable directly
```

---

# Pointer Arithmetic

Pointers can move through memory.

Example:

```cpp
ptr++;
```

Moves pointer to the next memory location.

---

## Example

```cpp
int arr[3] = {10, 20, 30};

int *ptr = arr;
```

Initially:

```text
ptr → 10
```

After:

```cpp
ptr++;
```

Pointer moves to:

```text
20
```

---

# Why Does Pointer Arithmetic Work?

Arrays store elements in contiguous memory locations.

Example:

```text
Address      Value
------------------
1000         10
1004         20
1008         30
```

Since:

```cpp
sizeof(int) = 4
```

Pointer moves by 4 bytes.

---

# Arrays and Pointers

One of the most important relationships in C++.

Example:

```cpp
int arr[5];
```

The array name stores the address of the first element.

---

## Example

```cpp
cout << arr;
```

Output:

```text
Address of arr[0]
```

---

## Accessing Elements

```cpp
*arr
```

Output:

```text
First Element
```

---

```cpp
*(arr + 1)
```

Output:

```text
Second Element
```

---

```cpp
*(arr + 2)
```

Output:

```text
Third Element
```

---

# Array Visualization

```text
Index      0    1    2    3    4
Value     10   20   30   40   50
```

Memory:

```text
1000 → 10
1004 → 20
1008 → 30
1012 → 40
1016 → 50
```

---

# Double Pointer

A Double Pointer stores the address of another pointer.

Syntax:

```cpp
int **ptr;
```

---

## Example

```cpp
int num = 10;

int *ptr = &num;

int **doublePtr = &ptr;
```

---

## Visualization

```text
num       → 10

ptr       → Address of num

doublePtr → Address of ptr
```

---

## Accessing Value

```cpp
**doublePtr
```

Output:

```text
10
```

---

# Null Pointer

A Null Pointer points to nothing.

Modern C++ uses:

```cpp
nullptr
```

---

## Example

```cpp
int *ptr = nullptr;
```

Visualization:

```text
ptr → NULL
```

---

# Why Use Null Pointers?

To avoid:

```text
Garbage Addresses
Undefined Behaviour
Program Crashes
```

---

# Dangling Pointer

A pointer pointing to memory that is no longer valid.

Example:

```cpp
int *ptr;
```

without proper initialization.

Can cause:

```text
Unexpected Results
Crashes
Memory Errors
```

---

# Real World Analogy

Imagine:

```text
Student Name
↓
Stored in Locker
```

Instead of carrying the student everywhere:

```text
Carry Locker Number
```

The locker number acts like a pointer.

It tells you where the actual data is stored.

---

# Advantages of Pointers

```text
✔ Efficient Memory Access
✔ Dynamic Memory Allocation
✔ Fast Data Manipulation
✔ Required for Advanced Data Structures
✔ Used Throughout STL
```

---

# Common Beginner Mistakes

## Mistake 1

Using Uninitialized Pointers

Wrong:

```cpp
int *ptr;
```

Always initialize:

```cpp
int *ptr = nullptr;
```

---

## Mistake 2

Confusing Address and Value

```cpp
ptr
```

means:

```text
Address
```

while:

```cpp
*ptr
```

means:

```text
Value Stored At Address
```

---

## Mistake 3

Dereferencing Null Pointer

Wrong:

```cpp
*ptr
```

when:

```cpp
ptr == nullptr
```

---

## Mistake 4

Ignoring Pointer Arithmetic

```cpp
ptr++
```

does not increase by 1 byte.

It increases according to the data type size.

---

# Time Complexity

| Operation              | Complexity |
| ---------------------- | ---------- |
| Access Through Pointer | O(1)       |
| Dereference            | O(1)       |
| Pointer Arithmetic     | O(1)       |

---

# Compile and Run

Compile:

```bash
g++ pointer_basics.cpp -o pointer_basics
```

Run:

```bash
./pointer_basics
```

or

```bash
pointer_basics.exe
```

---

# Folder Structure

```text
13-Pointers
│
├── README.md
├── pointer_basics.cpp
├── pointer_arithmetic.cpp
├── pointers_and_arrays.cpp
├── double_pointer.cpp
└── null_pointer.cpp
```

---

# Key Takeaways

* A pointer stores the memory address of another variable.
* `&` gives the address of a variable.
* `*` accesses the value stored at an address.
* Arrays and pointers are closely related.
* Pointer arithmetic moves through memory locations.
* Double pointers store addresses of pointers.
* `nullptr` represents a pointer that points to nothing.
* Pointers are fundamental for dynamic memory allocation and advanced data structures.

---

## Next Topic

➡️ 14 - References

References become much easier after understanding pointers because both concepts deal with accessing existing variables rather than creating new copies.
