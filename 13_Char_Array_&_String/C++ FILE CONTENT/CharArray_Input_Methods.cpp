
// How to Input Character Arrays (with spaces and without spaces)

#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char word[20];

    cout << "Enter your name: ";

    // ❌ Method 1 (commented out)
    // This stops input at whitespace (space)
    // cin >> word;

    // ✅ Method 2 (active)
    // This reads full line including spaces
    cin.getline(word, 20);

    cout << "Your name is: " << word << endl;
    cout << "Your name length is: " << strlen(word) << endl;

    return 0;
}