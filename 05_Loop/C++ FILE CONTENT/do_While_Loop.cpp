// ✅ Example: Print numbers from 1 to 5 using do-while loop
#include <iostream>
using namespace std;

int main()
{

    int i = 1; // initialization

    do
    {
        cout << i << " "; // body runs at least once
        i++;              // update
    } while (i <= 5); // condition checked later

    return 0;
}