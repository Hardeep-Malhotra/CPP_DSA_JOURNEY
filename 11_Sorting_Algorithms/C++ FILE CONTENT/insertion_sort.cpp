// ==================================================
//         INSERTION SORT ALGORITHM (Ascending Order)
// --------------------------------------------------

#include <iostream>
using namespace std;

/* ---------- Function to Print Array ---------- */
void printArr(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

/* ---------- Insertion Sort Function (Swap-Based) ---------- */
/*
   Idea:
   - Left part of array is always sorted
   - Pick one element from right (curr)
   - Move it left by swapping until it reaches correct position
*/

void insertionSort(int arr[], int n)
{
    // Loop starts from second element because first element is already "sorted"
    for (int i = 1; i < n; i++)
    {
        int curr = arr[i]; // Current element to be inserted
        int prev = i - 1;  // Index of last element of sorted part

        // Move elements greater than curr one position ahead
        while (prev >= 0 && arr[prev] > curr)
        {
            // Swap current element with previous element
            swap(arr[prev], arr[prev + 1]);
            prev--; // Move backward in sorted part
        }

        // In swap-based method, curr is already placed correctly
        // arr[prev + 1] = curr;   // Not needed here
    }

    // Print array after sorting
    printArr(arr, n);
}

/* ---------- Main Function ---------- */
int main()
{
    int arr[] = {4, 2, 2, 8, 3, 3, 1};
    int n = sizeof(arr) / sizeof(int);

    cout << "Original Array: ";
    printArr(arr, n);

    // Call insertion sort
    insertionSort(arr, n);

    cout << "Sorted Array: ";
    printArr(arr, n);

    return 0;
}