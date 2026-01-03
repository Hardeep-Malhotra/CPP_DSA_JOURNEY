#include <iostream> // Input-output library
#include <cmath>    // Math functions (not required here but included)
using namespace std;

int main()
{

    int n, temp, sum = 0; // n = input number, temp = copy of n, sum = result
    cin >> n;             // Take number as input

    temp = n; // Store original number for comparison

    while (n > 0)
    { // Loop runs until n becomes 0

        int digit = n % 10;           // Extract last digit
        sum += digit * digit * digit; // Add cube of digit to sum
        n /= 10;                      // Remove last digit from number
    }

    // Check if calculated sum equals original number
    if (sum == temp)
        cout << "Armstrong Number";
    else
        cout << "Not Armstrong";

    return 0; // Program ends successfully
}
