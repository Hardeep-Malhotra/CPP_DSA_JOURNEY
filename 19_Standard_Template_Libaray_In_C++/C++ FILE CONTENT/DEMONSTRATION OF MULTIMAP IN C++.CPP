
/*
===========================================================
                DEMONSTRATION OF MULTIMAP
===========================================================
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    multimap<int, string> mm;

    // Inserting elements (duplicate keys allowed)
    mm.insert({1, "Apple"});
    mm.insert({2, "Banana"});
    mm.insert({1, "Mango"});
    mm.insert({3, "Orange"});

    cout << "Multimap elements (sorted by key):" << endl;

    for (const auto &it : mm)
    {
        cout << "Key: " << it.first
             << "  Value: " << it.second << endl;
    }

    // Count occurrences of key 1
    cout << "\nCount of key 1: "
         << mm.count(1) << endl;

    return 0;
}
