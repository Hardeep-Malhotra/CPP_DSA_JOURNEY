// Question5: Write a function that accepts a character(ch) as parameters & returns the character that occurs after ch in the English alphabet .Eg:i nput=‘c’ , return value =‘b' Note :for ch=‘z’,return‘a’.

#include <iostream>
using namespace std;

char character(char ch)
{
    //  both concpet are same use anyone according to you
    char character = ++ch;
    return character;
    // return ch + 1;
};

int main()
{
    char ch;
    cout << "Enter anyone character :";
    cin >> ch;

    cout << character(ch);
    return 0;
}