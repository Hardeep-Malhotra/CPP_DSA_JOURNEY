/*************************************************
 * Program Name : Dynamic Array Creation
 * Language     : C++
 * Description  : This program creates a dynamic
 *                array using new keyword,
 *                takes input from user,
 *                prints the array elements
 *                and frees the memory.
 *************************************************/

#include <iostream>
using namespace std;

int main()
{
    // Step 1: Declare size variable
    int size;
    cout << "Enter size of array: ";
    cin >> size;

    // Step 2: Create dynamic array
    int *arr = new int[size];

    // Step 3: Take input in array
    cout << "Enter " << size << " elements:\n";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    // Step 4: Print array elements
    cout << "Array elements are: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    // Step 5: Free allocated memory
    delete[] arr;

    return 0;
}