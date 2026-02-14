# 📘 C++ STL Containers – Complete Documentation

## This repository contains demonstrations and explanations of important C++ STL (Standard Template Library) Containers with internal concepts, characteristics, and use cases.

## 1️⃣ pair_demo.cpp – std::pair

**🔹 Overview**

std::pair is a utility container from the C++ Standard Library that stores two values together as a single object.

The two elements c\*\*an be of the same or different data types.

It is commonly used when two related values need to be stored or returned together.

**📌 Defined in:**

#include <utility>

**🔹 Internal Concept**

A pair contains:

first → First value

second → Second value

Conceptual Structure
pair<T1, T2>

+--------+--------+
| first | second |
+--------+--------+

**🔹 Key Characteristics**

Fixed size (always two elements)

Accessed using .first and .second

Lightweight utility structure

Frequently used inside other STL containers

**🔹 Common Use Cases**

Storing coordinate points (x, y)

Returning min and max together

Storing (value, index) combinations

Representing graph edges (node, weight)

## Used in map, unordered_map, etc.

## 2️⃣ vector_demo.cpp – std::vector

**🔹 Overview**

std::vector is a dynamic array container that stores elements in contiguous memory locations.

It allows:

Fast random access

Automatic resizing

📌 Defined in:
#include <vector>

**🔹 Internal Structure**
[ 10 | 20 | 30 | 40 ]

All elements are stored in continuous memory.

**🔹 Key Characteristics**

Dynamic size

Fast random access → O(1)

Insertion at end → Amortized O(1)

Insertion in middle → O(n)

Supports iterators

Cache friendly

**🔹 Memory Behavior**

When vector capacity becomes full:

Allocates larger memory

Copies old elements

Deletes old memory

This is why push_back() is amortized O(1).

**🔹 Use Cases**

Replacement of static arrays

Competitive programming

Sorting & searching problems

## Dynamic data storage

## 3️⃣ list_demo.cpp – std::list

**🔹 Overview**

std::list is a doubly linked list container.

Elements are NOT stored in contiguous memory.

📌 Defined in:
#include <list>

**🔹 Internal Structure**
[prev|data|next] <-> [prev|data|next] <-> [prev|data|next]

**🔹 Key Characteristics**

Fast insertion/deletion anywhere → O(1)

No random access

Uses more memory than vector

Bidirectional traversal

**🔹 When to Use**

Frequent insert/delete in middle

No need for indexing

## Large number of structural modifications

## 4️⃣ deque_demo.cpp – std::deque

**🔹 Overview**

Deque stands for Double Ended Queue.

It allows insertion and deletion from both front and back.

📌 Defined in:
#include <deque>

**🔹 Internal Structure**

Uses segmented memory blocks:

[Block1] [Block2] [Block3]

Not fully contiguous like vector.

**🔹 Key Characteristics**

Fast push_front() and push_back()

Random access supported

Slightly slower than vector for indexing

Dynamic size

**🔹 Use Cases**

Sliding window problems

Queue-based problems

## When both front and back operations are required

## 5️⃣ stack_demo.cpp – std::stack

**🔹 Overview**

std::stack is a container adapter that follows the LIFO principle.

Last In → First Out.

📌 Defined in:
#include <stack>

**🔹 Conceptual Structure**
TOP
|
[30]
[20]
[10]

**🔹 Key Characteristics**

No iteration allowed

Access only top element

Internally uses deque by default

Simple interface

**🔹 Use Cases**

Balanced parentheses

Expression evaluation

Undo/Redo operations

## Recursion simulation

## 6️⃣ queue_demo.cpp – std::queue

**🔹 Overview**

std::queue is a container adapter that follows the FIFO principle.

First In → First Out.

📌 Defined in:
#include <queue>

**🔹 Conceptual Structure**
Front → [10][20][30] ← Rear

**🔹 Key Characteristics**

Access only front and back

No iteration allowed

Internally uses deque

Simple interface

**🔹 Use Cases**

