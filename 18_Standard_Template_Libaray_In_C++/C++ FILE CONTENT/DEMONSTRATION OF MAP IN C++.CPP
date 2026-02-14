
/*
===========================================================
                DEMONSTRATION OF MAP IN C++
===========================================================

Definition:
Map is an STL container that stores data in key-value pair.
Each key is UNIQUE and elements are stored in SORTED order
according to the key.

Internal Working:
Map is implemented using a Balanced Binary Search Tree
(Red-Black Tree).

Time Complexity:
Insertion  -> O(log n)
Deletion   -> O(log n)
Searching  -> O(log n)

===========================================================
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    // ------------------------------------------------
    // 1️⃣ Creating a map
    // ------------------------------------------------
    map<int, string> mp;

    // ------------------------------------------------
    // 2️⃣ Inserting elements (key-value pairs)
    // ------------------------------------------------
    mp[1] = "Apple";
    mp[3] = "Mango";
    mp[2] = "Banana";

    // ------------------------------------------------
    // 3️⃣ Printing map elements
    // Map automatically stores keys in sorted order
    // ------------------------------------------------
    cout << "Map Elements (Sorted by Key):" << endl;

    for (const auto &it : mp)
    {
        cout << "Key: " << it.first
             << "  Value: " << it.second << endl;
    }

    // ------------------------------------------------
    // 4️⃣ Accessing value using key
    // ------------------------------------------------
    cout << "\nValue of key 2: " << mp[2] << endl;

    // ------------------------------------------------
    // 5️⃣ Checking if key exists
    // ------------------------------------------------
    if (mp.find(3) != mp.end())
    {
        cout << "Key 3 Found" << endl;
    }

    // ------------------------------------------------
    // 6️⃣ Erasing a key
    // ------------------------------------------------
    mp.erase(1);

    cout << "\nAfter deleting key 1:" << endl;
    for (const auto &it : mp)
    {
        cout << "Key: " << it.first
             << "  Value: " << it.second << endl;
    }

    // ------------------------------------------------
    // 7️⃣ Size of map
    // ------------------------------------------------
    cout << "\nSize of map: " << mp.size() << endl;

    return 0;
}
