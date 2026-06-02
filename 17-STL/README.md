# 17 - STL (Standard Template Library)

## Why Does STL Exist?

Imagine you're building a food delivery application like Swiggy or Zomato.

Your application needs to:

* Store restaurants
* Manage orders
* Search customers
* Sort ratings
* Track delivery agents
* Process payments

Would you create every data structure from scratch?

Probably not.

You would use existing, optimized tools.

That's exactly what the Standard Template Library (STL) provides.

STL gives us ready-made data structures and algorithms so we can focus on solving problems instead of reinventing the wheel.

---

## Real World Analogy

Think of STL as a toolbox.

A carpenter doesn't create a hammer every time they need one.

They simply pick the correct tool.

Similarly:

```text
Need a Dynamic Array?
→ Vector

Need LIFO Behaviour?
→ Stack

Need FIFO Behaviour?
→ Queue

Need Unique Values?
→ Set

Need Fast Key-Value Lookup?
→ Unordered Map
```

The real skill is knowing which tool to use and when.

---

## What You'll Learn

```text
✓ Vector
✓ Pair
✓ Stack
✓ Queue
✓ Deque
✓ Priority Queue
✓ Set
✓ Unordered Set
✓ Map
✓ Unordered Map
✓ STL Algorithms
```

---

## STL Learning Roadmap

```text
Vector
 ↓
Pair
 ↓
Stack
 ↓
Queue
 ↓
Deque
 ↓
Priority Queue
 ↓
Set
 ↓
Unordered Set
 ↓
Map
 ↓
Unordered Map
 ↓
Algorithms
```

Let's start with the most important STL container.

---

# 1. Vector

## Real World Example

Imagine you're organizing registrations for a hackathon.

Initially:

```text
50 Students Registered
```

Later:

```text
75 Students Registered
150 Students Registered
300 Students Registered
```

The number keeps changing.

A normal array struggles because its size is fixed.

A vector automatically grows whenever more space is needed.

That's why vectors are called Dynamic Arrays.

---

## What is a Vector?

A Vector is a dynamic array provided by STL.

Unlike traditional arrays, vectors can increase or decrease in size during program execution.

Declaration:

```cpp
vector<int> numbers;
```

---

## Why Do We Need Vectors?

Normal Array:

```cpp
int arr[5];
```

Problems:

```text
Fixed Size
Cannot Grow
Cannot Shrink
```

Vector:

```cpp
vector<int> numbers;
```

Advantages:

```text
Dynamic Size
Easy Insertion
Easy Deletion
STL Support
```

---

## Creating a Vector

```cpp
vector<int> numbers;
```

Initially:

```text
[ ]
```

Empty vector.

---

## Adding Elements

Use:

```cpp
push_back()
```

Example:

```cpp
numbers.push_back(10);
numbers.push_back(20);
numbers.push_back(30);
```

Result:

```text
[10, 20, 30]
```

---

## Removing Elements

Use:

```cpp
pop_back()
```

Example:

```cpp
numbers.pop_back();
```

Before:

```text
[10, 20, 30]
```

After:

```text
[10, 20]
```

---

## Accessing Elements

```cpp
numbers[0]
numbers[1]
numbers[2]
```

Example:

```cpp
cout << numbers[0];
```

Output:

```text
10
```

---

## Useful Functions

### size()

Returns number of elements.

```cpp
numbers.size();
```

Example:

```text
3
```

---

### empty()

Checks whether vector is empty.

```cpp
numbers.empty();
```

Returns:

```text
true
or
false
```

---

### front()

Returns first element.

```cpp
numbers.front();
```

Example:

```text
10
```

---

### back()

Returns last element.

```cpp
numbers.back();
```

Example:

```text
30
```

---

### clear()

Removes all elements.

```cpp
numbers.clear();
```

Result:

```text
[ ]
```

---

## Traversing a Vector

Traditional Loop:

```cpp
for(int i = 0; i < numbers.size(); i++)
{
    cout << numbers[i] << " ";
}
```

---

Range Based Loop:

```cpp
for(int num : numbers)
{
    cout << num << " ";
}
```

Modern C++ developers prefer this style.

---

## Time Complexity

| Operation   | Complexity   |
| ----------- | ------------ |
| Access      | O(1)         |
| push_back() | O(1) Average |
| pop_back()  | O(1)         |
| Search      | O(n)         |
| Traversal   | O(n)         |

---

## When Should You Use Vector?

Use Vector when:

```text
Size is Unknown
Elements Grow Dynamically
Frequent Traversal Needed
Interview Questions
```

For most DSA problems:

```cpp
vector<int>
```

