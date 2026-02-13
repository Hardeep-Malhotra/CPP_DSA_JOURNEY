/*
==============================================
 Program Title: Convert CGPA to Percentage
 Author: Hardeep Singh
 Description:
 This program demonstrates the use of a class
 in C++. It converts CGPA into Percentage
 using a member function.
==============================================
*/

#include <iostream>
using namespace std;

// Class Definition
class Student
{
private:
    string name; // Student name
    float cgpa;  // Student CGPA

public:
    // Member Function to Calculate Percentage
    void getPercentage(string n, float c)
    {
        name = n;
        cgpa = c;

        cout << "Student Name: " << name << endl;
        cout << "CGPA: " << cgpa << endl;
        cout << "Percentage: " << (cgpa * 10) << "%" << endl;
    }
};

int main()
{

    // Creating object of Student class
    Student s1;

    // Calling member function
    s1.getPercentage("Hardeep", 8.83);

    return 0;
}
