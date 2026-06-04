# 18 - Object Oriented Programming (OOP)

## Why Does OOP Exist?

Imagine you're building an application like Uber.

Your application needs to manage:

```text
Drivers
Passengers
Vehicles
Trips
Payments
```

Each of these has:

* Data
* Behaviour
* Rules

For example:

```text
Driver
│
├── Name
├── Rating
├── Vehicle
└── Accept Ride()
```

As applications grow, managing everything using only variables and functions becomes difficult.

That's where Object Oriented Programming (OOP) comes in.

OOP helps us organize code the same way we organize real-world objects.

---

## Real World Analogy

Think about a smartphone.

You use:

```text
Camera
Gallery
Phone
WhatsApp
Maps
```

every day.

But do you know how every internal component works?

No.

You simply interact with the features.

OOP follows the same idea:

```text
Data
+
Behaviour
=
Object
```

---

## What You'll Learn

```text
✓ Class
✓ Object
✓ Constructor
✓ Destructor
✓ Encapsulation
✓ Inheritance
✓ Polymorphism
✓ Abstraction
✓ Friend Function
```

By the end of this section, you'll understand how large software systems are designed and structured.

---

# OOP Learning Roadmap

```text
Class
 ↓
Object
 ↓
Constructor
 ↓
Destructor
 ↓
Encapsulation
 ↓
Inheritance
 ↓
Polymorphism
 ↓
Abstraction
 ↓
Friend Function
```

Let's start with the foundation of OOP.

---

# 1. Class

## Real World Example

Imagine an architect designing a house.

The architect creates:

```text
Blueprint
```

The blueprint contains:

```text
Number of Rooms
Kitchen Layout
Door Positions
Window Positions
```

But can you live inside the blueprint?

No.

The blueprint only describes how a house should look.

A Class works exactly the same way.

---

## What is a Class?

A Class is a blueprint used to create objects.

It defines:

```text
Data Members
+
Member Functions
```

Example:

```cpp
class Student
{
public:

    string name;
    int age;
};
```

This class describes what a Student should contain.

---

## Why Do We Need Classes?

Without Classes:

```cpp
string name1;
int age1;

string name2;
int age2;
```

Code becomes repetitive.

With Classes:

```cpp
Student s1;
Student s2;
```

Cleaner and more organized.

---

## Real World Mapping

```text
Class
=
Blueprint of House

Student Class
=
Blueprint of Student
```

---

# 2. Object

## Real World Example

The blueprint itself is not a house.

When construction is completed:

```text
House 1
House 2
House 3
```

These are actual houses created from the same blueprint.

Similarly:

```text
Class
↓
Creates
↓
Objects
```

---

## What is an Object?

An Object is an instance of a class.

Example:

```cpp
Student s1;
```

Here:

```text
Student
=
Class

s1
=
Object
```

---

## Assigning Values

```cpp
s1.name = "Pratiksha";

s1.age = 21;
```

Now:

```text
s1
│
├── Name = Pratiksha
└── Age = 21
```

---

## Why Do We Need Objects?

Objects allow us to create multiple instances of a class.

Example:

```cpp
Student s1;
Student s2;
Student s3;
```

Each object stores its own data.

---

# 3. Constructor

## Real World Example

Imagine buying a new phone.

The moment you switch it on:

```text
Language Setup
WiFi Setup
Account Setup
```

Some things happen automatically.

A Constructor behaves similarly.

---

## What is a Constructor?

A Constructor is a special member function that is automatically called when an object is created.

Example:

```cpp
Student s1;
```

The constructor executes automatically.

---

## Why Do We Need Constructors?

Without Constructor:

```cpp
Student s1;

s1.name = "Pratiksha";
```

With Constructor:

```cpp
Student s1;
```

Initial setup can happen automatically.

---

## Characteristics

```text
Same Name As Class
No Return Type
Called Automatically
Runs Once Per Object
```

---

# 4. Destructor

## Real World Example

