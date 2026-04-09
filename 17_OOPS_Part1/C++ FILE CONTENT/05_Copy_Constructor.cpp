/*
====================================================
 Program Title : Copy Constructor Example in C++
 Author        : Hardeep Singh
 Description   :
 This program demonstrates:
 1. Parameterized Constructor
 2. Copy Constructor
 3. Encapsulation using private data members
====================================================
*/

#include <iostream>
#include <string>
using namespace std;

class Car
{

private:
    string name;  // Car Name
    string color; // Car Color

public:
    // Parameterized Constructor
    Car(string name, string color)
    {
        this->name = name;
        this->color = color;
    }

    // Copy Constructor
    Car(Car &original)
    {
        cout << "Copy Constructor is called..." << endl;
        name = original.name;
        color = original.color;
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

    Car c1("BMW", "Grey");

    // Copying object
    Car c2(c1);

    cout << "\nDetails of Copied Object:\n";
    c2.display();

    return 0;
}