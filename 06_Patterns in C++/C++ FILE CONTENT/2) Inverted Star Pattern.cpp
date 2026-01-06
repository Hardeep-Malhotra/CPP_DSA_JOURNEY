// 🔻 2) Inverted Star Pattern

// Output:

// * * *
// * *
// *

#include <iostream>
using namespace std;

int main()
{
    int n = 3;

    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}