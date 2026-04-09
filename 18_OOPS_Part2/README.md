# 📘 Object-Oriented Programming (OOP) in C++ – Part 2

This document explains advanced OOP concepts in C++ including
Polymorphism, Abstraction, Virtual Functions, Static Keyword, and Friend concepts.

---

# 1. Polymorphism

## 🔹 Definition

Polymorphism means "many forms".

In C++, polymorphism allows one function or object to behave differently in different situations.

There are two types:

1. Compile-Time Polymorphism
2. Run-Time Polymorphism

---

# 2. Compile-Time Polymorphism

Also known as **Static Binding** or **Early Binding**.

It is achieved using:
- Function Overloading
- Operator Overloading

## 🔹 Function Overloading Example

```cpp
#include <iostream>
using namespace std;

class Math {
public:
    int add(int a, int b) {
        return a + b;
    }

    double add(double a, double b) {
        return a + b;
    }
};

int main() {
    Math obj;
    cout << obj.add(5, 3) << endl;
    cout << obj.add(2.5, 3.5) << endl;
    return 0;
}
Compiler decides which function to call at compile time.

3. Run-Time Polymorphism
Also known as Dynamic Binding or Late Binding.

Achieved using:

Function Overriding

Virtual Functions

🔹 Example
#include <iostream>
using namespace std;

class Animal {
public:
    virtual void sound() {
        cout << "Animal makes sound" << endl;
    }
};

class Dog : public Animal {
public:
    void sound() override {
        cout << "Dog barks" << endl;
    }
};

int main() {
    Animal* ptr;
    Dog d;
    ptr = &d;
    ptr->sound();
    return 0;
}
Here, function call is decided at runtime.

4. Virtual Function
🔹 Definition
A virtual function is a member function declared using the virtual keyword.

It ensures that the derived class function is called, not the base class function.

class Base {
public:
    virtual void show() {
        cout << "Base class show function" << endl;
    }
};
Why needed?
Without virtual, base class function gets called even if pointer refers to derived object.

5. Abstraction
🔹 Definition
Abstraction means hiding implementation details and showing only essential information.

In C++, abstraction is achieved using:

Classes

Access Specifiers

Abstract Classes

Example:

class Car {
public:
    void start() {
        cout << "Car started" << endl;
    }
};
User only calls start() without knowing internal logic.

6. Pure Virtual Function
A pure virtual function is declared using = 0.

It makes the class abstract.

class Shape {
public:
    virtual void draw() = 0;   // Pure Virtual Function
};
Class containing at least one pure virtual function is called an Abstract Class

Objects of abstract class cannot be created

7. Static Keyword
The static keyword has different meanings in C++.

🔹 Static Variable (Inside Class)
Shared among all objects.

class Student {
public:
    static int count;

    Student() {
        count++;
    }
};

int Student::count = 0;
All objects share the same count.

8. Static Object
A static object:

Is created once

Exists until program ends

Destructor is called at program termination

class Demo {
public:
    Demo() {
        cout << "Constructor called" << endl;
    }
    ~Demo() {
        cout << "Destructor called" << endl;
    }
};

int main() {
    static Demo obj;
    return 0;
}

9. Friend Class
A friend class can access private and protected members of another class.

#include <iostream>
using namespace std;

class A {
private:
    int x = 10;

    friend class B;
};

class B {
public:
    void show(A obj) {
        cout << obj.x << endl;
    }
};
Class B can access private member x of class A.

10. Friend Function
A friend function is a function that can access private members of a class.

#include <iostream>
using namespace std;

class Demo {
private:
    int data = 100;

    friend void display(Demo obj);
};

void display(Demo obj) {
    cout << obj.data << endl;
}

int main() {
    Demo d;
    display(d);
    return 0;
}
Friend functions are declared inside the class using friend keyword.