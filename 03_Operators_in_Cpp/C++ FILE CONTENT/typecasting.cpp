#include <iostream>  // Header file for input-output
using namespace std; // Standard namespace

int main()
{

    float x = 5.9;  // Float variable with decimal value
    int y = (int)x; // Explicit typecasting (float → int)

    cout << x << endl; // Prints original float value
    cout << y;         // Prints integer value (decimal part lost)

    return 0; // Successful program termination
}
