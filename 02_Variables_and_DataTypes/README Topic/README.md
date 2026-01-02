# 📘 Variables and Data Types in C++

This section covers the **most important foundational concepts of C++ programming**.  
Understanding these topics is **mandatory** before moving to **Logic Building, DSA, and Competitive Programming**.

---

## 📌 Topics Covered

- Boilerplate code in C++
- How a C++ program runs
- Variables
- Identifiers
- Data Types
- Namespaces
- Comments
- Input / Output

---

## 🔹 Boilerplate Code in C++

A **boilerplate code** is the basic structure required to run any C++ program.

### Example:
```cpp
#include <iostream>
using namespace std;

int main() {
    cout << "Hello World";
    return 0;
}
Explanation:
#include <iostream> → Enables input/output operations

using namespace std; → Allows direct use of cout, cin

int main() → Program execution starts here

return 0; → Program executed successfully

⚙ How a C++ Program Runs
Preprocessing
Handles #include, #define, macros

Compilation
Converts C++ code into machine-level object code

Linking
Links libraries and object files

Execution
Program runs and gives output

🔹 What is a Variable?
A variable is a named storage location in memory where we store data.

Syntax:

data_type variable_name = value;
Example:

int age = 18;
Breakdown:
int → Data type

age → Variable name

18 → Value stored

🔹 Identifiers in C++
Identifiers are the names given to variables, functions, arrays, etc.

✔ Rules for Identifiers
Can contain letters, digits, underscore

Cannot start with a digit

Case-sensitive

Cannot be a C++ keyword

❌ Invalid Identifiers
2age
my-name
int
✔ Valid Identifiers

age
age2
my_age
🔹 Data Types in C++
Data types define what type of data a variable can store.

### 1️⃣ Primitive Data Types

| Data Type | Description | Example |
|----------|------------|---------|
| int | Integer values | `int x = 10;` |
| float | Decimal (less precision) | `float pi = 3.14;` |
| double | Decimal (high precision) | `double d = 3.14159;` |
| char | Single character | `char ch = 'A';` |
| bool | True / False | `bool isTrue = true;` |



### 2️⃣ Derived Data Types

| Type | Description | Example |
|------|------------|---------|
| Array | Collection of same data type | `int arr[3] = {1,2,3};` |
| Pointer | Stores memory address | `int* p = &x;` |
| Reference | Alias of another variable | `int &ref = x;` |

Example:
int arr[3] = {1, 2, 3};
int* ptr = &arr[0];

### 3️⃣ User-Defined Data Types

| Type | Usage | Example |
|------|-------|---------|
| struct | Group different data types | `struct Student { int id; };` |
| class | Used in Object-Oriented Programming | `class Car { };` |
| enum | Fixed set of constants | `enum Day { Mon, Tue, Wed };` |
Example:

struct Student {
    int id;
    string name;
};

🔹 What is a Namespace?
A namespace is used to group identifiers and avoid name conflicts.

Most Common Namespace:

using namespace std;
Without Namespace:

std::cout << "Hello";
With Namespace:

cout << "Hello";
🔹 Comments in C++
Comments are used to explain code and are ignored by the compiler.

Single-line Comment

// This is a single line comment
Multi-line Comment
/*
This is
a multi-line
comment
*/

🔹 Input / Output in C++
Output using cout
e
cout << "Enter your age:";
Input using cin

int age;
cin >> age;
🏁 Why Learn Variables & Data Types First?
Because they help you:

✔ Understand how memory works
✔ Write efficient programs
✔ Avoid logical and runtime errors
✔ Build strong DSA fundamentals

💡 Strong basics = Strong programming future

🚀 Next Topics to Learn
After this section, move to:

Operators

If-else statements

Loops (for, while, do-while)

Functions

Arrays & Strings

Object-Oriented Programming

Data Structures & Algorithms

⭐ Author
Hardeep Singh
Maintained for learning and mastering C++ Programming Fundamentals.


🙌 Contribute
You can contribute by adding:

Better explanations

Practice problems

Code examples

Beginner-friendly notes

✨ Pull Requests are always welcome!


