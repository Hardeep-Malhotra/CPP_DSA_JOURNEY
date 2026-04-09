// ==================================================
//         SELECTION SORT ALGORITHM (Ascending Order)
// --------------------------------------------------

#include <iostream>
using namespace std;

// Function to print array
void printArr(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// 🔹 Selection Sort function
void SelectionSort(int arr[], int n)
{
    // Outer loop for number of passes
    for (int i = 0; i < n - 1; i++)
    {
        int minIndex = i;

        // Find the minimum element in the unsorted part
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
        }

        // Print the minIndex for this pass
        cout << "Pass " << i + 1 << ": minIndex = " << minIndex << endl;

        // Swap the found minimum element with the first element of unsorted part
        if (minIndex != i)
        {
            swap(arr[i], arr[minIndex]);
        }

        // Optional: print array after each pass
        cout << "Array after pass " << i + 1 << ": ";
        printArr(arr, n);
    }
}

int main()
{
    int arr[] = {5, 4, 1, 3, 2};
    int n = sizeof(arr) / sizeof(int);

    cout << "Original Array: ";
    printArr(arr, n);

    SelectionSort(arr, n);

    cout << "Sorted Array: ";
    printArr(arr, n);

    return 0;
}

