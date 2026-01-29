#include <iostream>
using namespace std;

// function using matrix pointer
void printMatrix(int (*arr)[3], int rows)
{
    cout << "Matrix elements:\n";

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    int matrix[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };

    printMatrix(matrix, 2);

    return 0;
}
