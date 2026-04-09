
/*************************************************
 * Program Name : String Input Methods in C++
 * Language     : C++
 * Description  : This program demonstrates two
 *                different ways to take string
 *                input from the user:
 *                1) cin >> string
 *                2) getline(cin, string)
 *************************************************/

// #include <iostream>
// #include <string>
// using namespace std;

// int main()
// {
//     // Declare a string variable
//     string str;

//     // -------- Method 1: Using cin (reads only one word) --------
//     // cin >> str;        // Stops reading input after a space

//     // -------- Method 2: Using getline (reads full line) --------
//     getline(cin, str);   // Reads the complete line including spaces

//     // Display the entered string
//     cout << str << endl;

//     return 0; // Program executed successfully
// }

/*************************************************
 * Program Name : Traversing String in C++
 * Language     : C++
 * Description  : This program demonstrates
 *                two ways to traverse a string:
 *                1) Using index-based for loop
 *                2) Using for-each (range-based) loop
 *************************************************/

#include <iostream>
#include <string>
using namespace std;

int main()
{
    // Declare and initialize a string
    string str = "hello";

    // -------- Method 1: Using index-based for loop --------
    // Access characters using index (str[i])
    for (int i = 0; i < str.length(); i++)
    {
        cout << str[i] << " ";
    }
    cout << endl;

    // -------- Method 2: Using for-each (range-based) loop --------
    // Directly accesses each character in the string
    for (char ch : str)
    {
        cout << ch << " ";
    }
    cout << endl;

    return 0; // Program executed successfully
}