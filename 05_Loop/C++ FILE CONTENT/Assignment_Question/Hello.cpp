// ✅ Q1 — Factorial of a Number
#include <iostream>
using namespace std;

int main()
{

    // 🔹 input number
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;

    int fact = 1; // factorial will be stored here

    // 🔹 loop from 1 to n and multiply
    for (int i = 1; i <= n; i++)
    {
        fact = fact * i; // fact = fact × i
    }

    // 🔹 final answer
    cout << "Factorial of " << n << " = " << fact << endl;

    return 0;
}

// ✅ Q2 — Multiplication Table

#include <iostream>
using namespace std;

int main()
{

    int n;
    cout << "Enter a positive integer: ";
    cin >> n;

    // 🔹 table only for positive numbers
    if (n <= 0)
    {
        cout << "Please enter a positive integer.";
        return 1;
    }

    // 🔹 print table using loop
    for (int i = 1; i <= 10; i++)
    {
        cout << n << " * " << i << " = " << n * i << endl;
    }

    return 0;
}

// ✅ Q3 — Armstrong Number

#include <iostream>
using namespace std;

int main()
{

    int n;
    cout << "Enter number : ";
    cin >> n;

    int original = n; // store original number
    int cubeSum = 0;  // to keep sum of cubes

    // 🔹 extract digits one by one
    while (n > 0)
    {
        int lastDigit = n % 10;                       // last digit
        cubeSum += lastDigit * lastDigit * lastDigit; // cube added
        n = n / 10;                                   // remove last digit
    }

    // 🔹 compare result with original number
    if (original == cubeSum)
        cout << original << " is Armstrong.";
    else
        cout << original << " is NOT Armstrong.";

    return 0;
}

// ✅ Q4 — Print All Prime Numbers from 2 to N

#include <iostream>
using namespace std;

int main()
{

    int n;
    cout << "Enter a number : ";
    cin >> n;

    // 🔹 loop through all numbers from 2 to n
    for (int i = 2; i <= n; i++)
    {

        int curr = i;        // current number to check
        bool isPrime = true; // assume prime

        // 🔹 try dividing by 2 to sqrt(i)
        for (int j = 2; j * j <= i; j++)
        {

            if (curr % j == 0)
            {                    // ❗ correct condition
                isPrime = false; // not prime
                break;           // stop checking further
            }
        }

        if (isPrime)
        {
            cout << curr << " "; // print prime number
        }
    }

    return 0;
}

// ✅ Q5 — Fibonacci Series (First N numbers)

#include <iostream>
using namespace std;

int main()
{

    int n = 10; // number of terms

    int first = 0, sec = 1;

    // 🔹 print first two terms
    cout << first << " " << sec << " ";

    // 🔹 loop from 3rd term to n
    for (int i = 2; i < n; i++)
    {

        int third = first + sec; // next term = sum of previous two

        cout << third << " ";

        first = sec; // shift forward
        sec = third;
    }

    cout << "\n";
    return 0;