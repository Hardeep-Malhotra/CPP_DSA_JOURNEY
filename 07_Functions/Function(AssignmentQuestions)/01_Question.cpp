// Question1: Write a function to check if a number is a palindrome in C++

#include <iostream>
using namespace std;

bool isPalindrome(int n)
{
    int temp = n;
    int rev = 0;

    while (n > 0)
    {
        int lastDigit = n % 10;
        rev = rev * 10 + lastDigit;
        n = n / 10;
    }

    if (temp == rev)
        return true;
    else
        return false;
}

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if (isPalindrome(n))
    {
        cout << n << " is a palindrome number.";
    }
    else
    {
        cout << n << " is not a palindrome number.";
    }

    return 0;
}