should be your first choice.

---

## Interview Usage

Common questions using vectors:

```text
Two Sum
Maximum Subarray
Merge Intervals
Sliding Window
Prefix Sum
Binary Search
```

Vectors are the most frequently used STL container.

---

# 2. Pair

## Real World Example

Imagine a student database.

Each student has:

```text
Name
Age
```

Both values belong together.

Instead of storing them separately:

```cpp
string name;
int age;
```

we can store them as a single unit.

---

## What is a Pair?

A Pair stores two values together.

Declaration:

```cpp
pair<string, int> student;
```

Visualization:

```text
("Pratiksha", 21)
```

One variable.

Two values.

---

## Why Do We Need Pair?

Pairs help us keep related information together.

Examples:

```text
Student Name + Age
Product Name + Price
Coordinate X + Y
City + Population
```

---

## Creating a Pair

Method 1:

```cpp
pair<string, int> student;
```

Assign values:

```cpp
student.first = "Pratiksha";
student.second = 21;
```

---

Method 2:

```cpp
pair<string, int> student =
{
    "Pratiksha",
    21
};
```

---

## Accessing Values

Use:

```cpp
first
second
```

Example:

```cpp
cout << student.first;
```

Output:

```text
Pratiksha
```

---

Example:

```cpp
cout << student.second;
```

Output:

```text
21
```

---

## Pair Visualization

```text
student

┌──────────────┐
│ Pratiksha    │
│ 21           │
└──────────────┘
```

---

## Nested Pair

A Pair can store another Pair.

Example:

```cpp
pair<int, pair<int,int>> p;
```

Visualization:

```text
(1, (2,3))
```

---

## Common Use Cases

Pairs are heavily used in:

```text
Graphs
Coordinates
Sorting Problems
Priority Queues
Competitive Programming
```

---

## Example

Coordinate System:

```cpp
pair<int,int> point;

point.first = 10;
point.second = 20;
```

Represents:

```text
(10,20)
```

---

## Time Complexity

| Operation     | Complexity |
| ------------- | ---------- |
| Access first  | O(1)       |
| Access second | O(1)       |
| Assignment    | O(1)       |

---

## Interview Usage

Pairs commonly appear in:

```text
Graph Adjacency Lists
Coordinate Geometry
Shortest Path Algorithms
Priority Queues
Sorting Questions
```

---

## Key Takeaways

### Vector

```text
Dynamic Array
Most Used STL Container
Supports Dynamic Growth
```

### Pair

```text
Stores Two Values Together
Useful For Related Data
Common In Graph Problems
```

---


# 3. Stack

## Real World Example

Think about the browser history in Google Chrome.

You visit:

```text
Google
↓
YouTube
↓
GitHub
↓
LeetCode
```

When you press:

```text
Back
```

Where do you go?

```text
GitHub
```

Press Back again:

```text
YouTube
```

The last page visited is the first page removed.

This follows:

```text
LIFO
(Last In First Out)
```

which is exactly how a Stack works.

---

## What is a Stack?

A Stack is a linear data structure that follows:

```text
LIFO
Last In First Out
```

Declaration:

```cpp
stack<int> st;
```

---

## Common Operations

### push()

Adds an element.

```cpp
st.push(10);
st.push(20);
st.push(30);
```

Stack:

```text
Top
 │
30
20
10
```

---

### pop()

Removes the top element.

```cpp
st.pop();
```

Result:

```text
20
10
```

---

### top()

Returns the top element.

```cpp
st.top();
```

Output:

```text
30
```

---

### size()

Returns number of elements.

```cpp
st.size();
```

---

### empty()

Checks if stack is empty.

```cpp
st.empty();
```

---

## When Should You Use Stack?

Use Stack when:

```text
Undo Operations
Browser History
Function Calls
Backtracking
Expression Evaluation
```

---

## Interview Usage

Common Problems:

```text
Valid Parentheses
Next Greater Element
Stock Span Problem
Monotonic Stack
```

---

## Time Complexity

| Operation | Complexity |
| --------- | ---------- |
| push()    | O(1)       |
| pop()     | O(1)       |
| top()     | O(1)       |

---

# 4. Queue

## Real World Example

Imagine standing in a queue at a movie ticket counter.

```text
A → B → C → D
```

Who gets served first?

```text
A
```

The first person entering the queue leaves first.

This follows:

```text
FIFO
First In First Out
```

---

## What is a Queue?

A Queue is a linear data structure that follows:

```text
FIFO
First In First Out
```

Declaration:

```cpp
queue<int> q;
```

---

## Common Operations

### push()

