// =============================================
//        INHERITANCE IN C++
// =============================================

// Inheritance ek OOP concept hai jisme ek class
// dusri class ke properties aur functions ko inherit karti hai.

// Yahan:
// Animal = Base Class (Parent)
// Dog    = Derived Class (Child)
// =============================================

#include <iostream>
using namespace std;

// ---------------------------------------------
// Base Class (Parent Class)
// ---------------------------------------------
class Animal
{
public:
    // Function of Parent class
    void eat()
    {
        cout << "Animal is eating..." << endl;
    }
};

// ---------------------------------------------
// Derived Class (Child Class)
// Dog class inherits Animal class
// ---------------------------------------------
class Dog : public Animal
{
public:
    // Function of Child class
    void bark()
    {
        cout << "Dog is barking..." << endl;
    }
};

// ---------------------------------------------
// Main Function
// ---------------------------------------------
int main()
{

    // Creating object of Dog class
    Dog d1;

    // Calling inherited function (from Animal class)
    d1.eat();

    // Calling own function (from Dog class)
    d1.bark();

    return 0;
}
