/*************************************************
 * Program Name : String Traversal in C++
 * File Name    : 09_String_Traversal.cpp
 * Language     : C++
 * Description  :
 * This program demonstrates how to traverse
 * a string in C++ using:
 * 1) Index-based for loop
 * 2) Range-based (for-each) loop
 *************************************************/

#include <iostream>
#include <string>
using namespace std;

int main()
{
    // Declare and initialize a string
    string str = "hello";

    // -----------------------------------------
    // Method 1: Index-based for loop
    // -----------------------------------------
    cout << "Using index-based loop: ";
    for (int i = 0; i < str.length(); i++)
    {
        cout << str[i] << " ";
    }
    cout << endl;

    // -----------------------------------------
    // Method 2: Range-based (for-each) loop
    // -----------------------------------------
    cout << "Using range-based loop: ";
    for (char ch : str)
    {
        cout << ch << " ";
    }
    cout << endl;

    return 0;
}
