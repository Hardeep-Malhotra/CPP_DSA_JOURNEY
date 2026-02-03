/************************************************************
 * Program Name : Count Lowercase Vowels in a String
 * Language     : C++
 * Description  : This program takes a string input from
 *                the user and counts how many times
 *                lowercase vowels (a, e, i, o, u)
 *                occur in the string.
 ************************************************************/

#include <iostream>
#include <string>
using namespace std;

int main()
{
    // Declare a string to store user input
    string str;

    // Take string input from the user
    cout << "Enter a string: ";
    getline(cin, str);

    // Variable to store count of lowercase vowels
    int count = 0;

    // Loop through each character of the string
    for (char ch : str)
    {
        // Check if the character is a lowercase vowel
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
        {
            count++;  // Increment count if vowel is found
        }
    }

    // Display the total count of lowercase vowels
    cout << "Number of vowels in the string: " << count << endl;

    return 0; // End of program
}
