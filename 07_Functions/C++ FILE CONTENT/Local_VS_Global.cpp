#include <iostream>
using namespace std;

int x = 50;

void test()
{
    int x = 10;
    cout << x << endl; // local
}

int main()
{
    test();
    cout << x; // global
}