// Question3 : Printthe Palindromic Pattern with Numbers.

//     1
//    212
//   32123
//  4321234
// 543212345

#include <iostream>
using namespace std;

int main()
{

    int n = 5;

    for (int i = 1; i <= n; i++)
    {
        /* code */
        for (int j = 1; j <= n - i; j++)
        {
            /* code */
            cout << " ";
        }

        for (int j = i; j >= 1; j--)
        {
            /* code */
            cout << j;
        }

        for (int j = 2; j <= i; j++)
        {
            /* code */
            cout << j;
        }

        cout << endl;
    }
}
