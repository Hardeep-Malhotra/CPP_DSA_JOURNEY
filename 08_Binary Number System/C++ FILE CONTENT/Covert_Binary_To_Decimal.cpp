#include <iostream>
using namespace std;

int BinToDec(int BinNum)
{
    int n = BinNum;
    int DecDigit = 0;
    int pow = 1;

    while (n > 0)
    {

        // find   last digit
        int lastDigit = n % 10;
        // multiple lastDigit with power
        DecDigit += lastDigit * pow;
        // remove last digit
        n = n / 10;
        // increase pow * 2
        pow = pow * 2;
    }
    return DecDigit;
}

int main()
{
    cout << BinToDec(111) << endl;
}