BFS (Breadth First Search)

Scheduling systems

## Buffer systems

## 7️⃣ set_demo.cpp – std::set

**🔹 Overview**

std::set is an ordered container that stores unique elements.

Internally implemented using a Red-Black Tree.

📌 Defined in:
#include <set>

**🔹 Structure Concept**
20
/ \
 10 30

Balanced BST structure.

**🔹 Key Characteristics**

Unique elements only

Automatically sorted

All operations → O(log n)

No random access

**🔹 Use Cases**

Removing duplicates

Maintaining sorted unique data

## Membership checking

## 8️⃣ multiset_demo.cpp – std::multiset

**🔹 Overview**

Similar to set but allows duplicate elements.

Still sorted.

**🔹 Key Characteristics**

Duplicates allowed

Automatically sorted

All operations → O(log n)

**🔹 Use Cases**

Frequency management

Kth smallest/largest problems

## Sliding window median

## 9️⃣ unordered_set_demo.cpp – std::unordered_set

**🔹 Overview**

Uses Hash Table internally.

Stores unique elements without sorting.

📌 Defined in:
#include <unordered_set>

**🔹 Internal Concept**
Hash Function → Bucket → Element

**🔹 Key Characteristics**

Unique elements

No order

Average O(1) operations

Worst case O(n)

**🔹 Use Cases**

Fast lookup

Duplicate removal

## Hashing-based problems

## 🔟 map_demo.cpp – std::map

**🔹 Overview**

Stores key-value pairs.

Keys are unique and sorted.

📌 Defined in:
#include <map>

**🔹 Structure Concept**
(2, Banana)
/ \
 (1, Apple) (3, Mango)

Balanced BST.

**🔹 Key Characteristics**

Unique keys

Sorted by key

O(log n) operations

No direct index access

**🔹 Use Cases**

Frequency counting

Ordered key storage

## Associative data storage

## 1️⃣1️⃣ multimap_demo.cpp – std::multimap

**🔹 Overview**

Allows duplicate keys.

Still sorted by key.

**🔹 Key Characteristics**

Duplicate keys allowed

Sorted

O(log n) operations

**🔹 Use Cases**

Grouping data

## One key → multiple values

## 1️⃣2️⃣ unordered_map_demo.cpp – std::unordered_map

**🔹 Overview**

Stores key-value pairs using Hash Table.

Keys are unique.

📌 Defined in:
#include <unordered_map>

**🔹 Internal Concept**
Key → Hash Function → Bucket → Value

**🔹 Key Characteristics**

Unique keys

Not sorted

Average O(1) operations

Very common in competitive programming

**🔹 Use Cases**

Two Sum problem

Frequency counting

Hash-based problems

Fast lookups

---

## 🔥 Final Summary Table

| Container     | Sorted | Duplicates    | Access Type | Time Complexity |
| ------------- | ------ | ------------- | ----------- | --------------- |
| vector        | ❌ No  | ✅ Yes        | Random      | O(1)            |
| list          | ❌ No  | ✅ Yes        | No index    | O(1) insert     |
| deque         | ❌ No  | ✅ Yes        | Random      | O(1)            |
| set           | ✅ Yes | ❌ No         | No index    | O(log n)        |
| multiset      | ✅ Yes | ✅ Yes        | No index    | O(log n)        |
| unordered_set | ❌ No  | ❌ No         | No index    | O(1) avg        |
| map           | ✅ Yes | Key unique    | By key      | O(log n)        |
| multimap      | ✅ Yes | Key duplicate | By key      | O(log n)        |
| unordered_map | ❌ No  | Key unique    | By key      | O(1) avg        |

---

## 🚀 Conclusion

The C++ STL provides powerful and optimized containers for different scenarios:

- Use **vector** for general-purpose dynamic arrays
- Use **list** for frequent insertions/deletions
- Use **set / map** when sorted order is required
- Use **unordered_set / unordered_map** for fastest lookups
- Use **stack / queue / deque** for specific data structure behavior

---
