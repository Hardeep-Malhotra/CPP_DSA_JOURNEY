#include <iostream>  // Header file for input-output
using namespace std; // Standard namespace

int main()
{

    int a = 5; // Initialize variable

    cout << ++a << endl; // Pre-increment: a becomes 6, then prints 6
    cout << a++ << endl; // Post-increment: prints 6, then a becomes 7
    cout << a;           // Prints current value of a → 7

    return 0; // Program ends successfully
}
