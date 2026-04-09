// virtual function

#include <iostream>
using namespace std;

// ---------------- Parent Class ----------------
class Animal
{
public:
    // Virtual function
    virtual void sound()
    {
        cout << "Animal makes a sound" << endl;
    }
};

// ---------------- Child Class ----------------
class Dog : public Animal
{
public:
    // Override parent function
    void sound()
    {
        cout << "Dog barks" << endl;
    }
};

int main()
{

    Animal *ptr; // Parent class pointer
    Dog obj;     // Child class object

    ptr = &obj; // Parent pointer → Child object

    ptr->sound(); // Runtime pe decide hoga

    return 0;
}