Adds an element at the back.

```cpp
q.push(10);
q.push(20);
q.push(30);
```

---

### pop()

Removes the front element.

```cpp
q.pop();
```

---

### front()

Returns first element.

```cpp
q.front();
```

---

### back()

Returns last element.

```cpp
q.back();
```

---

## When Should You Use Queue?

Use Queue when:

```text
Task Scheduling
Printer Jobs
Customer Service Systems
Breadth First Search (BFS)
CPU Scheduling
```

---

## Interview Usage

Common Problems:

```text
BFS Traversal
Rotting Oranges
Flood Fill
Level Order Traversal
Shortest Path Problems
```

---

## Time Complexity

| Operation | Complexity |
| --------- | ---------- |
| push()    | O(1)       |
| pop()     | O(1)       |
| front()   | O(1)       |
| back()    | O(1)       |

---

# 5. Deque

## Real World Example

Imagine a train.

Passengers can enter from:

```text
Front Door
```

or

```text
Back Door
```

Similarly, passengers can leave from both ends.

A Deque behaves exactly like this.

---

## What is a Deque?

Deque stands for:

```text
Double Ended Queue
```

Insertion and deletion can occur from both ends.

Declaration:

```cpp
deque<int> dq;
```

---

## Common Operations

```cpp
push_front()
push_back()

pop_front()
pop_back()

front()
back()
```

---

## Visualization

```text
Front

10 20 30

Back
```

Operations can happen on both sides.

---

## When Should You Use Deque?

Use Deque when:

```text
Insertion Needed At Both Ends
Sliding Window Problems
Caching Systems
Task Scheduling
```

---

## Interview Usage

Common Problems:

```text
Sliding Window Maximum
Monotonic Queue
Deque Optimization Problems
```

---

## Time Complexity

| Operation    | Complexity |
| ------------ | ---------- |
| push_front() | O(1)       |
| push_back()  | O(1)       |
| pop_front()  | O(1)       |
| pop_back()   | O(1)       |

---

# 6. Priority Queue

## Real World Example

Imagine a hospital emergency room.

Patients arrive in this order:

```text
Patient A
Patient B
Patient C
```

But Patient C is in critical condition.

Should the hospital treat everyone in arrival order?

No.

The most critical patient should be treated first.

This is Priority Queue behaviour.

---

## What is a Priority Queue?

A Priority Queue processes elements according to priority.

By default:

```text
Largest Element
=
Highest Priority
```

Declaration:

```cpp
priority_queue<int> pq;
```

---

## Example

```cpp
pq.push(10);
pq.push(50);
pq.push(30);
```

Top Element:

```text
50
```

---

## Max Heap

Default Priority Queue:

```text
Largest Element First
```

Also called:

```text
Max Heap
```

---

## Min Heap

```cpp
priority_queue<
int,
vector<int>,
greater<int>
> pq;
```

Now:

```text
Smallest Element First
```

---

## When Should You Use Priority Queue?

Use Priority Queue when:

```text
Highest Priority Task First
Top K Problems
Ranking Systems
Scheduling Systems
```

---

## Interview Usage

Common Problems:

```text
K Largest Elements
K Closest Points
Merge K Sorted Lists
Dijkstra's Algorithm
```

---

## Time Complexity

| Operation | Complexity |
| --------- | ---------- |
| push()    | O(log n)   |
| pop()     | O(log n)   |
| top()     | O(1)       |

---

# 7. Set

## Real World Example

Imagine attendance tracking.

Students scan their IDs:

```text
Rahul
Priya
Rahul
Aman
Priya
```

Should Rahul and Priya appear twice?

No.

Attendance should contain only unique students.

That's exactly what a Set does.

---

## What is a Set?

Stores:

```text
Unique Elements
Sorted Order
```

Declaration:

```cpp
set<int> s;
```

---

## Example

```cpp
s.insert(50);
s.insert(10);
s.insert(20);
s.insert(10);
```

Stored:

```text
10 20 50
```

---

## Time Complexity

| Operation | Complexity |
| --------- | ---------- |
| Insert    | O(log n)   |
| Search    | O(log n)   |
| Delete    | O(log n)   |

---

# 8. Unordered Set

## Real World Example

Instagram username lookup.

You only care whether:

```text
Username Exists?
```

You don't care about alphabetical order.

You want the answer as fast as possible.

---

## What is Unordered Set?

Stores:

```text
Unique Elements
```

without sorting.

Declaration:

```cpp
unordered_set<int> us;
```

---

## Why Is It Faster?

Because it uses:

```text
Hashing
```

internally.

---

## Time Complexity

