// Question2: Write a function to calculate the sum of digits of a number

#include <iostream>
using namespace std;

int sumOfDigit(int n)
{
    int sum = 0;

    for (int i = 1; i <= n; i++)
    {
        /* code */
        sum += i;
    }

    return sum;
}

int main()
{
    int n;
    cout << "Enter a number digit :";
    cin >> n;

    cout << "Sum of Digit is : " << sumOfDigit(n) << endl;
}