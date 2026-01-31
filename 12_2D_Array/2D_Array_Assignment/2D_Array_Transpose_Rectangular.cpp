
#include <iostream>
using namespace std;

/*
    Program: Transpose of a Matrix (2x3 -> 3x2)

    Definition:
    Transpose ka matlab hota hai rows ko columns me convert kar dena.

    Rule:
    t[j][i] = arr[i][j]

    Note:
    Rectangular matrix (R x C) ka transpose (C x R) hota hai,
    isliye extra matrix lena zaroori hai.
*/

void transpose_Matrix(int arr[][3], int n, int m)
{
    // Transpose matrix ka size m x n hoga (3x2)
    int t[3][2];

    // Original matrix ke har element par loop
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            // Main transpose logic: rows -> columns
            t[j][i] = arr[i][j];
        }
    }

    // Transpose matrix print karna
    cout << "Transpose Matrix\n";
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << t[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    // Original 2x3 matrix
    int arr[2][3] = {{1, 2, 3}, {3, 4, 2}};
    int n = 2, m = 3;

    // Function call to find transpose
    transpose_Matrix(arr, n, m);

    return 0;
}
