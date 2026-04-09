#include <iostream>
using namespace std;

void printHello(int n)
{
    if (n == 0)
        return;

    cout << "Hello World" << endl;

    printHello(n - 1);
}

int main()
{
    printHello(5);
}