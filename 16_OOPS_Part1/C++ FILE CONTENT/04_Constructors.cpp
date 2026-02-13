
/*
==================================================
 Program Title : Constructor Example in C++
 Author        : Hardeep Singh
 Description   :
 This program demonstrates:
 1. Default Constructor
 2. Parameterized Constructor
 3. Use of 'this' pointer
==================================================
*/

#include <iostream>
#include <string>
using namespace std;

// Class Definition
class Car
{

private:
    string name;  // Car name
    string color; // Car color

public:
    // Default Constructor
    Car()
    {
        cout << "Constructor without parameter called..." << endl;
    }

    // Parameterized Constructor
    Car(string name, string color)
    {
        this->name = name; // Refers to current object
        this->color = color;
        cout << "Parameterized Constructor called..." << endl;
    }

    // Display Function
    void display()
    {
        cout << "Car Name: " << name << endl;
        cout << "Car Color: " << color << endl;
    }
};

int main()
{

    // Object 1 → Default Constructor
    Car c1;

    cout << endl;

    // Object 2 → Parameterized Constructor
    Car c2("BMW", "Blue");

    // Displaying details of c2
    c2.display();

    return 0;
}
