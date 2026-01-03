#include <iostream>  // Input-output library
using namespace std; // Allows direct use of cin, cout

int main()
{

    double a, b; // Variables to store two numbers (decimal allowed)
    char op;     // Variable to store operator (+, -, *, /)

    cout << "Enter first number: ";
    cin >> a; // Takes first number as input

    cout << "Enter operator (+ - * /): ";
    cin >> op; // Takes operator as input

    cout << "Enter second number: ";
    cin >> b; // Takes second number as input

    switch (op)
    { // switch checks which operator is entered

    case '+':          // If operator is +
        cout << a + b; // Perform addition
        break;

    case '-':          // If operator is -
        cout << a - b; // Perform subtraction
        break;

    case '*':          // If operator is *
        cout << a * b; // Perform multiplication
        break;

    case '/':          // If operator is /
        cout << a / b; // Perform division
        break;

    default: // If operator is not valid
        cout << "Invalid Operator";
    }

    return 0; // Program ends successfully
}
