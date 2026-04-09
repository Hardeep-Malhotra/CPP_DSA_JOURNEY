# 🚀 Divide & Conquer Mastery - DSA Series

Welcome to the **Divide & Conquer** module of the DSA roadmap.
This repository contains optimized implementations of important **sorting and searching algorithms** that follow the **Divide → Conquer → Combine** paradigm.

This module is essential for building a strong foundation in **Data Structures & Algorithms**, especially for **coding interviews and competitive programming**.

---

## 📌 What is Divide & Conquer?

Divide & Conquer is an algorithmic technique where a problem is:

1. **Divided** into smaller subproblems
2. **Conquered** by solving them recursively
3. **Combined** to produce the final result

### 🔹 Why use it?

* Reduces time complexity
* Makes complex problems easier
* Improves performance (especially for large inputs)

---

## 📑 Contents

| File Name                   | Algorithm               | Time Complexity | Space Complexity |
| :-------------------------- | :---------------------- | :-------------- | :--------------- |
| `01_MergeSort.cpp`          | Merge Sort              | O(n log n)      | O(n)             |
| `02_QuickSort.cpp`          | Quick Sort              | O(n log n)*     | O(log n)         |
| `03_RotatedSortedArray.cpp` | Search in Rotated Array | O(log n)        | O(1)             |

> ⚠️ *Quick Sort worst-case time complexity is O(n²)*

---

## 💡 Key Concepts (In-Depth)

---

### 🔷 1. Merge Sort

#### 📌 Strategy

Merge Sort follows the **divide and merge approach**:

* Divide the array into two halves
* Recursively sort each half
* Merge the sorted halves

#### 📌 How it works

1. Keep dividing until single elements remain
2. Start merging in sorted order
3. Final result becomes a sorted array

#### 📌 Properties

* ✅ Stable sorting algorithm
* ✅ Guaranteed O(n log n) time complexity
* ❌ Uses extra space (not in-place)

#### 📌 When to use?

* When stability is required
* When predictable performance is needed

---

### ⚡ 2. Quick Sort

#### 📌 Strategy

Quick Sort uses a **pivot element** to partition the array:

* Elements smaller than pivot → left side
* Elements greater than pivot → right side

#### 📌 How it works

1. Choose a pivot
2. Partition the array
3. Recursively sort left and right parts

#### 📌 Properties

* ✅ In-place sorting (no extra array needed)
* ✅ Faster in practice than Merge Sort
* ❌ Worst case O(n²) (bad pivot choice)

#### 📌 Optimization Tip

Use:

* Random pivot
* Median-of-three method

---

### 🔍 3. Search in Rotated Sorted Array

#### 📌 Strategy

This is a **modified Binary Search**.

#### 📌 Key Insight

Even in a rotated array:
👉 At least **one half is always sorted**

#### 📌 How it works

1. Find mid element
2. Check which half is sorted
3. Decide which side to search

#### 📌 Properties

* ✅ Time Complexity: O(log n)
* ✅ No extra space
* 🔥 Very common interview problem

---

## 🧠 Algorithm Comparison

| Feature | Merge Sort | Quick Sort      | Rotated Search |
| ------- | ---------- | --------------- | -------------- |
| Type    | Sorting    | Sorting         | Searching      |
| Stable  | Yes        | No              | N/A            |
| Space   | O(n)       | O(log n)        | O(1)           |
| Speed   | Consistent | Very fast (avg) | Very fast      |

---

## 🛠️ How to Run

To compile and run any of these files, use the following commands:

```bash
g++ 01_MergeSort.cpp -o output
./output
```

👉 Replace file name as needed:

```bash
g++ 02_QuickSort.cpp -o output
./output
```

```bash
g++ 03_RotatedSortedArray.cpp -o output
./output
```

---

## 🎯 Learning Outcomes

After completing this module, you will:

* Understand Divide & Conquer deeply
* Master Merge Sort and Quick Sort
* Solve rotated array problems efficiently
* Improve problem-solving skills
* Be better prepared for coding interviews

---

## 🚀 Future Scope

You can extend this module by adding:

* Binary Search variations
* Kth smallest/largest problems
* Divide & Conquer on trees
* Advanced recursion problems

---

## 🤝 Contribution

Feel free to:

* Improve code readability
* Add optimized solutions
* Include more problems

---

## ⭐ Final Note

Mastering Divide & Conquer is a **game-changer** in DSA.
Focus on understanding the **logic**, not just the code.

> "Break the problem, solve it smartly, and combine efficiently."

---

🔥 Keep coding. Keep improving.
