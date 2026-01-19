#include <iostream>
using namespace std;

// Function for Binary Search
int binarySearch(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;

    // Loop runs until start <= end
    while (start <= end)
    {
        int mid = (start + end) / 2; // Find middle index

        if (arr[mid] == key)
            return mid; // Element found

        else if (arr[mid] < key)
            start = mid + 1; // Search in right half

        else
            end = mid - 1; // Search in left half
    }

    return -1; // Element not found
}

int main()
{
    // Sorted Array (Binary Search always works on sorted array)
    int arr[] = {2, 4, 6, 8, 10, 12, 14, 16, 18};
    int size = sizeof(arr) / sizeof(arr[0]);

    int key = 12;

    int result = binarySearch(arr, size, key);

    if (result != -1)
        cout << "Element found at index: " << result;
    else
        cout << "Element not found!";

    return 0;
}
