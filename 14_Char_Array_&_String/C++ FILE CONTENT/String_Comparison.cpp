/*************************************************
 * Program Name : String Comparison in C++
 * Language     : C++
 * Description  : This program demonstrates
 *                different ways to compare
 *                strings in C++ using:
 *                1) compare() function
 *                2) Comparison operators
 *************************************************/

#include <iostream>
#include <string>
using namespace std;

int main()
{
    // Declare and initialize strings
    string s1 = "apple";
    string s2 = "banana";

    // -------- Method 1: Using compare() function --------
    int result = s1.compare(s2);

    if (result == 0)
        cout << "Using compare(): Strings are equal" << endl;
    else if (result < 0)
        cout << "Using compare(): First string is smaller" << endl;
    else
        cout << "Using compare(): First string is greater" << endl;

    // -------- Method 2: Using comparison operators --------
    if (s1 == s2)
        cout << "Using operators: Strings are equal" << endl;
    else if (s1 < s2)
        cout << "Using operators: First string is smaller" << endl;
    else
        cout << "Using operators: First string is greater" << endl;

    return 0; // Program executed successfully
}
