# 02 - Basics

## Overview

This section covers the fundamental concepts required to start programming in C++.

Before learning Data Structures and Algorithms, it is important to understand how a C++ program is written, compiled, and executed.

---

# Topics Covered

## 1. Hello World Program

The first program traditionally written when learning a new programming language.

### Example

```cpp
#include <iostream>

int main() {
    std::cout << "Hello World!";
    return 0;
}
```

### Concepts Learned

* Structure of a C++ program
* Header files
* `main()` function
* Output using `cout`
* Returning values from functions

---

## 2. Input and Output

Input and Output allow interaction between the user and the program.

### Input

```cpp
cin >> variable;
```

### Output

```cpp
cout << variable;
```

### Example

```cpp
string name;

cin >> name;

cout << name;
```

### Concepts Learned

* Taking user input
* Displaying output
* Using variables

---

## 3. Comments

Comments are ignored by the compiler and are used to explain code.

### Single Line Comment

```cpp
// This is a comment
```

### Multi Line Comment

```cpp
/*
This is a
multi-line comment
*/
```

### Why Use Comments?

* Improves readability
* Helps document logic
* Makes debugging easier

---

## 4. Namespaces

Namespaces help organize code and prevent naming conflicts.

### Example

```cpp
std::cout << "Hello";
```

Here:

```cpp
std
```

belongs to the Standard Library Namespace.

### Alternative

```cpp
using namespace std;
```

Now we can write:

```cpp
cout << "Hello";
```

instead of:

```cpp
std::cout << "Hello";
```

---

# Understanding a Basic C++ Program

```cpp
#include <iostream>

using namespace std;

int main() {

    cout << "Hello World";

    return 0;
}
```

### Breakdown

| Part                   | Purpose                              |
| ---------------------- | ------------------------------------ |
| `#include <iostream>`  | Allows input and output operations   |
| `using namespace std;` | Accesses standard library components |
| `int main()`           | Starting point of execution          |
| `cout`                 | Displays output                      |
| `return 0;`            | Indicates successful execution       |

---

# How to Run a C++ Program in VS Code

## Step 1: Open VS Code

Open the project folder.

Example:

```text
CPP_FUNDAMENTALS
```

---

## Step 2: Open Terminal

Go to:

```text
Terminal → New Terminal
```

Shortcut:

```text
Ctrl + `
```

---

## Step 3: Navigate to the File

Example:

```text
02-Basics
```

---

## Step 4: Compile the Program

```bash
g++ hello_world.cpp -o hello_world
```

### Explanation

| Command           | Meaning         |
| ----------------- | --------------- |
| `g++`             | C++ Compiler    |
| `hello_world.cpp` | Source file     |
| `-o`              | Output flag     |
| `hello_world`     | Executable name |

---

## Step 5: Run the Program

### Windows

```bash
./hello_world
```

or

```bash
hello_world.exe
```

---

## Example

Compile:

```bash
g++ hello_world.cpp -o hello_world
```

Run:

```bash
./hello_world
```

Output:

```text
Hello World!
```

---

# Folder Structure

```text
02-Basics
│
├── README.md
├── hello_world.cpp
├── input_output.cpp
├── comments.cpp
└── namespaces.cpp
```

---

# Key Takeaways

* Every C++ program starts execution from `main()`.
* `cout` is used for output.
* `cin` is used for input.
* Comments improve code readability.
* Namespaces help avoid naming conflicts.
* Programs must be compiled before execution.

---

## Next Topic

➡️ 03 - Data Types
