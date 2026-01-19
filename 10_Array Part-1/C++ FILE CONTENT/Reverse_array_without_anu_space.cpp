#include <iostream>
using namespace std;

// Function to print array
void printArray(int arr[], int size)
{
    cout << "Reverse of given Array : ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[] = {5, 4, 3, 9, 2};
    int size = 5;

    // Print original array
    cout << "Original Array given : ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Reverse array using two pointer method
    int start = 0, end = size - 1;
    while (start < end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }

    // Print reversed array
    printArray(arr, size);

    return 0;
}
