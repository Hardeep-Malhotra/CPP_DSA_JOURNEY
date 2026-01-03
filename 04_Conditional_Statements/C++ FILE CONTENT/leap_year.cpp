#include <iostream>  // Input-output library
using namespace std; // Allows using cin and cout directly

int main()
{

    int year;    // Variable to store year
    cin >> year; // Take year as input from user

    // If year is divisible by 400, it is a leap year
    if (year % 400 == 0)
        cout << "Leap Year";

    // If year is divisible by 100 but not by 400, not a leap year
    else if (year % 100 == 0)
        cout << "Not Leap Year";

    // If year is divisible by 4 but not by 100, it is a leap year
    else if (year % 4 == 0)
        cout << "Leap Year";

    // All other years are not leap years
    else
        cout << "Not Leap Year";

    return 0; // Program ends successfully
}
