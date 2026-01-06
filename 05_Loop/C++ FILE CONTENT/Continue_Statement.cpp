// ✅ Example: Skip number 5 in loop
#include <iostream>
using namespace std;

int main()
{

    for (int i = 1; i <= 10; i++)
    {

        if (i == 5)
        {
            continue; // is iteration ko skip karo
        }

        cout << i << " ";
    }

    return 0;
}
