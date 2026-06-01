# 15 - Dynamic Memory

## Overview

Imagine you're organizing a college event.

Before the event starts, you don't know exactly how many students will attend.

If you reserve seats for:

```text
100 Students
```

but:

```text
500 Students Arrive
```

you run out of space.

Similarly, if only:

```text
20 Students Arrive
```

most of your reserved seats remain unused.

This is the problem Dynamic Memory solves.

Instead of deciding memory requirements before the program runs, Dynamic Memory allows memory to be allocated during runtime.

---

# Why Do We Need Dynamic Memory?

Normal variables use memory allocated during compile time.

Example:

```cpp
int arr[100];
```

Problem:

```text
Size Must Be Known Before Execution
```

What if the user wants:

```text
50 Elements
500 Elements
5000 Elements
```

We cannot predict that beforehand.

Dynamic Memory solves this problem.

---

# Static vs Dynamic Memory

## Static Memory Allocation

Memory is allocated before program execution.

Example:

```cpp
int arr[100];
```

Characteristics:

```text
Fixed Size
Fast
Stored in Stack Memory
```

---

## Dynamic Memory Allocation

Memory is allocated during program execution.

Example:

```cpp
int *ptr = new int;
```

Characteristics:

```text
Flexible Size
Allocated During Runtime
Stored in Heap Memory
```

---

# Memory Layout of a Program

A program's memory is divided into multiple sections.

Simplified view:

```text
+----------------------+
|       Stack          |
+----------------------+
| Local Variables      |
| Function Calls       |
+----------------------+

          ↓

+----------------------+
|        Heap          |
+----------------------+
| Dynamic Memory       |
| Allocated Using new  |
+----------------------+
```

---

# Stack Memory

Stack Memory is automatically managed by the compiler.

Example:

```cpp
int num = 10;
```

Stored in:

```text
Stack Memory
```

Advantages:

```text
Fast Access
Automatic Cleanup
Easy Management
```

---

# Heap Memory

Heap Memory is manually managed by the programmer.

Example:

```cpp
int *ptr = new int;
```

Stored in:

```text
Heap Memory
```

Advantages:

```text
Flexible Size
Runtime Allocation
Useful For Large Data
```

---

# Dynamic Memory Allocation

Dynamic Memory Allocation means allocating memory during runtime.

In C++, this is done using:

```cpp
new
```

---

# The new Keyword

The `new` keyword allocates memory from the heap.

Syntax:

```cpp
dataType *pointerName = new dataType;
```

Example:

```cpp
int *ptr = new int;
```

Visualization:

```text
Stack                  Heap
-----                  ----

ptr  ─────────────►    Memory Allocated
```

---

# Storing Values

Example:

```cpp
int *ptr = new int;

*ptr = 100;
```

Memory:

```text
Stack                  Heap
-----                  ----

ptr  ─────────────►    100
```

---

# Accessing Dynamic Memory

Using:

```cpp
*ptr
```

Example:

```cpp
cout << *ptr;
```

Output:

```text
100
```

---

# Why Use Pointers?

The address returned by `new` must be stored somewhere.

Example:

```cpp
int *ptr = new int;
```

Here:

```text
ptr stores address
```

and:

```text
Allocated Memory Stores Data
```

---

# Dynamic Arrays

One of the biggest advantages of Dynamic Memory is creating arrays whose size is decided during runtime.

Example:

```cpp
int size;

cin >> size;

int *arr = new int[size];
```

Now the user can choose:

```text
5 Elements
50 Elements
500 Elements
5000 Elements
```

without changing the code.

---

# Dynamic Array Visualization

If:

```cpp
int *arr = new int[5];
```

Memory:

```text
Stack                  Heap
-----                  ----------------

arr ─────────────►     10
                       20
                       30
                       40
                       50
```

---

# The delete Keyword

Memory allocated using `new` remains occupied until it is released.

To free memory:

```cpp
delete pointerName;
```

Example:

```cpp
delete ptr;
```

This releases memory back to the system.

---

# Why is delete Important?

Without delete:

```text
Memory Remains Occupied
```

even if it is no longer needed.

