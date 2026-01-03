#include <iostream>
using namespace std;

int main()
{
    int n = 5;
    // Declare an integer variable and assign value 5

    string ans = (n % 2 == 0) ? "Even" : "Odd";
    // Ternary operator is used here
    // Condition: n % 2 == 0
    // If condition is TRUE → "Even" is assigned to ans
    // If condition is FALSE → "Odd" is assigned to ans
    
    cout << "The number is " << ans << endl;
    // Output the result

    return 0;
}
