// Question4:  Write  a function that prints the largest of 3 numbers.

#include <iostream>
using namespace std;

int largest3(int a, int b, int c)
{
    int largest;
    if (a > b && a > c)
    {
        largest = a;
    }
    else if (b > a && b > c)
    {
        largest = b;
    }
    else
    {
        largest = c;
    }
    return largest;
}

int main()
{
    int a, b, c;
    cout << "Enter anu three number : ";
    cin >> a >> b >> c;

    cout << "Largest of 3 Number is  :" << largest3(a, b, c) << endl;
    return 0;
}
