/*
===========================================================
            DEMONSTRATION OF SET IN C++
===========================================================
Concepts Covered:
1. insert()
2. erase()
3. find()
4. count()
5. size()
6. empty()
7. Traversal
===========================================================
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    set<int> s;

    // ------------------------------------------------
    // 1️⃣ insert() → Add elements
    // ------------------------------------------------
    s.insert(10);
    s.insert(20);
    s.insert(30);
    s.insert(20); // Duplicate (ignored)

    cout << "Elements of set: ";
    for (auto val : s)
    {
        cout << val << " ";
    }
    cout << endl;

    // ------------------------------------------------
    // 2️⃣ erase() → Remove element
    // ------------------------------------------------
    s.erase(20);

    cout << "After erase(20): ";
    for (auto val : s)
    {
        cout << val << " ";
    }
    cout << endl;

    // ------------------------------------------------
    // 3️⃣ find() → Search element
    // ------------------------------------------------
    if (s.find(10) != s.end())
    {
        cout << "10 Found" << endl;
    }

    // ------------------------------------------------
    // 4️⃣ count() → Check existence (0 or 1)
    // ------------------------------------------------
    cout << "Count of 30: " << s.count(30) << endl;

    // ------------------------------------------------
    // 5️⃣ size()
    // ------------------------------------------------
    cout << "Size of set: " << s.size() << endl;

    return 0;
}