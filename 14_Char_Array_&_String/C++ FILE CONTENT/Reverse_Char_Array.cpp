// 📌 Reverse a Character Array
#include <iostream>
using namespace std;

int main()
{
    // Character array (C-style string)
    char arr[] = {'c', 'o', 'd', 'e', '\0'};

    // Calculate length of array (including '\0')
    int n = sizeof(arr) / sizeof(char);

    // Initialize two pointers
    int start = 0;
    int end = n - 2; // ignore '\0' while reversing

    // Reverse the character array
    while (start < end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }

    // Print reversed string
    cout << "Reversed string: " << arr << endl;

    return 0;
}