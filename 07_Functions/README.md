# 📘 Functions in C++ 

Functions are one of the **most important concepts in C++ programming**.  
They help in breaking large programs into smaller, manageable, and reusable blocks of code.

---

## 🔹 What is a Function?

A **function** is a block of code that:
- Performs a specific task
- Runs only when it is called
- Can be reused multiple times

### 📌 Definition
> A function is a reusable piece of code that takes input, processes it, and may return an output.

---

## 🔹 Why Do We Need Functions?

Functions help to:
- Avoid code repetition
- Improve code readability
- Make debugging easier
- Divide large programs into smaller parts
- Follow modular programming

---

## 🔹 Basic Syntax of a Function

```cpp
return_type function_name(parameter_list) {
    // function body
}
✅ Example

int add(int a, int b) {
    return a + b;
}
🔹 Types of Functions
Function without parameters

Function with parameters

Function with return value

Function without return value

🔹 Function Without Parameters

void greet() {
    cout << "Hello World";
}
📌 No input, no output.

🔹 Function With Parameters

int square(int n) {
    return n * n;
}
📌 Input is passed through parameters.

🔹 Function Call

int result = square(5);
📌 When a function is called:

Control moves from main() to the function

Function executes

Control returns to main()

🔹 Function Call in Memory (Call Stack)
When a function is called, Call Stack is used.

🔄 Step-by-Step Execution
main() is loaded into memory

Function call occurs

A new stack frame is created

Parameters are copied

Function executes

Return value is sent back

Stack frame is destroyed

📌 This process is called Function Call Stack.

🔹 Forward Declaration
Sometimes, a function is defined after main().
In that case, the compiler must be informed beforehand.

📌 Definition
Forward declaration tells the compiler about the function’s name, return type, and parameters before its actual definition.

🔹 Syntax

return_type function_name(parameters);
✅ Example

#include <iostream>
using namespace std;

int add(int, int);  // forward declaration

int main() {
    cout << add(3, 4);
    return 0;
}

int add(int a, int b) {
    return a + b;
}
🔹 Scope in C++
Scope defines where a variable can be accessed.

🔸 Local Scope
Declared inside a function or block


void test() {
    int x = 10; // local variable
}

🔸 Global Scope
Declared outside all functions

Accessible throughout the program

int x = 100; // global variable

void show() {
    cout << x;
}

🔹 Local vs Global Example

#include <iostream>
using namespace std;

int x = 50;

void test() {
    int x = 10;
    cout << x << endl; // local
}

int main() {
    test();
    cout << x; // global
}
📌 Output
10
50

🔹 Practice Questions (Scope)
What happens when local and global variables have the same name?

Use :: scope resolution operator to access a global variable.

Write a program showing local and global scope difference.

🔹 Function Overloading
📌 Definition
Function overloading allows multiple functions with the same name but different parameters.

✅ Example

int add(int a, int b) {
    return a + b;
}

int add(int a, int b, int c) {
    return a + b + c;
}

double add(double a, double b) {
    return a + b;
}

🔹 Rules of Function Overloading
Function name must be same

Parameters must be different (number or type)

Return type alone cannot differentiate functions ❌

🔹 Function Overriding
📌 Definition
Function overriding occurs when a child class redefines a function of its parent class.

📌 Used in Inheritance (OOP)
📌 Happens at runtime

✅ Example

#include <iostream>
using namespace std;

class Parent {
public:
    void show() {
        cout << "Parent Class";
    }
};

class Child : public Parent {
public:
    void show() {
        cout << "Child Class";
    }
};

int main() {
    Child obj;
    obj.show();
}

🔹 Overloading vs Overriding
Feature	Overloading	Overriding
Class	Same class	Parent–Child
Parameters	Different	Same
Binding	Compile time	Run time
OOP required	No	Yes

🔹 Practice Questions (Functions)
Write a function to check if a number is prime.

Write a function to return factorial of a number.

Demonstrate function overloading with examples.

Write a program showing function call stack behavior.

Write a program without forward declaration and fix the error.

 ✅ Summary
Functions make programs modular and reusable

Forward declaration informs the compiler early

Scope controls variable accessibility

Overloading = same name, different parameters

Overriding = redefining parent function in child class

📌 Strong understanding of functions = strong C++ foundation 💪




**👨‍💻 Author**
Maintained by Hardeep Singh for mastering C++ fundamentals.

🚀 Happy Coding!