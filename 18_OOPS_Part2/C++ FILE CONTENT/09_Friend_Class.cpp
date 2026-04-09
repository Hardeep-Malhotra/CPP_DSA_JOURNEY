// ============================================================
// 📘 Program: Friend Class in C++
// 🎯 Purpose: One class accessing private data of another
// ============================================================

#include <iostream>
using namespace std;

// Forward declaration
class B;

// ------------------------------------------------------------
// Class A
// ------------------------------------------------------------
class A
{

private:
    int secret;

public:
    A()
    {
        secret = 100;
    }

    // Making class B a friend
    // Now all functions of class B can access private members of A
    friend class B;
};

// ------------------------------------------------------------
// Class B
// ------------------------------------------------------------
class B
{

public:
    void showSecret(A obj)
    {

        // Accessing private member of class A
        cout << "Secret value: " << obj.secret << endl;
    }
};

// ------------------------------------------------------------
// Main Function
// ------------------------------------------------------------
int main()
{

    A objA;
    B objB;

    objB.showSecret(objA);

    return 0;
}
