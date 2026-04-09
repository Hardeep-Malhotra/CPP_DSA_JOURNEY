// ============================================================
// 📘 Program: Static Object in C++
// 🎯 Purpose: Understand lifetime of static object
// ============================================================

#include <iostream>
using namespace std;

// ------------------------------------------------------------
// Class Definition
// ------------------------------------------------------------
class Demo
{

public:
    // Constructor
    Demo()
    {
        cout << "Constructor Called" << endl;
    }

    // Destructor
    ~Demo()
    {
        cout << "Destructor Called" << endl;
    }
};

// ------------------------------------------------------------
// Function to demonstrate static object behavior
// ------------------------------------------------------------
void test()
{

    // Static object
    // This object is created ONLY ONCE
    // Even if function is called multiple times
    static Demo obj;

    cout << "Inside Function" << endl;
}

// ------------------------------------------------------------
// Main Function
// ------------------------------------------------------------
int main()
{

    cout << "First Call\n";
    test();

    cout << "\nSecond Call\n";
    test();

    cout << "\nThird Call\n";
    test();

    return 0;
}
