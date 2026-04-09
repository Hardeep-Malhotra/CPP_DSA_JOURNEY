# 📘 C++ Recursion — Complete Guide

This repository contains **basic to intermediate recursion problems in C++** with detailed explanations and examples.

Recursion is a fundamental concept in **Data Structures & Algorithms (DSA)** and is widely used in problems like **Binary Search, Trees, Backtracking, Dynamic Programming, and Divide & Conquer algorithms**.

---

# 🧠 What is Recursion?

Recursion is a programming technique where a **function calls itself** to solve a smaller version of the same problem.

Instead of using loops, recursion repeatedly breaks the problem into smaller SubProblems.

### Example Idea

Print numbers from **5 to 1**

Loop approach:

```cpp
for(int i = 5; i >= 1; i--)
```
Recursion approach:
```cpp
print(5)
print(4)
print(3)
print(2)
print(1)
```
---

# ⚙️ Structure of Recursion

Every recursive function has **three main components**.

## 1️⃣ Base Case

The stopping condition of recursion.

If the base case is missing, the function will call itself infinitely causing a **Stack Overflow**.

Example:

```cpp
if(n == 0)
return;
```
# 3️⃣ Recursive Call

The function calls itself with a smaller input.

Example:
```cpp
print(n-1);
```


