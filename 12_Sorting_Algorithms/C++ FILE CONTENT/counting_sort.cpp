// ==================================================
//         COUNTING SORT ALGORITHM (Ascending Order)
// --------------------------------------------------
#include <iostream>
using namespace std;

void printArr(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

void countingSort(int arr[], int n)
{

    // Step 1: Find maximum element
    int maxVal = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > maxVal)
            maxVal = arr[i];
    }

    // Step 2: Create count array
    int count[maxVal + 1] = {0};

    // Step 3: Store frequency of each element
    for (int i = 0; i < n; i++)
    {
        count[arr[i]]++;
    }

    // Step 4: Rebuild sorted array
    int index = 0;
    for (int i = 0; i <= maxVal; i++)
    {
        while (count[i] > 0)
        {
            arr[index] = i;
            index++;
            count[i]--;
        }
    }
}

int main()
{
    int arr[] = {4, 2, 2, 8, 3, 3, 1};
    int n = sizeof(arr) / sizeof(int);

    cout << "Original Array: ";
    printArr(arr, n);

    countingSort(arr, n);

    cout << "Sorted Array: ";
    printArr(arr, n);

    return 0;
}
