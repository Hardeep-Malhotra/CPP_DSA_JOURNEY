// 💎 8) Diamond Pattern

// Output:

//    *
//   ***
//  *****
// *******
//  *****
//   ***
//    *

#include <iostream>
using namespace std;

int main()
{
    int n = 4;

    // upper pyramid
    for (int i = 1; i <= n; i++)
    {

        for (int s = 1; s <= n - i; s++)
            cout << " ";
        for (int j = 1; j <= 2 * i - 1; j++)
            cout << "*";

        cout << endl;
    }

    // lower pyramid
    for (int i = n - 1; i >= 1; i--)
    {

        for (int s = 1; s <= n - i; s++)
            cout << " ";
        for (int j = 1; j <= 2 * i - 1; j++)
            cout << "*";

        cout << endl;
    }
}