/*
===========================================================
        DEMONSTRATION OF UNORDERED_MAP IN C++
===========================================================

Definition:
Unordered_map stores unique keys with values using
a hash table. It provides average O(1) time for
insertion, deletion and search.

===========================================================
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Creating unordered_map
    unordered_map<int, string> mp;

    // ------------------------------------------------
    // 1️⃣ Insert key-value pairs
    // ------------------------------------------------
    mp[1] = "Apple";
    mp[2] = "Banana";
    mp[3] = "Mango";

    // ------------------------------------------------
    // 2️⃣ Printing elements (Order NOT sorted)
    // ------------------------------------------------
    cout << "Unordered Map Elements:" << endl;
    for(const auto &it : mp){
        cout << "Key: " << it.first 
             << "  Value: " << it.second << endl;
    }

    // ------------------------------------------------
    // 3️⃣ Access value using key
    // ------------------------------------------------
    cout << "\nValue of key 2: " << mp[2] << endl;

    // ------------------------------------------------
    // 4️⃣ Check if key exists
    // ------------------------------------------------
    if(mp.find(3) != mp.end()){
        cout << "Key 3 Found" << endl;
    }

    // ------------------------------------------------
    // 5️⃣ Delete a key
    // ------------------------------------------------
    mp.erase(1);

    cout << "\nAfter deleting key 1:" << endl;
    for(const auto &it : mp){
        cout << "Key: " << it.first 
             << "  Value: " << it.second << endl;
    }

    return 0;
}
