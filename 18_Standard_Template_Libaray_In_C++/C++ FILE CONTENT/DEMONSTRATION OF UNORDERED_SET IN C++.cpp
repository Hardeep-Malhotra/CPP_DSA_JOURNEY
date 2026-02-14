/*
===========================================================
        DEMONSTRATION OF UNORDERED_SET IN C++
===========================================================
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    unordered_set<int> us;

    // Insert elements
    us.insert(10);
    us.insert(20);
    us.insert(30);
    us.insert(20); // Duplicate ignored

    cout << "Elements in unordered_set: ";
    for (auto val : us)
    {
        cout << val << " ";
    }
    cout << endl;

    // Search element
    if (us.find(10) != us.end())
    {
        cout << "10 Found" << endl;
    }

    // Count (0 or 1)
    cout << "Count of 20: " << us.count(20) << endl;

    // Erase element
    us.erase(30);

    cout << "After erase(30): ";
    for (auto val : us)
    {
        cout << val << " ";
    }

    return 0;
}