Imagine leaving a hotel room.

Before you leave:

```text
Room Cleaned
Resources Released
Checkout Completed
```

Cleanup happens automatically.

A Destructor performs a similar role.

---

## What is a Destructor?

A Destructor is a special member function automatically called when an object is destroyed.

Example:

```cpp
~Student()
{
}
```

---

## Why Do We Need Destructors?

Used for:

```text
Cleanup
Memory Release
Closing Files
Resource Management
```

---

## Characteristics

```text
Starts With ~
No Return Type
Called Automatically
Runs Once Per Object
```

---

# 5. Encapsulation

## Real World Example

Think about an ATM.

You can:

```text
Withdraw Money
Check Balance
Deposit Money
```

But can you directly access the bank database?

No.

The data is protected.

This is Encapsulation.

---

## What is Encapsulation?

Encapsulation means:

```text
Binding Data
+
Functions
Into One Unit
```

while restricting direct access to internal data.

---

## Benefits

```text
Data Security
Controlled Access
Better Maintainability
Cleaner Code
```

---

# 6. Inheritance

## Real World Example

A child inherits characteristics from parents.

Example:

```text
Parent
│
├── Eye Color
├── Height
└── Hair Type

Child
```

The child automatically gets many of these traits.

Similarly:

```text
Derived Class
inherits
Base Class
```

---

## What is Inheritance?

Inheritance allows one class to acquire properties and functions of another class.

Example:

```cpp
class Animal
{
};

class Dog : public Animal
{
};
```

Dog inherits Animal.

---

## Benefits

```text
Code Reusability
Reduced Duplication
Better Organization
```

---

# 7. Polymorphism

## Real World Example

One person can have multiple roles.

```text
Pratiksha
│
├── Student
├── Developer
└── Daughter
```

Same person.

Different behaviour.

This idea is Polymorphism.

---

## What is Polymorphism?

Polymorphism means:

```text
One Interface
Multiple Forms
```

Example:

```cpp
add(5,10)

add(5,10,15)
```

Same function name.

Different behaviour.

---

# 8. Abstraction

## Real World Example

You drive a car.

You use:

```text
Steering
Brake
Accelerator
```

But do you know every engine component?

No.

Complex implementation is hidden.

This is Abstraction.

---

## What is Abstraction?

Abstraction means:

```text
Showing Essential Information

Hiding Internal Details
```

---

## Benefits

```text
Reduced Complexity
Better Security
Easy Usage
```

---

# 9. Friend Function

## Real World Example

Imagine a secure company.

Employees cannot access private documents.

However:

```text
Auditor
```

gets special permission.

A Friend Function works similarly.

---

## What is a Friend Function?

A Friend Function is a non-member function that can access private members of a class.

Example:

```cpp
friend void showLength(Box);
```

---

## Why Use Friend Functions?

Useful when:

```text
External Function
Needs Special Access
```

to private data.

---

# OOP Pillars

The four pillars of OOP are:

```text
Encapsulation
Inheritance
Polymorphism
Abstraction
```

These form the foundation of modern software development.

---

# OOP in Real Software

OOP is used in:

```text
Banking Applications
E-Commerce Platforms
Games
Mobile Apps
Operating Systems
Enterprise Software
```

Almost every large software project uses OOP concepts.

---

# Most Important Topics For Interviews

Focus heavily on:

```text
Classes & Objects
Constructors
Encapsulation
Inheritance
Polymorphism
Abstraction
```

These are asked frequently in internships and placement interviews.

---

# Key Takeaways

* Class is a blueprint.
* Object is an instance of a class.
* Constructor performs automatic initialization.
* Destructor performs automatic cleanup.
* Encapsulation protects data.
* Inheritance enables code reuse.
* Polymorphism allows multiple forms of behaviour.
* Abstraction hides complexity.
* Friend Functions provide controlled access to private data.

---

## Next Topic

➡️ 19 - Exception Handling

You'll learn how professional applications handle unexpected errors without crashing.
