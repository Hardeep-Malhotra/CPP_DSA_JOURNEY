#include <iostream>
using namespace std;

class Parent {
public:
    void show() {
        cout << "Parent Class";
    }
};

class Child : public Parent {
public:
    void show() {
        cout << "Child Class";
    }
};

int main() {
    Child obj;
    obj.show();
}