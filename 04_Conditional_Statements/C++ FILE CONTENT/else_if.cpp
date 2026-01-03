#include <iostream>
using namespace std;

int main()
{
    int marks;
    cin >> marks;
    // Takes marks input from the user

    if (marks >= 90)
        // If marks are 90 or above
        cout << "A";
    // Grade A

    else if (marks >= 75)
        // If marks are 75 or above but less than 90
        cout << "B";
    // Grade B

    else if (marks >= 50)
        // If marks are 50 or above but less than 75
        cout << "C";
    // Grade C

    else
        // If marks are less than 50
        cout << "Fail";
    // Student has failed
}