#include <iostream>
using namespace std;

int add(int, int); // forward declaration

int main()
{
    cout << add(3, 4);
    return 0;
}

int add(int a, int b)
{
    return a + b;
}
