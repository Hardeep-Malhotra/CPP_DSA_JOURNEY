// Function to convert all lowercase letters of a string to uppercase
#include <iostream>
#include <cstring>
using namespace std;

// Function to convert all lowercase letters of a string to uppercase
void toUpper(char word[], int n)
{
    for (int i = 0; i < n; i++)
    {
        char ch = word[i];

        // Check if the character is a lowercase letter (a to z)
        if (ch >= 'a' && ch <= 'z')
        {
            // Convert lowercase to uppercase using ASCII values
            // Example: 'p' - 'a' + 'A' = 'P'
            word[i] = ch - 'a' + 'A';
        }
        // If the character is already uppercase or not an alphabet,
        // we do nothing and leave it unchanged
    }
}

int main()
{
    // Input string
    char word[] = "ApPle";

    // Call function to convert string to uppercase
    toUpper(word, strlen(word));

    // Print final result
    cout << "Uppercase string: " << word << endl;

    return 0;
}