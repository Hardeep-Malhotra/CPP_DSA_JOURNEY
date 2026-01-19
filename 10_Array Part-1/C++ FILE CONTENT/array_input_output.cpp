#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the length of Array : ";
    cin >> n;
    int arr[n];

    cout << "Enter Array Element : ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Array Element is :";
    for (int i = 0; i <= n - 1; i++)
    {
        /* code */
        cout << arr[i] << " , ";
    }
    return 0;
}