// Question2: Print the Rhombus Pattern.
//     *****
//    *****
//   *****
//  *****
// *****

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
        for (int j = 1; j <= n; j++)
        {
            /* code */
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}