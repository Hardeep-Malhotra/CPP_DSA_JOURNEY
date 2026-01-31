#include <iostream>
using namespace std;

/*
    =========================================================
    Program: Sum of Elements in the Second Row of a 2D Array
    Concepts:
      1) Brute Force Traversal (Nested Loops)
      2) Optimized Traversal (Fixed Row, Single Loop)
    =========================================================
*/

// ✅ Approach 1 — Brute Force
int sum_Second_Row_Brute(int arr[][3], int n, int m)
{
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (i == 1)   // Second row check
            {
                sum += arr[i][j];
            }
        }
    }

    return sum;
}

// ✅ Approach 2 — Optimized
int sum_Second_Row_Optimized(int arr[][3], int n, int m)
{
    int sum = 0;
    int i = 1;  // Second row index

    for (int j = 0; j < m; j++)
    {
        sum += arr[i][j];
    }

    return sum;
}

int main()
{
    int arr[3][3] = {{1,4,9},{11,4,3},{2,2,3}};
    int n = 3, m = 3;

    int ans1 = sum_Second_Row_Brute(arr, n, m);
    int ans2 = sum_Second_Row_Optimized(arr, n, m);

    cout << "Brute Force Sum: " << ans1 << endl;
    cout << "Optimized Sum: " << ans2 << endl;

    return 0;
}