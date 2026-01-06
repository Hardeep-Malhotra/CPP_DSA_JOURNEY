// 🟦 5) Hollow Rectangle Pattern

// Output:

// * * * * *
// *       *
// *       *
// * * * * *

#include <iostream>
using namespace std;

int main()
{
    int rows = 4, cols = 5;

    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= cols; j++)
        {

            if (i == 1 || i == rows || j == 1 || j == cols)
                cout << "* ";
            else
                cout << "  ";
        }
        cout << endl;
    }
}