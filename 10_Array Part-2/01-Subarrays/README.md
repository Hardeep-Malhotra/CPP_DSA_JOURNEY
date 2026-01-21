# Array Part-2

## 📘 Subarrays and Maximum Subarray Sum

This folder contains conceptual understanding of **Subarrays** and **Maximum Subarray Sum** problems.  
These topics form the foundation of array-based problem solving in Data Structures and Algorithms.

---

## 🔹 What is a Subarray?

A **subarray** is a continuous part of an array.

Example:  
Array = [1, 2, 3, 4]  
Some subarrays → [1], [1,2], [2,3,4], [3], etc.

---

## 🔹 Total Number of Subarrays

For an array of size `n`:

Total Subarrays = n × (n + 1) / 2

Reason:  
First element forms `n` subarrays,  
Second element forms `n-1` subarrays, and so on.

---

## 🔹 Printing All Subarrays – Core Logic

### Idea:
To print all subarrays, we use three levels of iteration.

### Steps:
1. Fix a **starting index**.
2. Move the **ending index** from start to end of array.
3. Print elements between start and end.

### Loop Roles:
- Outer loop → fixes starting index.
- Middle loop → fixes ending index.
- Inner loop → prints elements between them.

### Time Complexity:
O(n³)  
(Three nested loops)

### Space Complexity:
O(1)

---

## 🔹 Maximum Subarray Sum – Problem Statement

Given an integer array, find the contiguous subarray having the **maximum possible sum**.

---

## 🔹 Approach 1: Brute Force

### Logic:
1. Generate all possible subarrays.
2. Compute sum of each subarray.
3. Track the maximum sum found.

### Drawback:
Same subarray sums are recalculated multiple times.

### Time Complexity:
O(n³)

### Space Complexity:
O(1)

---

## 🔹 Approach 2: Optimized Brute Force

### Logic:
Instead of recalculating sum every time:

1. Fix starting index.
2. Initialize current sum = 0.
3. Extend ending index forward.
4. Add new element to current sum.
5. Update maximum sum.

This avoids recomputing subarray sums from scratch.

### Time Complexity:
O(n²)

### Space Complexity:
O(1)

---

## 🔹 Approach 3: Kadane’s Algorithm (Optimal Solution)

### Core Idea:
While traversing the array, maintain a **running sum**.

### Steps:
1. Add current element to running sum.
2. Update maximum sum if running sum is greater.
3. If running sum becomes negative, reset it to 0.

### Key Insight:
A negative running sum cannot help in forming a maximum subarray ahead,  
so it is discarded.

### Time Complexity:
O(n)  (Single traversal)

### Space Complexity:
O(1)

---

## 🔹 Why Kadane’s Algorithm Works

- Positive sum helps build larger subarray.
- Negative sum reduces future potential.
- Resetting at negative sum ensures best possible continuation.

---

## 🔹 Key Takeaways

- Subarray problems strengthen loop and index understanding.
- Brute force builds conceptual clarity.
- Optimization teaches efficiency improvement.
- Kadane’s Algorithm is the standard interview solution.

---

## 🚀 Learning Outcome

After completing this topic, you understand:

✔ How to generate all subarrays  
✔ How to compute subarray sums  
✔ How to optimize brute force solutions  
✔ How Kadane’s Algorithm achieves O(n) performance  

---
**👨‍💻 Author**
Maintained by Hardeep Singh for mastering C++ fundamentals.

🚀 Happy Coding!
