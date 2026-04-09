// ============================================================
//  C++ Recursion Program
//  Check if an Array is Sorted using Recursion
// ============================================================

#include <iostream>
using namespace std;

/*
---------------------------------------------------------------
Function: isSorted
Purpose : Checks whether the given array is sorted in
          non-decreasing order using recursion.
Parameters:
    arr[] -> Input array
    n     -> Size of array
    i     -> Current index (starting from 0)
Returns:
    true  -> If array is sorted
    false -> If array is not sorted
---------------------------------------------------------------
*/

bool isSorted(int arr[], int n, int i)
{

    //     // ----------------------
    //     // Base Case
    //     // ----------------------
    // If we reach the last element,
    // it means all previous elements were in correct order.
    if (i == n - 1)
    {
        return true;
    }

    //     // ----------------------
    //     // Check current pair
    //     // ----------------------
    //     // If current element is greater than next,
    //     // array is not sorted.
    if (arr[i] > arr[i + 1])
    {
        return false;
    }

    //     // ----------------------
    //     // Recursive Call
    //     // ----------------------
    // Move to next index
    return isSorted(arr, n, i + 1);
}

// ============================================================
//  Main Function
// ============================================================

int main()
{

    int arr1[] = {1, 2, 3, 4, 5}; // Sorted array
    int arr2[] = {1, 3, 2, 4, 5}; // Not sorted array

    int n = sizeof(arr1) / sizeof(arr1[0]);

    cout << "arr1 Sorted? " << isSorted(arr1, n, 0) << endl;
    cout << "arr2 Sorted? " << isSorted(arr2, n, 0) << endl;

    return 0;
}