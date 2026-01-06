// 🦋 9) Butterfly Pattern

// Output:

// *      *
// **    **
// ***  ***
// ********
// ***  ***
// **    **
// *      *

#include <iostream>
using namespace std;

int main()
{
    int n = 4;

    // upper part
    for (int i = 1; i <= n; i++)
    {

        for (int j = 1; j <= i; j++)
            cout << "*";

        for (int s = 1; s <= 2 * (n - i); s++)
            cout << " ";

        for (int j = 1; j <= i; j++)
            cout << "*";

        cout << endl;
    }

    // lower part
    for (int i = n; i >= 1; i--)
    {

        for (int j = 1; j <= i; j++)
            cout << "*";

        for (int s = 1; s <= 2 * (n - i); s++)
            cout << " ";

        for (int j = 1; j <= i; j++)
            cout << "*";

        cout << endl;
    }
}