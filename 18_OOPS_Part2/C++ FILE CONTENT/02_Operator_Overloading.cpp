// ==================================================
// 📘 Program: Operator Overloading in C++
// Example: Adding Two Complex Numbers
// ==================================================

#include <iostream>
using namespace std;

// --------------------------------------------------
// Class Definition
// --------------------------------------------------
class Complex
{

private:
    int real; // Stores real part of complex number
    int imag; // Stores imaginary part of complex number

public:
    // --------------------------------------------------
    // Constructor
    // Purpose: Initialize real and imaginary values
    // When object is created, this constructor runs
    // Example: Complex c1(3,4);
    // real = 3 , imag = 4
    // --------------------------------------------------
    Complex(int r, int i)
    {
        real = r;
        imag = i;
    }

    // --------------------------------------------------
    // Overloading + Operator
    // Syntax: return_type operator+(parameter)
    //
    // This function will run when we write:
    // c1 + c2
    //
    // Internally compiler converts:
    // c1 + c2  --->  c1.operator+(c2)
    //
    // "real" and "imag" refer to calling object (c1)
    // "obj.real" and "obj.imag" refer to c2
    // --------------------------------------------------
    Complex operator+(Complex obj)
    {

        // Creating a temporary object to store result
        // Initially setting it to (0,0)
        Complex temp(0, 0);

        // Adding real parts:
        // c1.real + c2.real
        temp.real = real + obj.real;

        // Adding imaginary parts:
        // c1.imag + c2.imag
        temp.imag = imag + obj.imag;

        // Returning the new object
        return temp;
    }

    // --------------------------------------------------
    // Display Function
    // Prints complex number in form: a + bi
    // --------------------------------------------------
    void display()
    {
        cout << real << " + " << imag << "i" << endl;
    }
};

// --------------------------------------------------
// Main Function
// --------------------------------------------------
int main()
{

    // Creating first complex number
    // real = 3 , imag = 4
    Complex c1(3, 4);

    // Creating second complex number
    // real = 5 , imag = 6
    Complex c2(5, 6);

    // Using overloaded + operator
    // This line calls:
    // c1.operator+(c2)
    Complex c3 = c1 + c2;

    cout << "Result: ";

    // Displaying result
    // Expected: (3+5) + (4+6)i = 8 + 10i
    c3.display();

    return 0;
}