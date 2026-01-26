# Sorting Algorithms in C++

This repository contains implementations and explanations of fundamental sorting algorithms in C++.  
The goal is to understand sorting logic, algorithm behavior, and time-space complexity for DSA and interviews.

---

## 📌 Algorithms Covered

1. Selection Sort
2. Insertion Sort
3. Counting Sort
4. Merge Sort (Conceptual)
5. Inbuilt Sorting (C++ STL `sort()`)

---

# 1️⃣ Selection Sort

## 🔹 Core Logic

Repeatedly find the minimum element from the unsorted part and place it at the correct position in the sorted part.

## 🔹 Algorithm Steps

1. Assume first element is minimum
2. Find actual minimum from remaining array
3. Swap minimum with first element
4. Repeat for next position

## 🔹 Pseudocode

for i = 0 to n-2
minIndex = i
for j = i+1 to n-1
if arr[j] < arr[minIndex]
minIndex = j
swap(arr[i], arr[minIndex])

## 🔹 C++ Logic Snippet

```cpp
for(int i=0; i<n-1; i++){
    int minIndex = i;
    for(int j=i+1; j<n; j++){
        if(arr[j] < arr[minIndex])
            minIndex = j;
    }
    swap(arr[i], arr[minIndex]);
}
🔹 Time Complexity
O(n²)

🔹 Space Complexity
O(1)
---
2️⃣ Insertion Sort
🔹 Core Logic
Pick an element from the unsorted part and insert it into its correct position in the sorted part.

🔹 Algorithm Steps
Left part is always sorted

Pick curr from right

Shift larger elements to the right

Insert curr at correct position

🔹 Pseudocode
for i = 1 to n-1
    curr = arr[i]
    prev = i-1
    while prev >=0 and arr[prev] > curr
        arr[prev+1] = arr[prev]
        prev--
    arr[prev+1] = curr
🔹 Time Complexity
Best: O(n)
Worst: O(n²)

🔹 Space Complexity
O(1)
---
3️⃣ Counting Sort
🔹 Core Logic
Does not compare elements.
Counts frequency of each value and rebuilds sorted array.

🔹 Algorithm Steps
Find maximum value

Create count array

Store frequency

Rebuild sorted array

🔹 Pseudocode
max = findMax(arr)
count[max+1] = {0}

for each element x in arr
    count[x]++

index = 0
for i = 0 to max
    while count[i] > 0
        arr[index] = i
        index++
        count[i]--
🔹 Time Complexity
O(n + k)

🔹 Space Complexity
O(k)
---
4️⃣ Merge Sort (Conceptual)
🔹 Core Logic
Divide array into halves → sort recursively → merge sorted halves.

🔹 Pseudocode
mergeSort(arr):
    if size <= 1 return
    divide array into left & right
    mergeSort(left)
    mergeSort(right)
    merge(left, right)
🔹 Time Complexity
O(n log n)

🔹 Space Complexity
O(n)
---
5️⃣ Inbuilt Sorting (C++ STL)
🔹 Core Logic
C++ provides std::sort() which internally uses Introsort
(Quick Sort + Heap Sort + Insertion Sort)

🔹 Syntax
#include <algorithm>

sort(arr, arr + n);               // For normal array
sort(v.begin(), v.end());         // For vector
---
🔹 Time Complexity
O(n log n)

🔹 Space Complexity
O(log n)

🔹 Why use STL sort?
Fastest practical sorting

Used in competitive programming

No need to implement manually

🎯 Learning Outcome
✔️ Understood comparison vs non-comparison sorting
✔️ Learned sorting logic step-by-step
✔️ Analyzed complexity
✔️ Ready for DSA interviews

---
🚀 Author
Hardeep Singh
BCA Student | DSA with C++ Learner | Aspiring Software Engineer

⭐ If you find this helpful
Give the repo a star 🙂
```
