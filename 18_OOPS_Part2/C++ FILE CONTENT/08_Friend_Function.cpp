/*
===========================================================
 📘 Program Title : Friend Function Example in C++
 👨‍💻 Author        : Hardeep Singh
 🎯 Concept       : Friend Function in Object-Oriented Programming

 -----------------------------------------------------------
 📌 Description:

 This program demonstrates the concept of a Friend Function
 in C++.

 A friend function:
 ✔ Is NOT a member of the class
 ✔ Can access private and protected members of a class
 ✔ Is declared inside the class using the 'friend' keyword

 In this example:
 - Class 'BankAccount' has a private data member 'balance'
 - A friend function 'displayBalance()' is used to access it
===========================================================
*/

#include <iostream>
using namespace std;

// ----------------------------------------------------------
// Class Definition
// ----------------------------------------------------------
class BankAccount
{

private:
    double balance; // Private data member (Hidden data)

public:
    // Constructor to initialize balance
    BankAccount(double b)
    {
        balance = b;
    }

    // Friend function declaration
    // This function is not a member of this class
    // But it can access private members
    friend void displayBalance(BankAccount obj);
};

// ----------------------------------------------------------
// Friend Function Definition
// ----------------------------------------------------------
void displayBalance(BankAccount obj)
{

    // Accessing private data member directly
    cout << "Account Balance: ₹" << obj.balance << endl;
}

// ----------------------------------------------------------
// Main Function
// ----------------------------------------------------------
int main()
{

    // Creating object of BankAccount
    BankAccount acc1(5000.75);

    // Calling friend function
    displayBalance(acc1);

    return 0;
}
