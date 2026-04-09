// Character String

#include <iostream>
using namespace std;

int main()
{
    // -------------------------------
    // Character array (NOT a string)
    // -------------------------------
    // This array does NOT contain a null character '\0'
    // So it is NOT a valid C-style string
    char arr1[5] = {'a', 'b', 'c', 'd', 'e'};

    // --------------------------------
    // C-style string (VALID string)
    // --------------------------------
    // This array contains '\0' at the end
    // '\0' marks the end of the string
    char arr2[5] = {'c', 'o', 'd', 'e', '\0'};

    // Printing arr1
    // cout treats char array as a string
    // Since arr1 has NO '\0', it prints garbage after 'abcde'
    cout << "arr1 output (Not a string): ";
    cout << arr1 << endl;

    // Printing arr2
    // Printing stops when '\0' is found
    cout << "arr2 output (Valid string): ";
    cout << arr2 << endl;

    // --------------------------------
    // Correct way to create a string
    // --------------------------------
    // Compiler automatically adds '\0'
    char arr3[] = "hello";

    cout << "arr3 output (Proper string): ";
    cout << arr3 << endl;

    return 0;
}