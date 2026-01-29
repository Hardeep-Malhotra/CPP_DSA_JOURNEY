#include <iostream>
using namespace std;

int main()
{
    int arr[2][3] = {{100, 100, 100}, {21, 43, 12}};
    int n = sizeof(arr) / sizeof(int);
    for (int i = 0; i < n; i++)
    {
        /* code */
        for (int j = 0; j < n; j++)
        {
            /* code */
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}