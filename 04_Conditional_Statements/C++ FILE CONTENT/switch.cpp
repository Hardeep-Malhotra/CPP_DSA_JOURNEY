#include <iostream>  // Input-output library
using namespace std; // Allows using cin, cout without std::

int main()
{

    int day; // Variable to store day number

    cin >> day; // Takes day number from user

    switch (day)
    { // switch checks value of day

    case 1:               // If day == 1
        cout << "Monday"; // Print Monday
        break;            // Exit switch

    case 2:                // If day == 2
        cout << "Tuesday"; // Print Tuesday
        break;             // Exit switch

    default:               // If day is not 1 or 2
        cout << "Invalid"; // Print Invalid
    }

    return 0; // Program ends successfully
}
