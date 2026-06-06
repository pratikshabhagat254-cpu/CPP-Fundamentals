# 20 - File Handling

## Why Do We Need File Handling?

Imagine you're building a student management system.

A student enters:

```text
Name: Pratiksha
Age: 21
Course: B.Tech
```

The program stores this information.

Now imagine the program closes.

Without File Handling:

```text
All Data Lost ❌
```

When the program starts again:

```text
No Student Records Found
```

Not very useful.

---

With File Handling:

```text
Data Saved In File ✅
```

Even after:

```text
Program Closed
Computer Restarted
```

the information still exists.

That's why File Handling is important.

---

## Real World Analogy

Think of RAM as a whiteboard.

You can write information on it.

But once the power goes off:

```text
Everything Erased
```

A file is like a notebook.

Even after days, months, or years:

```text
Data Remains Saved
```

File Handling allows programs to store information permanently.

---

## What You'll Learn

```text
✓ File Handling Basics
✓ Writing Data To Files
✓ Reading Data From Files
✓ Appending Data To Files
✓ ofstream
✓ ifstream
✓ fstream
✓ getline()
✓ File Closing
```

---

# File Handling Workflow

```text
Program
   ↓
Open File
   ↓
Read / Write Data
   ↓
Close File
```

---

# What is File Handling?

File Handling is the process of:

```text
Creating Files
Reading Files
Writing Files
Updating Files
```

using C++ programs.

---

# Why Do We Need File Handling?

Without File Handling:

```text
Data Exists Only During Execution
```

With File Handling:

```text
Data Persists Permanently
```

---

## Real World Applications

File Handling is used in:

```text
Student Management Systems
Banking Applications
Hospital Management Systems
E-Commerce Websites
Games
Social Media Platforms
```

Every application stores data somewhere.

File Handling is one of the ways to do that.

---

# File Streams in C++

C++ provides special classes for file operations.

```text
ofstream
ifstream
fstream
```

Think of them as tools.

Different tools perform different tasks.

---

# 1. ofstream

## Real World Example

Imagine writing notes in a notebook.

You are sending information from:

```text
Program
↓
File
```

This is the job of:

```text
ofstream
```

---

## What is ofstream?

```text
Output File Stream
```

Used to:

```text
Create Files
Write Data Into Files
```

Header Required:

```cpp
#include <fstream>
```

---

## Creating a File

```cpp
ofstream file("student.txt");
```

If the file doesn't exist:

```text
File Created
```

If it exists:

```text
Previous Content Replaced
```

---

## Writing Data

```cpp
file << "Name: Pratiksha" << endl;
```

Result inside file:

```text
Name: Pratiksha
```

---

# 2. ifstream

## Real World Example

Imagine reading notes from a notebook.

Information moves from:

```text
File
↓
Program
```

This is the job of:

```text
ifstream
```

---

## What is ifstream?

```text
Input File Stream
```

Used to:

```text
Read Data From Files
```

---

## Opening a File

```cpp
ifstream file("student.txt");
```

Now the program can access the contents of the file.

---

# getline()

## Real World Example

Imagine reading a book line by line.

Instead of reading the entire book at once:

```text
Read Line 1
Read Line 2
Read Line 3
```

This is what:

```cpp
getline()
```

does.

---

## Syntax

```cpp
getline(file, line);
```

Where:

```text
file
=
Opened File

line
=
Variable To Store Data
```

---

## Example

```cpp
while(getline(file, line))
{
    cout << line << endl;
}
```

This prints every line from the file.

---

# 3. Appending Data

## Real World Example

Suppose your notebook already contains:

```text
Name: Pratiksha
Age: 21
```

You want to add:

```text
City: Nagpur
```

without deleting existing data.

This is called:

```text
Appending
```

---

# What is Append Mode?

Append Mode adds new data at the end of an existing file.

Keyword:

```cpp
ios::app
```

---

## Example

```cpp
ofstream file(
    "student.txt",
    ios::app
);
```

Now new data gets added without replacing old content.

---

## Before

```text
Name: Pratiksha
Age: 21
```

---

## After

```text
Name: Pratiksha
Age: 21
City: Nagpur
```

---

# file.close()

## Real World Example

Imagine editing a Word document.

After finishing:

```text
Save
↓
Close
```

Similarly, files should be closed after use.

---

## Why Close Files?

Closing a file:

```text
Saves Changes
Frees Resources
Prevents Data Loss
```

---

## Example

```cpp
file.close();
```

---

# fstream

## What is fstream?

```text
File Stream
```

Allows:

```text
Read + Write
```

using the same object.

---

## Example

```cpp
fstream file;
```

Think of it as:

```text
ifstream + ofstream
```

combined together.

---

# Common File Handling Functions

| Function  | Purpose        |
| --------- | -------------- |
| open()    | Opens a file   |
| close()   | Closes a file  |
| getline() | Reads one line |
| <<        | Writes data    |
| >>        | Reads data     |

---

# Common Beginner Mistakes

## Mistake 1

Forgetting to close the file.

Wrong:

```cpp
ofstream file("data.txt");
```

Without:

```cpp
file.close();
```

---

## Mistake 2

Trying to read a file that doesn't exist.

Always ensure:

```text
File Exists
```

before reading.

---

## Mistake 3

Using ofstream when you want to append.

Wrong:

```cpp
ofstream file("data.txt");
```

This may overwrite existing content.

Correct:

```cpp
ofstream file(
    "data.txt",
    ios::app
);
```

---

# Real Software Examples

## Instagram

Stores:

```text
User Data
Messages
Settings
```

using files and databases.

---

## Games

Store:

```text
Player Progress
High Scores
Achievements
```

using file systems.

---

## Banking Systems

Store:

```text
Account Details
Transactions
Balance History
```

permanently.

---

# Interview Questions

## What is File Handling?

```text
The process of reading from and writing to files using a program.
```

---

## Difference Between ofstream and ifstream?

```text
ofstream
→ Writing

ifstream
→ Reading
```

---

## What is ios::app?

```text
Append Mode

Adds data to the end of a file without deleting existing content.
```

---

## Why is file.close() important?

```text
Saves changes and releases resources.
```

---

# Folder Structure

```text
20-File-Handling
│
├── README.md
├── write_file.cpp
├── read_file.cpp
└── append_file.cpp
```

---

# Key Takeaways

* File Handling allows permanent data storage.
* `ofstream` is used to write data to files.
* `ifstream` is used to read data from files.
* `ios::app` is used to append data.
* `getline()` reads one line at a time.
* `file.close()` should always be called after file operations.
* File Handling is widely used in real-world software applications.

---


# You have completed the entire **CPP-Fundamentals** roadmap:

```text
Flowcharts & Pseudocode
↓
Basics
↓
Data Types
↓
Operators
↓
Conditionals
↓
Loops
↓
Patterns
↓
Number System
↓
Bitwise Operators
↓
Functions
↓
Arrays
↓
Strings
↓
Pointers
↓
References
↓
Dynamic Memory
↓
Recursion
↓
STL
↓
OOP
↓
Exception Handling
↓
File Handling
```

This repository now covers the complete journey from beginner-level C++ to upper-intermediate C++ concepts.
