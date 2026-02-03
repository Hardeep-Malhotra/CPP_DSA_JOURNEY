// / 📌 Valid Palindrome Check (Character Array – Two Pointer Approach)
#include <iostream>
#include <cstring>
using namespace std;

// Function to check whether a character array is a palindrome
bool validPalindrome(char arr[], int n)
{
    // Pointer pointing to the first character
    int start = 0;

    // Pointer pointing to the last valid character
    // Since n = strlen(arr), last index = n - 1
    int end = n - 1;

    // Compare characters from both ends
    while (start < end)
    {
        // If characters do not match,
        // the string is not a palindrome
        if (arr[start] != arr[end])
        {
            return false;
        }

        // Move pointers towards the center
        start++;
        end--;
    }

    // If all characters matched,
    // the string is a palindrome
    return true;
}

int main()
{
    // Input character array (C-style string)
    char arr[] = "racecar";

    // Get length of string (excluding '\0')
    int n = strlen(arr);

    // Check palindrome
    bool ans = validPalindrome(arr, n);

    // Print result (1 = palindrome, 0 = not palindrome)
    cout << ans << endl;

    return 0;
}