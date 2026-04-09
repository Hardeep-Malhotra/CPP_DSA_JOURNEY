/*************************************************
 * Problem Name : 2D Vector Example in C++
 * Language     : C++
 * Topic        : STL Vector, 2D Vector
 *
 * Description  :
 * Demonstrates how to create, store, and traverse
 * a 2D vector (vector of vectors) in C++.
 *
 * Key Points:
 * - 2D vector is dynamic array of dynamic arrays
 * - Use nested loops to access elements
 *************************************************/

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    /*************** 2D VECTOR INITIALIZATION ***************/
    // A 3x3 matrix using vector of vectors
    vector<vector<int>> matrix = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};

    /*************** TRAVERSING 2D VECTOR ***************/
    for (int i = 0; i < matrix.size(); i++)
    { // Loop through rows
        for (int j = 0; j < matrix[i].size(); j++)
        {                                // Loop through columns of each row
            cout << matrix[i][j] << " "; // Print element
        }
        cout << endl; // Newline after each row
    }

    /*************** NOTES ***************/
    // matrix.size() -> number of rows
    // matrix[i].size() -> number of columns in ith row
    // 2D vectors can have variable row sizes (jagged array)

    return 0;
}
