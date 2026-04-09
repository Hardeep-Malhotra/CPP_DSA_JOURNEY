
// ===========================================
//        HIERARCHICAL INHERITANCE IN C++
// ===========================================
//
// One base class is inherited by multiple
// derived classes.
// ===========================================

#include <iostream>
using namespace std;

// -------------------------------------------
// Base Class
// -------------------------------------------
class Animal
{
public:
    void eat()
    {
        cout << "Animal is eating..." << endl;
    }
};

// -------------------------------------------
// First Derived Class
// -------------------------------------------
class Dog : public Animal
{
public:
    void bark()
    {
        cout << "Dog is barking..." << endl;
    }
};

// -------------------------------------------
// Second Derived Class
// -------------------------------------------
class Cat : public Animal
{
public:
    void meow()
    {
        cout << "Cat is meowing..." << endl;
    }
};

// -------------------------------------------
// Main Function
// -------------------------------------------
int main()
{

    Dog d1;
    Cat c1;

    // Both can use Animal's function
    d1.eat();
    c1.eat();

    // Their own functions
    d1.bark();
    c1.meow();

    return 0;
}
