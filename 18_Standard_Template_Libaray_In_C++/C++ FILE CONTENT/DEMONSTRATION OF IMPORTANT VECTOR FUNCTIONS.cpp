/*
===========================================================
        DEMONSTRATION OF IMPORTANT VECTOR FUNCTIONS
===========================================================
Functions Covered:
1. push_back()      -> Add element at end
2. emplace_back()   -> Construct element at end directly
3. insert()         -> Insert element at specific position
4. erase()          -> Remove element
5. begin()          -> Iterator to first element
6. end()            -> Iterator to position after last element
===========================================================
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    // ------------------------------------------------
    // 1️⃣ Creating a Vector
    // ------------------------------------------------
    vector<int> v;

    // ------------------------------------------------
    // 2️⃣ push_back() → Adds element at end
    // ------------------------------------------------
    v.push_back(10);
    v.push_back(20);

    // ------------------------------------------------
    // 3️⃣ emplace_back() → Constructs element at end
    // ------------------------------------------------
    v.emplace_back(30);

    cout << "After push_back & emplace_back: ";
    for (const auto &val : v)
        cout << val << " ";
    cout << endl;

    // ------------------------------------------------
    // 4️⃣ insert() → Insert at specific position
    // ------------------------------------------------
    v.insert(v.begin() + 1, 15); // Insert 15 at index 1

    cout << "After insert at index 1: ";
    for (const auto &val : v)
        cout << val << " ";
    cout << endl;

    // ------------------------------------------------
    // 5️⃣ erase() → Remove element
    // ------------------------------------------------
    v.erase(v.begin() + 2); // Remove element at index 2

    cout << "After erase at index 2: ";
    for (const auto &val : v)
        cout << val << " ";
    cout << endl;

    // ------------------------------------------------
    // 6️⃣ begin() and end() → Using iterators
    // ------------------------------------------------
    cout << "Using iterators (begin to end): ";
    for (auto it = v.begin(); it != v.end(); it++)
        cout << *it << " ";
    cout << endl;

    // ------------------------------------------------
    // Final Size of Vector
    // ------------------------------------------------
    cout << "Final size of vector: " << v.size() << endl;

    return 0;
}
