/*
===========================================================
            DEMONSTRATION OF MULTISET IN C++
===========================================================
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    multiset<int> ms;

    // Inserting elements (duplicates allowed)
    ms.insert(10);
    ms.insert(20);
    ms.insert(10);
    ms.insert(30);
    ms.insert(20);

    cout << "Elements in multiset: ";
    for (auto val : ms)
    {
        cout << val << " ";
    }
    cout << endl;

    // Count occurrences
    cout << "Count of 10: " << ms.count(10) << endl;

    // Erase all 20
    ms.erase(20);

    cout << "After erase(20): ";
    for (auto val : ms)
    {
        cout << val << " ";
    }

    return 0;
}