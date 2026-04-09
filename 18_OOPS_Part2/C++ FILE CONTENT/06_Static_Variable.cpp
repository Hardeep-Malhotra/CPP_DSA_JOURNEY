// ============================================================
// 📘 Program: Static Variable in C++
// 🎯 Purpose: Count how many objects of a class are created
// ============================================================

#include <iostream>
using namespace std;

// ------------------------------------------------------------
// Class Definition
// ------------------------------------------------------------
class Student
{

public:
    // Static variable declaration
    // This variable belongs to the class, NOT to individual objects
    // Only ONE copy of this variable exists in memory
    static int count;

    // Constructor
    // Every time an object is created, constructor runs
    Student()
    {
        count++; // Increase count whenever object is created
        cout << "Constructor Called. Current Count = " << count << endl;
    }
};

// ------------------------------------------------------------
// Static variable must be defined outside the class
// Memory allocation happens here
// ------------------------------------------------------------
int Student::count = 0;

// ------------------------------------------------------------
// Main Function
// ------------------------------------------------------------
int main()
{

    // Creating objects
    Student s1; // count = 1
    Student s2; // count = 2
    Student s3; // count = 3

    // Accessing static variable using class name
    // Because static variable belongs to class
    cout << "\nTotal Objects Created: " << Student::count << endl;

    return 0;
}
