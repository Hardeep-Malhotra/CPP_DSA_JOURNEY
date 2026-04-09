#include <iostream>
using namespace std;

/*
    ---------------------------------------------------------
    Program: Count Frequency of Number 7 in a 2D Array
    Concept Used:
      - 2D Array Traversal (Nested Loops)
      - Element Access using arr[i][j]
      - Counter Variable
    Description:
      This function visits every element of the 2D array
      and counts how many times the number 7 appears.
    ---------------------------------------------------------
*/

// Function to count frequency of 7 in 2D array
int FrequencyofNumber(int arr[][3], int n, int m)
{
    int count = 0;

    // Traverse each row
    for (int i = 0; i < n; i++)
    {
        // Traverse each column
        for (int j = 0; j < m; j++)
        {
            // Check if element is 7
            if (arr[i][j] == 7)
            {
                count++;
            }
        }
    }

    // Return total count of 7's
    return count;
}

int main()
{
    // 2D Array initialization
    int arr[2][3] = {{4, 7, 8}, {8, 8, 7}};
    int n = 2, m = 3;

    // Function call
    int ans = FrequencyofNumber(arr, n, m);

    // Output result
    cout << "Total number of 7's: " << ans << endl;

    return 0;
}