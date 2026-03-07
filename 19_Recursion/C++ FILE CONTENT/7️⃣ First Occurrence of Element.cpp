// ============================================================
//  C++ Recursion Program
//  Find First Occurrence of Target in a Vector
// ============================================================

#include <iostream>
#include <vector>
using namespace std;

/*
----------------------------------------------------------------
Function: findOccurrence
Purpose : Finds the first occurrence of a target element
          in a vector using recursion.

Parameters:
    arr    -> Input vector (passed by reference for efficiency)
    target -> Element to search
    i      -> Current index (starting from 0)

Returns:
    Index of first occurrence if found
    -1 if element not found
----------------------------------------------------------------
*/

int findOccurrence(const vector<int> &arr, int target, int i)
{
    // ----------------------
    // Base Case
    // ----------------------
    // If index reaches size of vector,
    // target is not found.
    if (i == arr.size())
    {
        return -1;
    }

    // ----------------------
    // Check Current Element
    // ----------------------
    if (arr[i] == target)
    {
        return i; // Found target
    }

    // ----------------------
    // Recursive Call
    // ----------------------
    return findOccurrence(arr, target, i + 1);
}

// ============================================================
//  Main Function
// ============================================================

int main()
{
    vector<int> arr = {1, 2, 3, 3, 3, 4, 5};
    int target = 3;

    int result = findOccurrence(arr, target, 0);

    if (result != -1)
        cout << "Target found at index: " << result << endl;
    else
        cout << "Target not found." << endl;

    return 0;
}
