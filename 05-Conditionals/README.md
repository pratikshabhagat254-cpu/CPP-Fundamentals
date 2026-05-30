# 05 - Conditionals

## Overview

Conditionals are used to make decisions in a program.

In real life, we make decisions every day:

```text
If it is raining → Take an umbrella.
If marks are above 40 → Pass.
If age is 18 or above → Eligible to vote.
```

Similarly, programs use conditionals to decide which block of code should execute.

Without conditionals, programs would execute every statement sequentially without making any decisions.

---

# What are Conditionals?

Conditionals allow a program to execute different code blocks based on whether a condition is true or false.

A condition always evaluates to:

```text
true  -> 1
false -> 0
```

### Example

```cpp
int age = 20;

if(age >= 18) {
    cout << "Eligible to Vote";
}
```

Output:

```text
Eligible to Vote
```

---

# Why Do We Need Conditionals?

Conditionals help programs:

* Make decisions
* Validate inputs
* Handle different scenarios
* Control program flow

### Real World Examples

```text
ATM Machine
├── Correct PIN → Continue
└── Wrong PIN → Reject

E-commerce Website
├── Product Available → Place Order
└── Out of Stock → Show Message

College Portal
├── Marks >= 40 → Pass
└── Marks < 40 → Fail
```

---

# Flow of Execution

Without Conditionals:

```text
Start
 ↓
Statement 1
 ↓
Statement 2
 ↓
Statement 3
 ↓
End
```

With Conditionals:

```text
Start
 ↓
Check Condition
 ↓
True? ── Yes ──► Execute Block A
 ↓ No
Execute Block B
 ↓
End
```

---

# 1. if Statement

The simplest conditional statement.

Executes a block of code only if the condition is true.

---

## Syntax

```cpp
if(condition) {
    // code
}
```

---

## Example

```cpp
int age = 20;

if(age >= 18) {
    cout << "Eligible to Vote";
}
```

Output:

```text
Eligible to Vote
```

---

## Working

```text
Condition True  → Execute Block
Condition False → Skip Block
```

---

## Real World Usage

```text
Voting Eligibility
Exam Qualification
Loan Approval
```

---

# 2. if-else Statement

Used when we need two possible outcomes.

---

## Syntax

```cpp
if(condition) {
    // code if true
}
else {
    // code if false
}
```

---

## Example

```cpp
int age = 16;

if(age >= 18) {
    cout << "Can Vote";
}
else {
    cout << "Cannot Vote";
}
```

Output:

```text
Cannot Vote
```

---

## Working

```text
Condition True  → if Block Executes
Condition False → else Block Executes
```

---

## Real World Usage

```text
Pass / Fail
Login Success / Failure
Payment Successful / Failed
```

---

# 3. Nested if Statement

An if statement inside another if statement.

Used when multiple conditions need to be checked sequentially.

---

## Syntax

```cpp
if(condition1) {

    if(condition2) {
        // code
    }

}
```

---

## Example

```cpp
int age = 22;
bool hasLicense = true;

if(age >= 18) {

    if(hasLicense) {
        cout << "Can Drive";
    }

}
```

Output:

```text
Can Drive
```

---

## Working

```text
Check Condition 1
        ↓
If True
        ↓
Check Condition 2
        ↓
Execute Block
```

---

## Real World Usage

```text
Age Check + Driving License
Username Check + Password Check
Student Registered + Fees Paid
```

---

# 4. else-if Ladder

Used when there are multiple conditions.

The first true condition executes and the remaining conditions are skipped.

---

## Syntax

```cpp
if(condition1) {

}
else if(condition2) {

}
else if(condition3) {

}
else {

}
```

---

## Example

```cpp
int marks = 85;

if(marks >= 90) {
    cout << "Grade A";
}
else if(marks >= 80) {
    cout << "Grade B";
}
else if(marks >= 70) {
    cout << "Grade C";
}
else {
    cout << "Fail";
}
```

Output:

```text
Grade B
```

---

## Working

```text
Check Condition 1
       ↓
False
       ↓
Check Condition 2
       ↓
True
       ↓
Execute Block
       ↓
Stop
```

---

## Real World Usage

```text
Grade Calculation
Tax Slabs
Salary Brackets
Discount Systems
```

---

# 5. switch Statement

Used when one variable can have multiple fixed values.

Often cleaner than writing many else-if statements.

---

## Syntax

```cpp
switch(expression) {

    case value1:
        // code
        break;

    case value2:
        // code
        break;

    default:
        // code
}
```

---

## Example

```cpp
int day = 3;

switch(day) {

    case 1:
        cout << "Monday";
        break;

    case 2:
        cout << "Tuesday";
        break;

    case 3:
        cout << "Wednesday";
        break;

    default:
        cout << "Invalid Day";
}
```

Output:

```text
Wednesday
```

---

# break Statement

The break statement exits the switch block.

---

## Example

```cpp
case 1:
    cout << "Monday";
    break;
```

Without break:

```text
Execution continues to next cases.
```

This behavior is called:

```text
Fall Through
```

---

# default Case

The default block executes when none of the cases match.

---

## Example

```cpp
default:
    cout << "Invalid Choice";
```

---

## Real World Usage

```text
Menu Driven Programs
Calculator Applications
ATM Systems
Game Menus
```

---

# switch vs if-else

## Use if-else When

```text
Conditions involve:
>, <, >=, <=
Logical Operators
Complex Expressions
```

Example:

```cpp
if(age >= 18)
```

---

## Use switch When

```text
One variable
Multiple fixed values
```

Example:

```cpp
switch(day)
```

---

# Common Beginner Mistakes

## Mistake 1

Using = instead of ==

Wrong:

```cpp
if(age = 18)
```

Correct:

```cpp
if(age == 18)
```

---

## Mistake 2

Forgetting Curly Braces

Wrong:

```cpp
if(age >= 18)
    cout << "Adult";
    cout << "Eligible";
```

Only first statement belongs to if.

---

## Mistake 3

Forgetting break in switch

Wrong:

```cpp
case 1:
    cout << "Monday";
```

Execution continues to next cases.

---

## Mistake 4

Incorrect Order in else-if Ladder

Wrong:

```cpp
if(marks >= 40)
```

before

```cpp
if(marks >= 90)
```

The first condition may catch all larger values.

---

# How to Compile

```bash
g++ if.cpp -o if
```

---

# How to Run

```bash
./if
```

or

```bash
if.exe
```

---

# Folder Structure

```text
05-Conditionals
│
├── README.md
├── if.cpp
├── if_else.cpp
├── nested_if.cpp
├── else_if_ladder.cpp
└── switch_case.cpp
```

---

# Key Takeaways

* Conditionals help programs make decisions.
* if executes code only when a condition is true.
* if-else handles two possible outcomes.
* Nested if is used for multiple dependent conditions.
* else-if ladder is used for multiple choices.
* switch is useful for fixed-value decisions.
* break prevents fall-through in switch statements.
* default handles unmatched cases.

---

## Next Topic

➡️ 06 - Loops
