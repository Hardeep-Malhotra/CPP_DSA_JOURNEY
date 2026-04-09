/*************************************************
 * Program Name : Important String Functions in C++
 * Language     : C++
 * Purpose      :
 *                most important string functions
 *************************************************/

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s = "hello world";

    // 1️⃣ length() - returns length of string
    cout << "Length: " << s.length() << endl;

    // 2️⃣ substr(pos, len) - extracts substring
    cout << "Substring (0,5): " << s.substr(0, 5) << endl;

    // 3️⃣ find() - finds position of substring
    cout << "Position of 'world': " << s.find("world") << endl;

    // 4️⃣ compare() - compares two strings
    string s2 = "hello";
    cout << "Compare with 'hello': " << s.compare(s2) << endl;

    // 5️⃣ append() - adds string at the end
    s.append(" C++");
    cout << "After append: " << s << endl;

    // 6️⃣ erase(pos, len) - removes part of string
    s.erase(5, 6);
    cout << "After erase: " << s << endl;

    return 0;
}
