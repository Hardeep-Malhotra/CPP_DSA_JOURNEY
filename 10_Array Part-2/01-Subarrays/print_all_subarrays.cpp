// Print all subarrays
#include <iostream>
using namespace std;

void printSubarrays(int arr[], int n)
{
    // Outer loop: fixes starting index of subarray
    for (int i = 0; i < n; i++)
    {
        // Middle loop: fixes ending index of subarray
        for (int j = i; j < n; j++)
        {
            // Inner loop: prints elements from i to j
            for (int k = i; k <= j; k++)
            {
                cout << arr[k] << " ";
            }
            cout << ", ";
        }
        cout << endl;
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    printSubarrays(arr, n);

    return 0;
}