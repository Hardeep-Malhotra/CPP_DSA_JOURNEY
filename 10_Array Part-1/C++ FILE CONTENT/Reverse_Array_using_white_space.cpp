#include <iostream>
using namespace std;

// Function to print reversed array
int Revers_Array(int arr[], int size)
{
    cout << "Reverse of given Array : ";

    // Loop to print array elements
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    // Original array
    int arr[] = {5, 4, 3, 9, 2};
    int size = 5;

    // Extra array to store reversed elements (Extra Space)
    int copy_Array[size];

    // Printing original array
    cout << "Original Array given : ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;

    // First loop:
    // Copy elements from original array in reverse order
    // arr[size - i - 1] gives last element first
    for (int i = 0; i < size; i++)
    {
        copy_Array[i] = arr[size - i - 1];
    }

    // Second loop:
    // Copy reversed elements back into original array
    for (int i = 0; i < size; i++)
    {
        arr[i] = copy_Array[i];
    }

    // Function call to print reversed array
    Revers_Array(arr, size);

    return 0;
}