# 12 - Strings

## Overview

Imagine you're filling out a form online.

You enter:

```text
Name: Pratiksha
City: Nagpur
Email: example@gmail.com
```

All of this information is text.

In programming, text is stored using **Strings**.

Strings are one of the most frequently used data types in software development because almost every application works with text:

```text
Usernames
Passwords
Emails
Messages
Search Queries
URLs
File Names
```

Understanding Strings is essential for DSA, Competitive Programming, and Software Development.

---

# What is a String?

A String is a sequence of characters.

Example:

```text
Hello
```

Contains:

```text
H
e
l
l
o
```

In C++, strings can be stored using:

```text
1. Character Arrays
2. string Class (STL)
```

---

# Why Do We Need Strings?

Without Strings:

```cpp
char c1 = 'H';
char c2 = 'e';
char c3 = 'l';
char c4 = 'l';
char c5 = 'o';
```

This becomes difficult to manage.

Instead:

```cpp
string word = "Hello";
```

Much simpler and easier to use.

---

# Character Arrays

Before the string class existed, text was stored using character arrays.

Example:

```cpp
char name[20] = "Pratiksha";
```

Visualization:

```text
Index   0 1 2 3 4 5 6 7 8
Value   P r a t i k s h a
```

---

# Null Character (\0)

A Character Array ends with a special character:

```cpp
'\0'
```

called the **Null Character**.

Example:

```cpp
char name[] = "Hello";
```

Actually stored as:

```text
H e l l o \0
```

The null character tells the compiler:

```text
String Ends Here
```

---

# String Class

Modern C++ provides the `string` class.

Include:

```cpp
#include <string>
```

Example:

```cpp
string name = "Pratiksha";
```

Advantages:

```text
✔ Easy to Use
✔ Dynamic Size
✔ Built-in Functions
✔ Safer than Character Arrays
```

---

# Accessing Characters

Every character has an index.

Example:

```cpp
string str = "Hello";
```

Visualization:

```text
Index   0 1 2 3 4
Value   H e l l o
```

Access:

```cpp
cout << str[0];
```

Output:

```text
H
```

---

# Traversing a String

Traversal means visiting every character.

Example:

```cpp
for(int i = 0; i < str.length(); i++) {

    cout << str[i] << " ";
}
```

Output:

```text
H e l l o
```

---

# length() Function

Returns the number of characters in a string.

Example:

```cpp
string str = "Hello";
```

```cpp
cout << str.length();
```

Output:

```text
5
```

---

# getline()

One of the most important string functions.

---

## Problem with cin

```cpp
string name;

cin >> name;
```

Input:

```text
Pratiksha Sharma
```

Output:

```text
Pratiksha
```

Only the first word is stored.

---

## Solution

```cpp
getline(cin, name);
```

Input:

```text
Pratiksha Sharma
```

Output:

```text
Pratiksha Sharma
```

---

# Reversing a String

Example:

```text
hello
```

Reversed:

```text
olleh
```

---

## Approach

Use Two Pointers.

```text
Start Pointer
        ↓
h e l l o
          ↑
       End Pointer
```

Swap both characters.

Move inward.

Continue until pointers meet.

---

## Example

```text
hello
↓
oellh
↓
olleh
```

---

# Two Pointer Technique

One of the most important DSA techniques.

Used in:

```text
String Problems
Arrays
Linked Lists
Searching Problems
```

Visualization:

```text
Start → ← End
```

Move both pointers based on the problem.

---

# Palindrome

A Palindrome reads the same forward and backward.

Examples:

```text
madam
racecar
level
noon
```

---

## Not Palindromes

```text
hello
coding
world
```

---

# Palindrome Logic

Compare:

```text
First Character
Last Character
```

If they are equal:

```text
Move Inward
```

Continue until:

```text
Pointers Meet
```

---

## Example

```text
madam

m == m ✓
a == a ✓
d == d ✓
```

Palindrome.

---

# Common String Functions

---

## length()

Returns length.

```cpp
str.length();
```

---

## append()

Adds text to the end.

```cpp
str.append(" World");
```

Example:

```text
Hello World
```

---

## find()

Finds position of a substring.

```cpp
str.find("World");
```

Output:

```text
6
```

---

## substr()

Extracts a portion of a string.

```cpp
str.substr(0, 5);
```

Output:

```text
Hello
```

---

# ASCII and Strings

Each character has an ASCII value.

Example:

```text
A → 65
B → 66
C → 67

a → 97
b → 98
c → 99
```

Example:

```cpp
char ch = 'A';

cout << int(ch);
```

Output:

```text
65
```

---

# Real World Applications

Strings are everywhere.

Examples:

```text
Login Systems
Chat Applications
Search Engines
Email Validation
Password Validation
Text Editors
URLs
File Handling
```

---

# Time Complexity

| Operation        | Complexity |
| ---------------- | ---------- |
| Access Character | O(1)       |
| Traversal        | O(n)       |
| Reverse String   | O(n)       |
| Palindrome Check | O(n)       |
| length()         | O(1)       |
| find()           | O(n)       |

---

# Common Beginner Mistakes

## Mistake 1

Using:

```cpp
cin >> name;
```

for full names.

Use:

```cpp
getline(cin, name);
```

instead.

---

## Mistake 2

Forgetting Null Character in Character Arrays.

```cpp
char arr[5];
```

is not automatically a valid string.

---

## Mistake 3

Accessing Invalid Index.

Wrong:

```cpp
str[10]
```

for:

```cpp
string str = "Hello";
```

---

## Mistake 4

Confusing Characters and Strings.

Character:

```cpp
'A'
```

String:

```cpp
"ABC"
```

---

# Compile and Run

Compile:

```bash
g++ string_basics.cpp -o string_basics
```

Run:

```bash
./string_basics
```

or

```bash
string_basics.exe
```

---

# Folder Structure

```text
12-Strings
│
├── README.md
├── char_array.cpp
├── string_basics.cpp
├── getline.cpp
├── reverse_string.cpp
├── palindrome.cpp
└── string_functions.cpp
```

---

# Key Takeaways

* Strings store text data.
* Character Arrays use `\0` to mark the end.
* The `string` class is easier and safer to use.
* `getline()` reads complete lines including spaces.
* Reversing a string uses the Two Pointer Technique.
* Palindrome checking is a common interview problem.
* String functions like `length()`, `append()`, `find()`, and `substr()` simplify text manipulation.
* Strings are among the most important topics in DSA and software development.

---

## Next Topic

➡️ 13 - Pointers
