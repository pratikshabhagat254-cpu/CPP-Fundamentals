# 03 - Data Types

## Overview

Data types define the type of data that a variable can store in memory.

Every variable in C++ must have a data type. The data type determines:

* How much memory will be allocated.
* What kind of values can be stored.
* The range of values that can be represented.
* The operations that can be performed on the data.

Understanding data types is fundamental because every program revolves around storing and manipulating data.

---

# What is a Variable?

A variable is a named memory location used to store data.

Think of a variable as a container that holds a value.

### Syntax

```cpp
data_type variable_name;
```

### Example

```cpp
int age = 20;
```

Here:

```text
int  -> Data Type
age  -> Variable Name
20   -> Value
```

---

# Primitive Data Types

Primitive Data Types are the basic built-in data types provided by C++.

---

## Integer (int)

Used to store whole numbers.

### Example

```cpp
int age = 20;
int marks = 95;
int temperature = -10;
```

### Use Cases

* Age
* Marks
* Population
* Count of items

---

## Character (char)

Used to store a single character.

### Example

```cpp
char grade = 'A';
char symbol = '#';
```

### Important Note

Characters must be enclosed in single quotes.

```cpp
'A'
'b'
'7'
```

---

## Float (float)

Used to store decimal values.

### Example

```cpp
float price = 99.99f;
float percentage = 87.5f;
```

### Why use 'f'?

Without `f`, the compiler treats decimal values as double by default.

```cpp
float value = 3.14f;
```

---

## Double (double)

Used to store decimal values with higher precision.

### Example

```cpp
double pi = 3.14159265359;
```

### Difference Between Float and Double

```text
float  -> Lower precision
double -> Higher precision
```

---

## Boolean (bool)

Used to store logical values.

### Example

```cpp
bool isPassed = true;
bool isLoggedIn = false;
```

### Output

```text
true  -> 1
false -> 0
```

---

# Memory Size of Data Types

The amount of memory occupied by a data type can be found using the `sizeof()` operator.

### Example

```cpp
cout << sizeof(int);
```

### Common Sizes

```text
char      -> 1 byte
bool      -> 1 byte
int       -> 4 bytes
float     -> 4 bytes
double    -> 8 bytes
```

### Program

```cpp
cout << sizeof(char) << endl;
cout << sizeof(int) << endl;
cout << sizeof(float) << endl;
cout << sizeof(double) << endl;
```

---

# ASCII (American Standard Code for Information Interchange)

## What is ASCII?

ASCII is a character encoding standard that assigns a unique numerical value to every character.

Computers store everything in binary. ASCII provides a mapping between characters and numbers.

### Example

```text
A -> 65
B -> 66
a -> 97
b -> 98
0 -> 48
1 -> 49
```

---

## Why Do We Need ASCII?

When we write:

```cpp
char ch = 'A';
```

The computer actually stores:

```text
65
```

ASCII allows computers to represent characters numerically.

---

## Example

```cpp
char ch = 'A';

cout << ch << endl;
cout << int(ch);
```

### Output

```text
A
65
```

---

## Character Arithmetic

```cpp
char ch = 'A';

cout << char(ch + 1);
```

### Output

```text
B
```

---

## Digits

```text
0 -> 48
1 -> 49
2 -> 50
3 -> 51
4 -> 52
5 -> 53
6 -> 54
7 -> 55
8 -> 56
9 -> 57
```

---

## Uppercase Alphabets

```text
A -> 65     N -> 78
B -> 66     O -> 79
C -> 67     P -> 80
D -> 68     Q -> 81
E -> 69     R -> 82
F -> 70     S -> 83
G -> 71     T -> 84
H -> 72     U -> 85
I -> 73     V -> 86
J -> 74     W -> 87
K -> 75     X -> 88
L -> 76     Y -> 89
M -> 77     Z -> 90
```

---

## Lowercase Alphabets

```text
a -> 97     n -> 110
b -> 98     o -> 111
c -> 99     p -> 112
d -> 100    q -> 113
e -> 101    r -> 114
f -> 102    s -> 115
g -> 103    t -> 116
h -> 104    u -> 117
i -> 105    v -> 118
j -> 106    w -> 119
k -> 107    x -> 120
l -> 108    y -> 121
m -> 109    z -> 122
```

---

## Common Special Characters

```text
Space -> 32
!     -> 33
"     -> 34
#     -> 35
$     -> 36
%     -> 37
&     -> 38
'     -> 39
(     -> 40
)     -> 41
*     -> 42
+     -> 43
,     -> 44
-     -> 45
.     -> 46
/     -> 47
:     -> 58
;     -> 59
<     -> 60
=     -> 61
>     -> 62
?     -> 63
@     -> 64
```

---

## Interview Notes

```text
'A' - 'a' = -32
'a' - 'A' = 32
```

Convert Lowercase to Uppercase:

```cpp
ch = ch - 32;
```

Convert Uppercase to Lowercase:

```cpp
ch = ch + 32;
```

---

# Type Casting

## What is Type Casting?

Type Casting is the process of converting one data type into another.

---

## Implicit Type Casting

Performed automatically by the compiler.

### Example

```cpp
int a = 10;
double b = a;
```

Output:

```text
10
10.0
```

---

## Explicit Type Casting

Performed manually by the programmer.

### Example

```cpp
double pi = 3.14;

int value = (int)pi;
```

Output:

```text
3
```

### Why?

The decimal portion gets removed.

---

# Signed and Unsigned Data Types

## Signed Data Types

Can store both positive and negative values.

### Example

```cpp
signed int num = -100;
```

Range:

```text
Negative + Positive
```

---

## Unsigned Data Types

Can store only positive values.

### Example

```cpp
unsigned int num = 100;
```

Range:

```text
Only Positive
```

Since no memory is reserved for negative values, the positive range becomes larger.

---

# Declaration vs Initialization

## Declaration

Creating a variable.

```cpp
int age;
```

---

## Initialization

Assigning a value to a variable.

```cpp
int age = 20;
```

---

## Multiple Variable Declaration

```cpp
int a = 10, b = 20, c = 30;
```

---

# How to Compile and Run

## Open Terminal

```text
Terminal → New Terminal
```

Shortcut:

```text
Ctrl + `
```

---

## Compile

```bash
g++ primitive_data_types.cpp -o primitive_data_types
```

---

## Run

### Windows

```bash
./primitive_data_types
```

or

```bash
primitive_data_types.exe
```

---

# Folder Structure

```text
03-Data_Types
│
├── README.md
├── primitive_data_types.cpp
├── sizeof_operator.cpp
├── ascii_values.cpp
├── type_casting.cpp
└── signed_unsigned.cpp
```

---

# Key Takeaways

* Variables store data in memory.
* Every variable must have a data type.
* Data types determine memory size and value range.
* ASCII maps characters to numbers.
* Type casting converts one data type into another.
* Signed types support negative values.
* Unsigned types provide a larger positive range.
* `sizeof()` helps determine memory usage.

---

## Next Topic

➡️ 04 - Operators
