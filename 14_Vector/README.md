# 📘 C++ Memory & STL Complete Guide

This repository/document covers important C++ concepts related to memory management, dynamic arrays, STL, and vectors with clear explanations and examples.

## 📌 1️⃣ Dynamic Array in C++

🔹 What is a Dynamic Array?

A Dynamic Array is an array whose size is decided at runtime (during program execution), not at compile time.

Unlike static arrays, dynamic arrays are stored in Heap Memory.

🔹 Why Do We Need Dynamic Arrays?

Static arrays require fixed size:

int arr[10]; // Size fixed at compile time

But sometimes:

We don’t know the size in advance.

We want memory based on user input.

We want better memory utilization.

🔹 How to Create a Dynamic Array?

Using new keyword:

#include <iostream>
using namespace std;

int main() {
int n;
cout << "Enter size: ";
cin >> n;

    int* arr = new int[n];   // Dynamic array

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }

    delete[] arr;  // Free memory

}

## 📌 2️⃣ Dynamic Memory Allocation

🔹 What is Dynamic Memory Allocation?

Dynamic Memory Allocation means allocating memory during runtime using:

new

delete

Memory is allocated in Heap Memory.

🔹 Syntax
Allocate Memory
int\* ptr = new int;

Deallocate Memory
delete ptr;

🔹 Example
int* p = new int(10);
cout << *p;
delete p;

## 📌 3️⃣ Static vs Dynamic Memory Allocation

Feature Static Memory Dynamic Memory
Allocation Time Compile time Runtime
Memory Area Stack Heap
Size Fixed Flexible
Speed Faster Slightly slower
Control Automatic Manual (need delete)
🔹 Static Example
int arr[5];

🔹 Dynamic Example
int\* arr = new int[n];

📌 4️⃣ Memory Leak
🔹 What is Memory Leak?

A Memory Leak happens when:

Memory is allocated using new

But not released using delete

That memory remains occupied and cannot be reused.

🔹 Example of Memory Leak
int\* ptr = new int(5);
// Forgot delete ptr;

If this happens repeatedly, program memory increases unnecessarily.

🔹 How to Avoid Memory Leak?

Always use:

delete ptr;
delete[] arr;

OR use STL containers like vector (recommended).

## 📌 5️⃣ 2D Dynamic Arrays

🔹 Method 1: Using Double Pointer
int rows = 3, cols = 4;

int\*_ arr = new int_[rows];

for(int i = 0; i < rows; i++){
arr[i] = new int[cols];
}

// Deallocate
for(int i = 0; i < rows; i++){
delete[] arr[i];
}
delete[] arr;

🔹 Method 2: Single Block Allocation (Better)
int* arr = new int[rows * cols];

arr[i * cols + j] = value;

## 📌 6️⃣ What is STL?

🔹 STL = Standard Template Library

STL is a powerful C++ library that provides:

Containers

Algorithms

Iterators

🔹 Main Components of STL
1️⃣ Containers

vector

list

deque

set

map

unordered_map

stack

queue

2️⃣ Algorithms

sort()

binary_search()

count()

find()

reverse()

3️⃣ Iterators

Used to traverse containers.

## 📌 7️⃣ Vector Introduction

🔹 What is Vector?

A vector is a dynamic array provided by STL.

Automatically resizes

No manual delete required

Stored in contiguous memory

🔹 Basic Example
#include <vector>
using namespace std;

vector<int> v;

v.push_back(10);
v.push_back(20);

cout << v[0];

🔹 Important Functions
Function Purpose
push_back() Add element
pop_back() Remove last
size() Get size
capacity() Get capacity
clear() Remove all
empty() Check empty

## 📌 8️⃣ Vector Implementation in Memory

🔹 How Vector Works Internally?

Vector maintains:

Pointer to data

Size

Capacity

🔹 When Capacity is Full?

If vector is full and we push a new element:

Capacity increases (usually doubles)

New memory allocated

Old elements copied

Old memory deleted

Example:

Initial Capacity = 2
After push_back(3rd element)
Capacity becomes 4

Vector insertion is amortized O(1).

## 📌 9️⃣ Pair Sum Problem

🔹 Problem

Find two numbers in array whose sum equals target.

🔹 Brute Force (O(n²))
for(int i = 0; i < n; i++){
for(int j = i+1; j < n; j++){
if(arr[i] + arr[j] == target){
cout << i << " " << j;
}
}
}

🔹 Optimized (Two Pointer) – O(n)
#include <algorithm>

sort(arr, arr+n);

int left = 0, right = n-1;

while(left < right){
int sum = arr[left] + arr[right];

    if(sum == target){
        cout << arr[left] << " " << arr[right];
        break;
    }
    else if(sum < target)
        left++;
    else
        right--;

}

## 📌 🔟 2D Vector

🔹 What is 2D Vector?

A vector of vectors:

vector<vector<int>> matrix;

🔹 Initialization
vector<vector<int>> matrix(3, vector<int>(4, 0));

3 rows, 4 columns, all values initialized to 0.

🔹 Access Elements
matrix[i][j] = 5;

🔹 Dynamic 2D Vector
int rows, cols;
cin >> rows >> cols;

vector<vector<int>> matrix(rows, vector<int>(cols));

for(int i = 0; i < rows; i++){
for(int j = 0; j < cols; j++){
cin >> matrix[i][j];
}
}

🚀 Why Use Vector Instead of Dynamic Arrays?

✔ Automatic memory management
✔ No memory leak
✔ Easy resizing
✔ STL algorithm compatibility
✔ Cleaner code

🚀 Author

Hardeep Singh
BCA Student | DSA with C++ Learner | Aspiring Software Engineer

⭐ If you find this helpful
Give the repo a star 🙂
```

