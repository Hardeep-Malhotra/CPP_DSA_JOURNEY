/*
=========================================================
 Program Title : Deep Copy Demonstration in C++
 Author        : Hardeep Singh
 Description   :
 This program demonstrates Deep Copy.
 In the copy constructor, new memory is allocated
 and the actual value is copied.
 Each object has its own separate memory.
 Destructor is added to prevent memory leak.
=========================================================
*/

#include <iostream>
using namespace std;

class Demo
{

public:
    int *Data; // Pointer to dynamically allocated memory

    // Parameterized Constructor
    Demo(int value)
    {
        Data = new int(value); // Allocate new memory
    }

    // Deep Copy Constructor
    Demo(const Demo &obj)
    {
        Data = new int(*obj.Data); // ✅ New memory + value copy
    }

    // Destructor (to free memory)
    ~Demo()
    {
        delete Data;
    }

    // Display Function
    void show()
    {
        cout << *Data << endl;
    }
};

int main()
{

    Demo d1(10);

    Demo d2 = d1; // Deep copy

    *d2.Data = 40; // Change d2 only
    *d1.Data = 90; // Change d1 only

    cout << "Value from d1: ";
    d1.show();

    cout << "Value from d2: ";
    d2.show();

    return 0;
}
