// // Function Overriding
#include <iostream>
using namespace std;

class Animal
{
public:
    void sound()
    {
        cout << "Animal makes a sound" << endl;
    }
};

class Dog : public Animal
{
public:
    void sound()
    {
        cout << "Dog barks" << endl;
    }
};

int main()
{

    Dog obj; // Child class object

    obj.sound(); // Direct child function call

    return 0;
}
