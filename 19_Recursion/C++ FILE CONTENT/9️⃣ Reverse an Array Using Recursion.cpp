#include <iostream>
#include <algorithm> // for swap()
using namespace std;

// --------------------------------------------------
// Recursive Function to Reverse an Array
// --------------------------------------------------
void reverseArray(int i, int arr[], int n)
{
    // 🛑 Base Case
    // If index reaches middle, stop recursion
    if (i >= n / 2)
    {
        return;
    }

    // 🔄 Swap first and last elements
    swap(arr[i], arr[n - i - 1]);

    // 🔁 Recursive Call
    reverseArray(i + 1, arr, n);
}

// --------------------------------------------------
// Main Function
// --------------------------------------------------
int main()
{
    int n;

    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];

    cout << "Enter array elements:\n";

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // Call recursion
    reverseArray(0, arr, n);

    cout << "\nReversed Array:\n";

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}