// =======================================
//        SINGLE INHERITANCE IN C++
// =======================================
//
// Single Inheritance me ek child class
// sirf ek parent class se inherit karti hai.
//
// Example:
// Person  →  Student
// =======================================

#include <iostream>
using namespace std;

// ---------------------------------------
// Parent Class
// ---------------------------------------
class Person
{
public:
    void displayName()
    {
        cout << "Name: Hardeep" << endl;
    }
};

// ---------------------------------------
// Child Class (inherits Person)
// ---------------------------------------
class Student : public Person
{
public:
    void displayCourse()
    {
        cout << "Course: B.Tech CSE" << endl;
    }
};

// ---------------------------------------
// Main Function
// ---------------------------------------
int main()
{

    // Creating object of Student
    Student s1;

    // Calling inherited function (from Person)
    s1.displayName();

    // Calling own function (from Student)
    s1.displayCourse();

    return 0;
}
