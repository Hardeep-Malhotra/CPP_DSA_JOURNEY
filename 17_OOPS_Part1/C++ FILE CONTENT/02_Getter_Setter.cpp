/*
====================================================
 Program Title : Getter and Setter in C++
 Author        : Hardeep Singh
 Description   :
 This program demonstrates the concept of
 Encapsulation using Getter and Setter functions.
 Private data members are accessed using
 public member functions.
====================================================
*/

#include <iostream>
#include <string>
using namespace std;

// Class Definition
class Student
{

private:
    string name; // Private data member for student name
    float cgpa;  // Private data member for student CGPA

public:
    // Setter Function to set Name
    void setName(string nameValue)
    {
        name = nameValue;
    }

    // Setter Function to set CGPA
    void setCgpa(float cgpaValue)
    {
        cgpa = cgpaValue;
    }

    // Getter Function to return Name
    string getName()
    {
        return name;
    }

    // Getter Function to return CGPA
    float getCgpa()
    {
        return cgpa;
    }

    // Function to calculate and display Percentage
    void getPercentage()
    {
        cout << "Percentage: " << (cgpa * 10) << "%" << endl;
    }
};

// Main Function
int main()
{

    // Creating object of Student class
    Student s1;

    // Setting values using setter functions
    s1.setName("Hardeep");
    s1.setCgpa(8.67);

    // Getting values using getter functions
    cout << "Student Name: " << s1.getName() << endl;
    cout << "CGPA: " << s1.getCgpa() << endl;

    // Displaying Percentage
    s1.getPercentage();

    return 0;
}