/*
=========================================================
 Program Title : Shallow Copy Demonstration in C++
 Author        : Hardeep Singh
 Description   :
 This program demonstrates the concept of Shallow Copy.
 The class contains a pointer to dynamically allocated
 memory. In the copy constructor, only the address is
 copied (not the actual data), which leads to both
 objects sharing the same memory location.
=========================================================
*/

#include <iostream>
using namespace std;

class Demo
{

public:
    int *Data; // Pointer to dynamically allocated integer

    // Parameterized Constructor
    Demo(int value)
    {
        Data = new int(value); // Allocate memory on heap
    }

    // Copy Constructor (Shallow Copy)
    Demo(const Demo &obj)
    {
        Data = obj.Data; // ❌ Only address copied (same memory)
    }

    // Display Function
    void show()
    {
        cout << *Data << endl;
    }
};

int main()
{

    // Creating first object
    Demo d1(10);

    // Creating second object using copy constructor
    Demo d2 = d1;

    // Modifying value using d2
    *d2.Data = 50;

    // Modifying value using d1
    *d1.Data = 90;

    // Displaying values
    cout << "Value from d1: ";
    d1.show();

    cout << "Value from d2: ";
    d2.show();

    return 0;
}