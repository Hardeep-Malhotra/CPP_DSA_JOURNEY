// Pure Virtual Function

#include <iostream>
using namespace std;

// --------------------------------------------------
// Abstract Class
// --------------------------------------------------
class Shape
{

public:
    // Pure Virtual Function
    // No body here
    // Child class MUST implement this
    virtual void area() = 0;
};

// --------------------------------------------------
// Child Class 1
// --------------------------------------------------
class Circle : public Shape
{

public:
    void area()
    {
        cout << "Area of Circle = 3.14 * r * r" << endl;
    }
};

// --------------------------------------------------
// Child Class 2
// --------------------------------------------------
class Rectangle : public Shape
{

public:
    void area()
    {
        cout << "Area of Rectangle = length * width" << endl;
    }
};

// --------------------------------------------------
// Main Function
// --------------------------------------------------
int main()
{

    Circle c1;
    c1.area();

    Rectangle r1;
    r1.area();

    return 0;
}