// ⭐ 1) Star Pattern (Square)

// Print:

// * * *
// * * *
// * * *

#include <iostream>
using namespace std;

int main()
{
    int n = 3;

    for (int i = 1; i <= n; i++)
    { // rows
        for (int j = 1; j <= n; j++)
        { // columns
            cout << "* ";
        }
        cout << endl;
    }
}