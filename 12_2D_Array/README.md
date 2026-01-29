# 📘 2D Array 

This README provides an in-depth explanation of **2D Arrays** in programming (with a C/C++ mindset), covering concepts from basics to advanced pointer usage. It is written to build **strong conceptual understanding**, not just code memorization.

---

## 1️⃣ Introduction to 2D Array

A **2D Array (Two-Dimensional Array)** is a data structure that stores elements in the form of **rows and columns**, similar to a table or matrix.

### Why 2D Arrays?

* To represent **matrices**
* To store **grid-based data** (like chess boards, images)
* To handle **row-column relationships** efficiently

### Visualization

```
[ a11  a12  a13 ]
[ a21  a22  a23 ]
[ a31  a32  a33 ]
```

### Key Points

* Indexing starts from `0`
* Access format: `array[row][column]`
* Stored in **row-major order** in memory

---

## 2️⃣ Input and Output of a 2D Array

### Input Concept

Input is generally taken using **nested loops**:

* Outer loop → Rows
* Inner loop → Columns

This ensures every element is visited exactly once.

### Output Concept

Similarly, nested loops are used for output to maintain matrix structure.

### Common Mistakes

* Swapping row and column loops
* Using incorrect bounds
* Forgetting that `rows × columns = total elements`

### Time Complexity

* Input: **O(rows × columns)**
* Output: **O(rows × columns)**

---

## 3️⃣ Spiral Matrix Traversal

### What is Spiral Matrix?

Spiral traversal means printing matrix elements in a **clockwise spiral order**.

### Direction Order

1. Left → Right (Top row)
2. Top → Bottom (Right column)
3. Right → Left (Bottom row)
4. Bottom → Top (Left column)

### Core Idea

We maintain **four boundaries**:

* `startRow`
* `endRow`
* `startCol`
* `endCol`

After each traversal, boundaries are updated to move inward.

### Important Conditions

* Always check boundaries before each loop
* Avoid double-printing when rows or columns overlap

### Time & Space Complexity

* Time: **O(n × m)**
* Space: **O(1)** (no extra space)

---

## 4️⃣ Diagonal Sum in a Matrix

### Types of Diagonals

1. **Primary Diagonal** → `i == j`
2. **Secondary Diagonal** → `i + j == n - 1`

### Key Observations

* Works best in **square matrices**
* Middle element (in odd-sized matrix) lies on both diagonals

### Optimization Trick

Instead of traversing the full matrix:

* Use a **single loop** from `0` to `n-1`

### Time Complexity

* Optimized: **O(n)**
* Brute Force: **O(n²)**

---

## 5️⃣ Search in a Sorted Matrix

### Problem Statement

Matrix is sorted:

* Each row → left to right
* Each column → top to bottom

### Efficient Strategy (Staircase Search)

* Start from **top-right** or **bottom-left**
* Compare current element:

  * If greater → move left
  * If smaller → move down

### Why It Works?

At each step, one full row or column is eliminated.

### Complexity

* Time: **O(n + m)**
* Space: **O(1)**

---

## 6️⃣ Matrix Pointer Concept

### What is a Matrix Pointer?

A matrix pointer is used when passing a 2D array to functions using **pointers** instead of direct array syntax.

### Memory Reality

A 2D array is stored as:

* Continuous rows
* Each row contains consecutive columns

### Important Rule

The **number of columns must be known** to the compiler when using pointers.

### Why Columns Matter?

Pointer arithmetic depends on column size to calculate the next row address correctly.

---

## 7️⃣ Matrix Pointer in Functions

### Passing 2D Array to Function

There are multiple valid ways:

1. Fixed column size
2. Pointer to array
3. Double pointer (advanced, dynamic)

### Most Common & Safe Method

Using pointer to array:

```
int (*ptr)[columns]
```

### Key Understanding

* `ptr` points to an entire row
* `ptr + 1` jumps to the next row
* `*(ptr + i) + j` accesses element `[i][j]`

### Common Errors

* Forgetting column size
* Confusing `int**` with `int (*)[col]`
* Incorrect pointer arithmetic

---

## 🔚 Conclusion

2D Arrays are a **core foundation** for:

* Matrices
* Advanced algorithms
* Data structures like graphs

Understanding:

* Traversal logic
* Boundary conditions
* Pointer behavior

will make topics like **DP, Graphs, Image Processing, and System Programming** much easier.

---
🚀 Author

Hardeep Singh
BCA Student | DSA with C++ Learner | Aspiring Software Engineer

⭐ If you find this helpful
Give the repo a star 🙂
```

