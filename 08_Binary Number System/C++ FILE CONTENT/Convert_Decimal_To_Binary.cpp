
#include <iostream>
using namespace std;

int DecToBin(int DecNum)
{
    int n = DecNum;
    int BinNum = 0;
    int pow = 1;

    while (n > 0)
    {
        // find   last digit
        int lastDigit = n % 2;
        // multiple lastDigit with power
        BinNum += lastDigit * pow;
        // remove last digit
        n = n / 2;
        // increase pow * 2
        pow = pow * 10;
    }
    return BinNum;
}

int main()
{

    cout << DecToBin(7);
}