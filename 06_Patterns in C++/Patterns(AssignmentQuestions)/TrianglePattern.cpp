// question 1 : Print 0–1 Triangle Pattern.
// 1
// 01
// 101
// 0101
// 10101

#include <iostream>
using namespace std;

int main()
{

    int n = 5;

    for (int i = 1; i <= n; i++)
    {
        /* code */
        for (int j = 1; j <= i; j++)
        {
            /* code */
            if ((i + j) % 2 == 0)
            {
                cout << "1";
            }else{
                cout<<"0";
            }

        }
        cout << endl;
    }
    return 0;
}
