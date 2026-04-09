
#include <iostream>
#include <string>
using namespace std;

/**
 * Function: f (Palindrome Check)
 * ----------------------------
 * Checks if a string is a palindrome using recursion.
 * * i: Current index from the start
 * s: Reference to the string (using & to avoid creating copies)
 * * Returns: true if palindrome, false otherwise.
 */
bool isPalindrome(int i, string &s)
{
    // 1. BASE CASE:
    // If we have reached or passed the middle, it means
    // all characters matched successfully.
    if (i >= s.size() / 2)
    {
        return true;
    }

    // 2. CHARACTER MATCH:
    // Compare character at index 'i' with its mirror
    // character from the end (size - i - 1).
    if (s[i] != s[s.size() - i - 1])
    {
        // If they don't match, it's not a palindrome
        return false;
    }

    // 3. RECURSIVE CALL:
    // Move to the next character (i + 1)
    return isPalindrome(i + 1, s);
}

int main()
{
    string s = "abcba";

    // Calling the function starting from index 0
    // The output will be 1 (true) or 0 (false)
    if (isPalindrome(0, s))
    {
        cout << "The string \"" << s << "\" is a Palindrome." << endl;
    }
    else
    {
        cout << "The string \"" << s << "\" is NOT a Palindrome." << endl;
    }

    return 0;
}
#include <iostream>
using namespace std;

bool f(int i, string &s)
{
    if (i >= s.size() / 2)
    {
        return true;
    }

    if (s[i] != s[s.size() - i - 1])
    {
        return false;
    }

    return f(i + 1, s);
};

int main()
{
    string s = "abcba";
    cout << f(0, s) << endl;
}