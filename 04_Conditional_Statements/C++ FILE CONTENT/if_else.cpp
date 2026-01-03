#include <iostream>  // Header file for input and output
using namespace std; // Allows use of cout and cin without std::

int main()
{

    int n;
    // Variable 'n' stores the number entered by the user

    cout << "Enter a number: ";
    // Displays a message asking the user to enter a number

    cin >> n;
    // Takes input from the user and stores it in 'n'

    if (n > 0)
        // If the number is greater than 0
        cout << "Positive";
    // Then the number is positive

    else if (n < 0)
        // If the number is less than 0
        cout << "Negative";
    // Then the number is negative

    else
        // If the number is neither greater than 0 nor less than 0
        // That means the number is 0
        cout << "Zero";
    // Output Zero

    return 0;
    // Ends the program successfully
}
