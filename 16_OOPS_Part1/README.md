# 📘 Object-Oriented Programming (OOP) in C++

This repository contains a complete and in-depth explanation of Object-Oriented Programming concepts in C++.

---

# 1. Object-Oriented Programming (OOP)

## 🔹 What is OOP?

Object-Oriented Programming (OOP) is a programming paradigm based on objects.  
Objects contain:
- Data (Variables)
- Functions (Methods)

OOP helps in writing:
- Modular Code
- Reusable Code
- Secure Code
- Maintainable Code

## 🔹 Four Pillars of OOP

1. Encapsulation  
2. Abstraction  
3. Inheritance  
4. Polymorphism  

---

# 2. Classes & Objects

## 🔹 Class

A class is a blueprint used to create objects.

```cpp
class Student {
public:
    string name;
    int age;

    void display() {
        cout << name << " " << age << endl;
    }
};
🔹 Object
An object is an instance of a class.

Student s1;
s1.name = "Hardeep";
s1.age = 20;
s1.display();


3. Access Modifiers
Access modifiers control the accessibility of class members.

Modifier	Inside Class	Outside Class	Derived Class
public	Yes	Yes	Yes
private	Yes	No	No
protected	Yes	No	Yes
4. Getter & Setter
Used to protect private data and provide controlled access.

class Student {
private:
    int age;

public:
    void setAge(int a) {
        age = a;
    }

    int getAge() {
        return age;
    }
};

5. Encapsulation
Encapsulation means wrapping data and functions into a single unit (class).

Achieved using:

Private variables

Public getter and setter methods

Benefits:

Data security

Controlled access

Better code structure

6. Constructor
A constructor is a special member function:

Same name as class

Automatically called when object is created

class Student {
public:
    Student() {
        cout << "Constructor Called" << endl;
    }
};
Types of Constructors
Default Constructor

Parameterized Constructor

Copy Constructor

7. this Pointer
this pointer refers to the current object.

class Student {
private:
    int age;

public:
    void setAge(int age) {
        this->age = age;
    }
};

8. Copy Constructor
Used to create a new object as a copy of an existing object.

class Student {
public:
    int age;

    Student(int a) {
        age = a;
    }

    Student(const Student &obj) {
        age = obj.age;
    }
};

9. Shallow Copy & Deep Copy
🔹 Shallow Copy
Copies values directly

Shares same memory if pointer exists

Can cause memory issues

🔹 Deep Copy
Allocates new memory

Copies actual data

Safe for dynamic memory

class Demo {
public:
    int *data;

    Demo(int value) {
        data = new int(value);
    }

    Demo(const Demo &obj) {
        data = new int(*obj.data);  // Deep Copy
    }
};

10. Destructor
Destructor is a special function:

Same name as class

Prefixed with ~

Automatically called when object is destroyed

class Student {
public:
    ~Student() {
        cout << "Destructor Called" << endl;
    }
};
Used to:

Free memory

Release resources

Close files

11. Inheritance
Inheritance allows one class to acquire properties of another class.

class Animal {
public:
    void eat() {
        cout << "Eating..." << endl;
    }
};

class Dog : public Animal {
public:
    void bark() {
        cout << "Barking..." << endl;
    }
};

12. Modes of Inheritance
Mode	Public Member in Base	Protected Member in Base
public	public	protected
protected	protected	protected
private	private	private

13. Single Inheritance
One derived class inherits from one base class.

class Dog : public Animal {};
14. Multiple Inheritance
One derived class inherits from multiple base classes.

class Father {};
class Mother {};

class Child : public Father, public Mother {};

15. Multilevel Inheritance
A class derives from another derived class.

class A {};
class B : public A {};
class C : public B {};

16. Hierarchical Inheritance
Multiple classes inherit from one base class.

class Animal {};
class Dog : public Animal {};
class Cat : public Animal {};
17. Hybrid Inheritance
Combination of two or more types of inheritance.

Diamond Problem
      A
     / \
    B   C
     \ /
      D
Solution: Use Virtual Inheritance

class A {};
class B : virtual public A {};
class C : virtual public A {};
class D : public B, public C {};



🚀 Author

Hardeep Singh
BCA Student | DSA with C++ Learner | Aspiring Software Engineer

⭐ If you find this helpful
Give the repo a star 🙂
```

