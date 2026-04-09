/*
===========================================================
                🔥 HASHING IN C++ (DSA NOTES)
===========================================================

👉 Definition:
Hashing is a technique used to store and retrieve data efficiently.
It allows us to reduce time complexity for searching and frequency counting.

-----------------------------------------------------------
🧠 1. BRUTE FORCE APPROACH
-----------------------------------------------------------

👉 Idea:
For every query, traverse the entire array.

Time Complexity:
O(N * Q)

Example:
arr = [1,2,1,3,4,1]
target = 1

Code:
-----------------------------------------------------------
int countFrequency(int target, int arr[], int n)
{
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == target)
            count++;
    }

    return count;
}
-----------------------------------------------------------

❌ Drawback:
- Very slow for large inputs

-----------------------------------------------------------
⚡ 2. HASHING TECHNIQUE (OPTIMIZED)
-----------------------------------------------------------

👉 Idea:
1. Pre-computation (store frequency first)
2. Fetch (answer queries instantly)

Time Complexity:
- Precompute: O(N)
- Query: O(1)

-----------------------------------------------------------
🔢 3. NUMBER HASHING (ARRAY HASHING)
-----------------------------------------------------------

👉 Use:
When numbers are within a small range

Example:
-----------------------------------------------------------
int hash[13] = {0};

for (int i = 0; i < n; i++)
{
    hash[arr[i]]++;
}
-----------------------------------------------------------

👉 Query:
cout << hash[number];

-----------------------------------------------------------
⚠️ LIMITATIONS:
-----------------------------------------------------------

- Works only for small range values
- If number exceeds array size → error

-----------------------------------------------------------
🔤 4. CHARACTER HASHING
-----------------------------------------------------------

👉 Lowercase only:
-----------------------------------------------------------
int hash[26] = {0};

hash[s[i] - 'a']++;
-----------------------------------------------------------

👉 Uppercase + Lowercase:
-----------------------------------------------------------
if (s[i] >= 'a' && s[i] <= 'z')
    hash[s[i] - 'a']++;
else if (s[i] >= 'A' && s[i] <= 'Z')
    hash[s[i] - 'A']++;
-----------------------------------------------------------

👉 ASCII (Best approach):
-----------------------------------------------------------
int hash[256] = {0};

hash[s[i]]++;
-----------------------------------------------------------

-----------------------------------------------------------
🚨 5. LIMITATIONS OF ARRAY HASHING
-----------------------------------------------------------

❌ Cannot handle very large numbers
❌ Memory overflow possible

Local Array Limit:
~10^6

Global Array Limit:
~10^7

-----------------------------------------------------------
🗺️ 6. MAP IN C++
-----------------------------------------------------------

👉 Syntax:
-----------------------------------------------------------
map<int, int> mp;
-----------------------------------------------------------

👉 Store frequency:
-----------------------------------------------------------
mp[arr[i]]++;
-----------------------------------------------------------

👉 Query:
-----------------------------------------------------------
cout << mp[number];
-----------------------------------------------------------

-----------------------------------------------------------
⏱️ TIME COMPLEXITY:
-----------------------------------------------------------

map:
- Insert: O(log N)
- Fetch: O(log N)

-----------------------------------------------------------
⚡ 7. UNORDERED MAP (FASTEST)
-----------------------------------------------------------

👉 Syntax:
-----------------------------------------------------------
unordered_map<int, int> mp;
-----------------------------------------------------------

👉 Time Complexity:
- Average: O(1)
- Worst Case: O(N)

-----------------------------------------------------------
💥 8. COLLISION
-----------------------------------------------------------

👉 Definition:
When two keys map to the same index

Example:
key1 → index 5
key2 → index 5

👉 Handling:
- Chaining (linked list)
- Open addressing

-----------------------------------------------------------
🔥 9. FINAL IMPLEMENTATION (MAP HASHING)
-----------------------------------------------------------
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter the size of array: ";
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cout << "Enter array element: ";
        cin >> arr[i];
    }

    map<int, int> mp;

    // Store frequency
    for (int i = 0; i < n; i++)
    {
        mp[arr[i]]++;
    }

    int query;
    cout << "Enter number of queries: ";
    cin >> query;

    while (query--)
    {
        int number;
        cout << "Enter number: ";
        cin >> number;

        cout << "Frequency: " << mp[number] << endl;
    }

    return 0;
}

/*
===========================================================
🧠 FINAL SUMMARY
===========================================================

✔ Brute Force → O(NQ) → Slow
✔ Array Hashing → O(1) → Limited range
✔ Map → O(log N) → Safe and ordered
✔ Unordered Map → O(1) average → Best choice

👉 Best Practice:
Use unordered_map in interviews for optimal performance.

===========================================================
*/