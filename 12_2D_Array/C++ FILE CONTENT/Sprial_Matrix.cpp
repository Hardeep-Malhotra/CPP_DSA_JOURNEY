#include <iostream>
using namespace std;

/*
---------------------------------------------------------
Function Name  : spiralMatrix
Purpose        : Print elements of a 2D matrix in
                 spiral order (clockwise)
Parameters     :
    matrix     → 2D array (fixed column size required)
    n          → number of rows
    m          → number of columns
---------------------------------------------------------
*/
void spiralMatrix(int matrix[4][4], int n, int m)
{
    // starting row & column
    int srow = 0, scol = 0;

    // ending row & column
    int erow = n - 1, ecol = m - 1;

    // Loop runs until all elements are printed
    while (srow <= erow && scol <= ecol)
    {
        // 🔹 1. Print TOP ROW (left → right)
        for (int j = scol; j <= ecol; j++)
            cout << matrix[srow][j] << " ";
        srow++; // move top boundary down

        // 🔹 2. Print RIGHT COLUMN (top → bottom)
        for (int i = srow; i <= erow; i++)
            cout << matrix[i][ecol] << " ";
        ecol--; // move right boundary left

        // 🔹 3. Print BOTTOM ROW (right → left)
        // Condition prevents duplicate printing
        if (srow <= erow)
        {
            for (int j = ecol; j >= scol; j--)
                cout << matrix[erow][j] << " ";
            erow--; // move bottom boundary up
        }

        // 🔹 4. Print LEFT COLUMN (bottom → top)
        // Condition prevents duplicate printing
        if (scol <= ecol)
        {
            for (int i = erow; i >= srow; i--)
                cout << matrix[i][scol] << " ";
            scol++; // move left boundary right
        }
    }
}

/*
---------------------------------------------------------
Main Function
---------------------------------------------------------
*/
int main()
{
    // 4x4 matrix initialization
    int matrix[4][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}};

    cout << "Spiral Matrix Output:\n";

    // Function call
    spiralMatrix(matrix, 4, 4);

    return 0;
}
