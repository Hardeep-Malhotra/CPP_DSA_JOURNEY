// Question3: Write a function which takes 2 numbers as parameters  (a&b) and  outputs : a^2 + b^2 + 2*ab.


#include <iostream>
using namespace std;

int Calculate_2ab_Formula(int a, int b)
{
    int aSquare = a * a;
    int bSquare = b * b;

    int twoAB = 2 * a * b;

    int total = aSquare + bSquare + twoAB;
}

int main()
{
    int a, b;
    cout << "Enter the value of a & b: ";
    cin >> a >> b;

    cout << "a² + b² + 2ab = " << Calculate_2ab_Formula(a, b) << endl;
}