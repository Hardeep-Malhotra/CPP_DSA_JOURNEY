// ==================================================
// 📘 Program: Function Overloading Inside a Class
// ==================================================

#include <iostream>
using namespace std;

// --------------------------------------------------
// Class Definition
// --------------------------------------------------
class Calculator
{

public:
    // ----------------------------------------------
    // Function 1: Add two integers
    // ----------------------------------------------
    int add(int a, int b)
    {
        return a + b;
    }

    // ----------------------------------------------
    // Function 2: Add three integers
    // (Different number of parameters)
    // ----------------------------------------------
    int add(int a, int b, int c)
    {
        return a + b + c;
    }

    // ----------------------------------------------
    // Function 3: Add two double values
    // (Different data type)
    // ----------------------------------------------
    double add(double a, double b)
    {
        return a + b;
    }
};

// --------------------------------------------------
// Main Function
// --------------------------------------------------
int main()
{

    // Creating object of Calculator class
    Calculator obj;

    // Calling overloaded functions
    cout << "Sum of 10 and 20: " << obj.add(10, 20) << endl;
    cout << "Sum of 5, 10 and 15: " << obj.add(5, 10, 15) << endl;
    cout << "Sum of 5.5 and 4.5: " << obj.add(5.5, 4.5) << endl;

    return 0;
}
