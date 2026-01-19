# 📘 ARRAY Part—1

---

## 1️⃣ What is an Array?

### 📌 Definition (Professional)

An Array is a linear data structure that stores multiple elements of the same data type in contiguous memory locations, allowing direct access using index.

### 🔍 Memory Representation

int arr[5] = {10, 20, 30, 40, 50};

Memory:
| 10 | 20 | 30 | 40 | 50 |
↑
arr (base address)

arr stores address of first element  
Each element occupies memory equal to sizeof(datatype)  
Next element is stored immediately after previous

### 📌 Indexing

Index starts from 0  
Last index = size - 1

arr[i] internally works as:

\*(arr + i)

### ✅ Advantages

✔ Fast access using index → O(1)  
✔ Easy traversal using loops  
✔ Efficient for storing fixed-size data

### ❌ Limitations

❌ Fixed size (cannot grow/shrink)  
❌ Wastage of memory possible  
❌ Insertion/Deletion in middle → O(n)

---

## 2️⃣ Creating an Array

### 📌 Syntax (C/C++)

datatype arrayName[size];

### Example

int marks[5];
float price[10];
char name[20];

### 🔍 Important Notes

Size must be constant  
Memory allocated at compile time (static array)  
Values are garbage if not initialized

### Initialization

int a[5] = {1,2,3,4,5};
int b[] = {10,20,30}; // size = 3

---

## 3️⃣ Array Input & Output

### 📌 Input Logic

for(int i=0; i<n; i++){
cin >> arr[i];
}

### 📌 Output Logic

for(int i=0; i<n; i++){
cout << arr[i] << " ";
}

### 🔍 Traversal

Visiting each element once  
Time Complexity → O(n)

---

## 4️⃣ Find Largest Element in Array

### 📌 Problem Statement

Given an array, find the maximum element.

### 🧠 Algorithm

Assume arr[0] as maximum  
Traverse from index 1 to n-1  
Compare each element  
Update max when bigger found

### Code

int max = arr[0];

for(int i=1; i<n; i++){
if(arr[i] > max){
max = arr[i];
}
}

### ⏱ Complexity

Time → O(n)  
Space → O(1)

---

## 5️⃣ Arrays are Passed by Reference

### 📌 Explanation

When an array is passed to a function:

Base address is passed  
No copy of array is created

### Example

void update(int arr[]){
arr[0] = 100;
}

✔ Original array changes  
✔ Efficient (no extra memory)

### 📌 Reason

Array name itself is a pointer to first element.

---

## 6️⃣ Linear Search

### 📌 Definition

Searches element sequentially from start to end.

### Algorithm

Start from index 0  
Compare element with key  
If found → return index  
Else → not found

### Code

for(int i=0; i<n; i++){
if(arr[i] == key)
return i;
}
return -1;

### ⏱ Complexity

| Case    | Time |
| ------- | ---- |
| Best    | O(1) |
| Worst   | O(n) |
| Average | O(n) |

### 📌 When to Use

✔ Small arrays  
✔ Unsorted data

---

## 7️⃣ Reverse an Array

### 📌 Meaning

Change order of elements from last to first.

Original: `5 4 3 9 2`  
Reversed: `2 9 3 4 5`

---

### 🔹 Method 1: Using Extra Space

int temp[n];
for(int i=0; i<n; i++){
temp[i] = arr[n-i-1];
}

✔ Easy  
❌ Extra memory used

---

### 🔹 Method 2: Without Extra Space (Best)

Two Pointer Technique

int start = 0, end = n-1;

while(start < end){
swap(arr[start], arr[end]);
start++;
end--;
}

### ⏱ Complexity

Time → O(n)  
Space → O(1)

---

## 8️⃣ Binary Search

### 📌 Definition

Efficient search technique for sorted arrays.

### 🧠 Logic

Divide array into halves  
Reduce search space by half each time

### Code

int start = 0, end = n-1;

while(start <= end){
int mid = start + (end - start)/2;

if(arr[mid] == key)
return mid;
else if(arr[mid] < key)
start = mid + 1;
else
end = mid - 1;
}

### ⏱ Complexity

Time → O(log n)  
Space → O(1)

### ⚠ Important

❌ Does NOT work on unsorted array

---

## 9️⃣ Array & Pointer Relationship

### 📌 Concept

Array name is a constant pointer.

arr == &arr[0]
arr[i] == \*(arr + i)

---

# 🔷 Pointer Arithmetic (In-Depth)

---

## 9.1 Pointer Increment / Decrement

int \*ptr = arr;
ptr++; // moves by sizeof(int)

---

## 9.2 Pointer + Constant

ptr + 2 → jumps 2 elements ahead

### 📌 Formula

Address = base + k × sizeof(type)

---

## 9.3 Pointer – Pointer

✔ Allowed  
✔ Same array only

p2 - p1 → number of elements

---

## 9.4 Pointer Comparison

✔ Valid only within same array  
✔ Used in traversal & loops

---

## 📊 Time Complexity Summary

| Operation       | Complexity |
| --------------- | ---------- |
| Traversal       | O(n)       |
| Largest Element | O(n)       |
| Linear Search   | O(n)       |
| Binary Search   | O(log n)   |
| Reverse Array   | O(n)       |

---

## 🎯 Final Professional Summary

✔ Array is a linear, index-based structure  
✔ Provides fast access but fixed size  
✔ Binary Search is fastest but needs sorting  
✔ Pointer arithmetic makes arrays powerful  
✔ Core foundation for DSA, STL, memory management
---

**👨‍💻 Author**
Maintained by Hardeep Singh for mastering C++ fundamentals.

🚀 Happy Coding!

---
