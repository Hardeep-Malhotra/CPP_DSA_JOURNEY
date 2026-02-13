// ===========================================
//        MULTILEVEL INHERITANCE IN C++
// ===========================================
//
// Structure:
// Animal  →  Dog  →  Puppy
//
// Puppy inherits Dog
// Dog inherits Animal
// ===========================================

#include <iostream>
using namespace std;

// -------------------------------------------
// Base Class (Level 1)
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
// Derived Class (Level 2)
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
// Derived Class (Level 3)
// -------------------------------------------
class Puppy : public Dog
{
public:
    void weep()
    {
        cout << "Puppy is weeping..." << endl;
    }
};

// -------------------------------------------
// Main Function
// -------------------------------------------
int main()
{

    Puppy p1;

    // Function from Animal class
    p1.eat();

    // Function from Dog class
    p1.bark();

    // Function from Puppy class
    p1.weep();

    return 0;
}
