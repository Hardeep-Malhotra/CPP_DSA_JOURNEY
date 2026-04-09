
// ---------------------------------------------------------
// Brute Force Approach to Search an Element in a Sorted 2D Array
// ---------------------------------------------------------

// Time Complexity  : O(n^2)
// Space Complexity : O(1)

// Reason:
// - Hum poori matrix ko row by row traverse kar rahe hain
// - Har element ko key ke saath compare kar rahe hain
// - Matrix sorted hone ke bawajood koi optimization use nahi ki
// ---------------------------------------------------------

#include <iostream>
using namespace std;

/*
---------------------------------------------------------
Function Name : SearchSorted
Purpose       : 2D matrix me given key ko search karna
Approach      : Brute Force (Full traversal)
---------------------------------------------------------
*/
int SearchSorted(int matrix[4][4], int n, int key)
{
    // Row traversal
    for (int i = 0; i < n; i++)
    {
        // Column traversal
        for (int j = 0; j < n; j++)
        {
            // Agar key mil jaaye
            if (matrix[i][j] == key)
            {
                return key; // element found
            }
        }
    }

    // Agar element na mile
    return -1;
}

int main()
{
    /*
    Sorted 2D Matrix
    ----------------
    10  20  30  40
    15  25  35  45
    27  29  37  48
    32  33  39  50
    */
    int matrix[4][4] = {
        {10, 20, 30, 40},
        {15, 25, 35, 45},
        {27, 29, 37, 48},
        {32, 33, 39, 50}};

    int key = 33;

    // Function call
    int result = SearchSorted(matrix, 4, key);

    // Output
    if (result != -1)
        cout << "Element found: " << result << endl;
    else
        cout << "Element not found" << endl;

    return 0;
}

/*
----------------------------------------------------
 Function: SearchSorted
 Purpose : Search an element in a row-wise and
           column-wise sorted 2D matrix
 Approach: Staircase Search (Top-Right Start)
 Time    : O(n + m)
 Space   : O(1)
----------------------------------------------------
*/

#include <iostream>
using namespace std;
int SearchSorted(int matrix[4][4], int n, int m, int key)
{
    // Start from the top-right corner
    int row = 0;
    int col = m - 1;

    // Traverse until we go out of matrix bounds
    while (row < n && col >= 0)
    {
        // If key is found
        if (matrix[row][col] == key)
        {
            return key;
        }
        // If current element is greater than key, move left
        else if (matrix[row][col] > key)
        {
            col--;
        }
        // If current element is smaller than key, move down
        else
        {
            row++;
        }
    }

    // If key is not present in the matrix
    return -1;
}

int main()
{
    /*
        Sorted Matrix:
        10  20  30  40
        15  25  35  45
        27  29  37  48
        32  33  39  50
    */
    int matrix[4][4] = {
        {10, 20, 30, 40},
        {15, 25, 35, 45},
        {27, 29, 37, 48},
        {32, 33, 39, 50}};

    int key = 33;

    // Function call
    int result = SearchSorted(matrix, 4, 4, key);

    // Output result
    if (result != -1)
        cout << "Element found: " << result << endl;
    else
        cout << "Element not found" << endl;

    return 0;
}
