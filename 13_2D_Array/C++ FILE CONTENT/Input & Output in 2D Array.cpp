#include <iostream>
using namespace std;

int main()
{
    int arr[3][4];
    int n = 3, m = 4;

    // This loop input value of 2d Array
    cout << "Enter value of 2D Arrya : " << endl;
    for (int i = 0; i < n; i++)
    {
        /* code */
        for (int j = 0; j < m; j++)
        {
            /* code */
            cin >> arr[i][j];
        }
    }

    // This is loop print the 2D array
    cout << "2D Array :" << endl;
    for (int i = 0; i < n; i++)
    {
        /* code */
        for (int j = 0; j < m; j++)
        {
            /* code */
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}