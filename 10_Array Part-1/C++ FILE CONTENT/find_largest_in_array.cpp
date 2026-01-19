#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};

    int n = sizeof(arr) / sizeof(int);
    int max = 0;

    for (int i = 0; i < n; i++)
    {
        /* code */
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    cout << "Largest element in the given Array : " << max;

    return 0;
}
