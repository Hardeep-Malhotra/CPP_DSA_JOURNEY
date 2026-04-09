/*************************************************
 * Program Name : 2D Dynamic Array
 * Language     : C++
 * Description  : This program demonstrates
 *                how a 2D dynamic array is
 *                created in heap memory using
 *                pointer to pointer (int**),
 *                how data is accessed using
 *                arr[i][j] and how memory is
 *                properly deallocated to avoid
 *                memory leak.
 *************************************************/

#include <iostream>
using namespace std;

int main()
{
    // rows  -> number of rows in 2D array
    // cols  -> number of columns in each row
    int rows, cols;

    // Taking rows and columns from user at runtime
    cout << "Enter number of rows: ";
    cin >> rows;
    cout << "Enter number of columns: ";
    cin >> cols;

    /*
        Step 2:
        int** arr means "pointer to pointer".

        - arr is stored in STACK memory
        - new int*[rows] creates an array of
          'rows' number of int* pointers in HEAP
        - Each arr[i] will later point to one row
    */
    int** arr = new int*[rows];

    /*
        Step 3:
        Allocate memory for columns of each row

        - arr[i] is of type int*
        - new int[cols] creates a continuous block
          of 'cols' integers in HEAP
        - arr[i] stores the base address of that row
    */
    for (int i = 0; i < rows; i++)
    {
        arr[i] = new int[cols];
    }

    /*
        Step 4:
        Taking input for 2D array elements

        arr[i][j] internally works as:
        *(*(arr + i) + j)

        Meaning:
        - arr + i        → address of ith row pointer
        - *(arr + i)     → base address of ith row
        - + j            → jth column offset
        - *              → actual value
    */
    cout << "Enter elements:\n";
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cin >> arr[i][j];
        }
    }

    /*
        Step 5:
        Printing the 2D array elements

        Since rows are printed one by one,
        a newline is added after each row
    */
    cout << "2D Array is:\n";
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    /*
        Step 6:
        Freeing dynamically allocated memory

        IMPORTANT ORDER:
        1. First delete each row (arr[i])
        2. Then delete the array of row pointers (arr)

        If we delete arr first, row addresses are lost
        and memory leak will occur.
    */
    for (int i = 0; i < rows; i++)
    {
        delete[] arr[i];   // Frees memory of each row
    }
    delete[] arr;          // Frees memory of row pointers

    return 0;
}
