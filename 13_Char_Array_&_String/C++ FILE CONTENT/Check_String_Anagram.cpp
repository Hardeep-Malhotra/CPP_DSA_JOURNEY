/*************************************************
 * Program Name : Check Anagram Using String
 * Language     : C++
 * Description  : This program checks whether
 *                two strings are anagrams or not
 *************************************************/

#include <iostream>
#include <string>
using namespace std;

bool isAnagram(string str1, string str2)
{
    // Step 1: Check length
    if (str1.length() != str2.length())
    {
        cout << "Not a valid Anagram." << endl;
        return false;
    }

    // Step 2: Frequency array
    int count[26] = {0};

    // Step 3: Count characters of first string
    for (int i = 0; i < str1.length(); i++)
    {
        int idx = str1[i] - 'a';
        count[idx]++;
    }

    // Step 4: Subtract characters of second string
    for (int i = 0; i < str2.length(); i++)
    {
        int idx = str2[i] - 'a';
        count[idx]--;
    }

    // Step 5: Check frequency array
    for (int i = 0; i < 26; i++)
    {
        if (count[i] != 0)
        {
            cout << "Not a valid Anagram." << endl;
            return false;
        }
    }

    cout << "Valid Anagram." << endl;
    return true;
}

int main()
{
    string str1 = "anagram";
    string str2 = "nagaram";

    isAnagram(str1, str2);

    return 0;
}
