/*
===========================================================
        DEMONSTRATION OF LIST OPERATIONS IN C++
===========================================================
Functions Covered:
1. push_back()     -> Add element at end
2. emplace_back()  -> Construct element at end
3. push_front()    -> Add element at beginning
4. pop_back()      -> Remove element from end
5. pop_front()     -> Remove element from beginning
6. Traversing list using loop
===========================================================
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{

    // Creating a list of integers
    list<int> ls;

    // Adding elements at end
    ls.push_back(3);
    ls.push_back(4);
    ls.push_back(5);

    // Direct construction at end
    ls.emplace_back(8);

    // Adding element at beginning
    ls.push_front(2);

    cout << "List after insertion: ";
    for (const auto &vl : ls)
    {
        cout << vl << " ";
    }
    cout << endl;

    // Removing last element
    ls.pop_back();

    cout << "After pop_back(): ";
    for (const auto &vl : ls)
    {
        cout << vl << " ";
    }
    cout << endl;

    // Removing first element
    ls.pop_front();

    cout << "After pop_front(): ";
    for (const auto &vl : ls)
    {
        cout << vl << " ";
    }
    cout << endl;

    return 0;
}