This wastes system resources.

---

# Deleting Dynamic Arrays

For arrays:

```cpp
delete[] arr;
```

Example:

```cpp
int *arr = new int[10];

delete[] arr;
```

Notice:

```text
delete[] is used for arrays
delete is used for single variables
```

---

# Memory Leak

A Memory Leak occurs when dynamically allocated memory is not released.

Example:

```cpp
int *ptr = new int;
```

Missing:

```cpp
delete ptr;
```

Result:

```text
Memory Stays Occupied
```

even after it is no longer useful.

---

# Memory Leak Visualization

Program:

```cpp
int *ptr = new int;
```

Memory:

```text
Stack                  Heap
-----                  ----

ptr ─────────────►     Memory
```

If pointer disappears:

```text
Heap Memory Still Exists
```

but no one can access it.

This memory becomes wasted.

---

# Real World Analogy

Imagine renting a hotel room.

You check in:

```text
new
```

Room is allocated.

When leaving:

```text
delete
```

Room becomes available again.

If you leave without checking out:

```text
Memory Leak
```

The room remains occupied unnecessarily.

---

# Dangling Pointer

A Dangling Pointer points to memory that has already been freed.

Example:

```cpp
delete ptr;
```

Now:

```cpp
ptr
```

still contains an old address.

Using it is dangerous.

---

# Best Practice

Always do:

```cpp
delete ptr;

ptr = nullptr;
```

Why?

Because:

```text
nullptr means "points to nothing"
```

and prevents accidental access.

---

# nullptr

Modern C++ uses:

```cpp
nullptr
```

instead of:

```cpp
NULL
```

Example:

```cpp
int *ptr = nullptr;
```

Meaning:

```text
Pointer Does Not Point Anywhere
```

---

# Advantages of Dynamic Memory

```text
✔ Flexible Memory Usage
✔ Runtime Allocation
✔ Efficient Resource Utilization
✔ Supports Dynamic Data Structures
✔ Essential For STL Internals
```

---

# Where is Dynamic Memory Used?

Dynamic Memory is used in:

```text
Vectors
Linked Lists
Stacks
Queues
Trees
Graphs
Hash Tables
Operating Systems
Game Engines
```

Almost every advanced data structure relies on dynamic memory.

---

# Common Beginner Mistakes

## Mistake 1

Forgetting delete

Wrong:

```cpp
int *ptr = new int;
```

No cleanup.

---

## Mistake 2

Using delete[] Incorrectly

Wrong:

```cpp
delete arr;
```

for:

```cpp
int *arr = new int[10];
```

Correct:

```cpp
delete[] arr;
```

---

## Mistake 3

Dereferencing After Delete

Wrong:

```cpp
delete ptr;

cout << *ptr;
```

This is undefined behaviour.

---

## Mistake 4

Not Setting Pointer to nullptr

Wrong:

```cpp
delete ptr;
```

Better:

```cpp
delete ptr;

ptr = nullptr;
```

---

# Time Complexity

| Operation              | Complexity   |
| ---------------------- | ------------ |
| new                    | O(1) Average |
| delete                 | O(1) Average |
| Access Through Pointer | O(1)         |
| Dynamic Array Access   | O(1)         |

---

# Compile and Run

Compile:

```bash
g++ new_keyword.cpp -o new_keyword
```

Run:

```bash
./new_keyword
```

or

```bash
new_keyword.exe
```

---

# Folder Structure

```text
15-Dynamic-Memory
│
├── README.md
├── new_keyword.cpp
├── delete_keyword.cpp
├── dynamic_array.cpp
└── memory_leak_demo.cpp
```

---

# Key Takeaways

* Dynamic Memory is allocated during runtime.
* Stack Memory is managed automatically.
* Heap Memory is managed manually.
* `new` allocates memory from the heap.
* `delete` releases memory back to the system.
* Dynamic Arrays allow runtime-sized arrays.
* Memory Leaks occur when allocated memory is not freed.
* Always set pointers to `nullptr` after deleting memory.
* Dynamic Memory is the foundation of advanced data structures.

---

## Next Topic

➡️ 16 - Recursion

