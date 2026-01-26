// ==================================================
//         BUBBLE SORT ALGORITHM (Ascending Order)
// --------------------------------------------------
#include <iostream>
using namespace std;

// 🔹 Function to print the array
void printArr(int arr[], int n)
{
    cout << "\nSorted Array using Bubble Sort:\n";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

// 🔹 Optimized Bubble Sort function
void BubbleSort(int arr[], int n)
{
    // Outer loop for number of passes
    for (int i = 0; i < n - 1; i++)
    {

        bool isSwap = false;

        // Inner loop for adjacent comparison
        for (int j = 0; j < n - i - 1; j++)
        {

            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                isSwap = true; // ✅ swap hua
            }
        }

        // ✅ if no any swap , means array allready sorted .
        if (!isSwap)
        {
            cout << "Array already sorted, breaking loop\n";
            break;
        }
    }

    printArr(arr, n);
}

int main()
{
    int arr[] = {5, 4, 1, 3, 2};
    int n = sizeof(arr) / sizeof(int);

    cout << "Unsorted Array:\n";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    BubbleSort(arr, n);
    return 0;
}