| Operation | Complexity   |
| --------- | ------------ |
| Insert    | O(1) Average |
| Search    | O(1) Average |
| Delete    | O(1) Average |

---

# Set vs Unordered Set

| Feature       | Set      | Unordered Set |
| ------------- | -------- | ------------- |
| Unique Values | ✅        | ✅             |
| Sorted        | ✅        | ❌             |
| Search        | O(log n) | O(1) Avg      |

---

# 9. Map

## Real World Example

A report card.

```text
Math → 95
Science → 89
English → 92
```

Each subject has a corresponding mark.

This is a Key → Value relationship.

---

## What is a Map?

Stores:

```text
Key → Value
```

pairs in sorted order.

Declaration:

```cpp
map<string,int> marks;
```

---

## Example

```cpp
marks["Math"] = 95;
marks["Science"] = 89;
```

---

## Time Complexity

| Operation | Complexity |
| --------- | ---------- |
| Insert    | O(log n)   |
| Search    | O(log n)   |
| Delete    | O(log n)   |

---

# 10. Unordered Map

## Real World Example

Google Login System.

When you enter:

```text
Username
```

Google doesn't search every account one by one.

Instead:

```text
Username
↓
Hash
↓
Direct Lookup
```

That's the idea behind Unordered Map.

---

## What is Unordered Map?

Stores:

```text
Key → Value
```

using hashing.

Declaration:

```cpp
unordered_map<string,int> marks;
```

---

## Why Is It Important?

Because:

```cpp
unordered_map
```

is the most frequently used STL container in coding interviews.

---

## Common Problems

```text
Two Sum
Frequency Count
Anagrams
Duplicate Detection
Hashing Problems
```

---

## Time Complexity

| Operation | Complexity   |
| --------- | ------------ |
| Insert    | O(1) Average |
| Search    | O(1) Average |
| Delete    | O(1) Average |

---

# 11. STL Algorithms

## Real World Example

Imagine you have student marks:

```text
85 92 70 96 88
```

Common tasks:

```text
Sort Marks
Find Highest Mark
Find Lowest Mark
Search Values
```

STL already provides optimized solutions.

---

## Common Algorithms

### sort()

```cpp
sort(nums.begin(), nums.end());
```

---

### reverse()

```cpp
reverse(nums.begin(), nums.end());
```

---

### max_element()

```cpp
*max_element(nums.begin(), nums.end());
```

---

### min_element()

```cpp
*min_element(nums.begin(), nums.end());
```

---

### binary_search()

```cpp
binary_search(nums.begin(), nums.end(), target);
```

---

# STL Complexity Cheat Sheet

| Container     | Insert   | Delete   | Search   |
| ------------- | -------- | -------- | -------- |
| Vector        | O(1)*    | O(n)     | O(n)     |
| Stack         | O(1)     | O(1)     | -        |
| Queue         | O(1)     | O(1)     | -        |
| Deque         | O(1)     | O(1)     | O(n)     |
| Set           | O(log n) | O(log n) | O(log n) |
| Unordered Set | O(1) Avg | O(1) Avg | O(1) Avg |
| Map           | O(log n) | O(log n) | O(log n) |
| Unordered Map | O(1) Avg | O(1) Avg | O(1) Avg |

---

# Which STL Container Should I Use?

```text
Need Dynamic Array?
→ Vector

Need LIFO?
→ Stack

Need FIFO?
→ Queue

Need Both Ends?
→ Deque

Need Highest Priority First?
→ Priority Queue

Need Unique Sorted Values?
→ Set

Need Fast Unique Values?
→ Unordered Set

Need Key → Value Mapping?
→ Map

Need Fast Key → Value Lookup?
→ Unordered Map
```

---

# Most Important STL Containers For Interviews

Focus on these first:

```text
1. Vector
2. Unordered Map
3. Set
4. Queue
5. Stack
6. Priority Queue
```

These appear in a huge percentage of DSA questions.

---

# Final Takeaways

* STL provides ready-made data structures and algorithms.
* Vector is the most commonly used container.
* Stack follows LIFO.
* Queue follows FIFO.
* Deque supports operations from both ends.
* Priority Queue processes elements based on priority.
* Set stores unique sorted values.
* Unordered Set provides faster lookups using hashing.
* Map stores sorted key-value pairs.
* Unordered Map is one of the most important interview tools.
* STL Algorithms help write cleaner and faster code.

---

## Next Topic

➡️ 18 - Object Oriented Programming (OOP)

Now we'll move from data structures to designing real-world software using Classes, Objects, Encapsulation, Inheritance, Polymorphism, and Abstraction.

