// ===========================================
//        MULTIPLE INHERITANCE IN C++
// ===========================================
//
// A class inherits from more than one class
// ===========================================

#include <iostream>
using namespace std;

// -------------------------------------------
// First Base Class
// -------------------------------------------
class Father
{
public:
    void skills()
    {
        cout << "Father: Good at Mathematics" << endl;
    }
};

// -------------------------------------------
// Second Base Class
// -------------------------------------------
class Mother
{
public:
    void talent()
    {
        cout << "Mother: Good at Music" << endl;
    }
};

// -------------------------------------------
// Derived Class (inherits both)
// -------------------------------------------
class Child : public Father, public Mother
{
public:
    void hobby()
    {
        cout << "Child: Loves Painting" << endl;
    }
};

// -------------------------------------------
// Main Function
// -------------------------------------------
int main()
{

    Child c1;

    // From Father
    c1.skills();

    // From Mother
    c1.talent();

    // Own function
    c1.hobby();

    return 0;
}
