// ✅ Example: Stop loop when number becomes 5
#include <iostream>
using namespace std;

int main()
{

    for (int i = 1; i <= 10; i++)
    {

        if (i == 5)
        {
            break; // loop yahin ruk jayega
        }

        cout << i << " ";
    }

    return 0;
}