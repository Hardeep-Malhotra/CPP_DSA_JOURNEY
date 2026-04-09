/*
===========================================
 Program: Encapsulation Example
 Example: Bank Account System
===========================================
*/

#include <iostream>
using namespace std;

class BankAccount
{

private:
    double balance; // Hidden data (Encapsulated)

public:
    // Setter (Deposit money)
    void deposit(double amount)
    {
        if (amount > 0)
        {
            balance += amount;
            cout << "Amount Deposited Successfully!" << endl;
        }
    }

    // Withdraw method
    void withdraw(double amount)
    {
        if (amount <= balance)
        {
            balance -= amount;
            cout << "Amount Withdrawn Successfully!" << endl;
        }
        else
        {
            cout << "Insufficient Balance!" << endl;
        }
    }

    // Getter (View balance)
    double getBalance()
    {
        return balance;
    }
};

int main()
{

    BankAccount acc;

    acc.deposit(5000);
    acc.withdraw(2000);

    cout << "Current Balance: " << acc.getBalance() << endl;

    return 0;
}
