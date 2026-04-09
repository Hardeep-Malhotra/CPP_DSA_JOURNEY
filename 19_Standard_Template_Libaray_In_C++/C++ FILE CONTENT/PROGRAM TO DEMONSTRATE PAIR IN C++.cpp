/*
===========================================================
        PROGRAM TO DEMONSTRATE PAIR IN C++
        (Simple Pair, Nested Pair and Array of Pairs)
===========================================================
Description:
This program explains how to:
1. Declare and use a simple pair
2. Declare and access a nested pair
3. Create and use an array of pairs
===========================================================
*/

#include <iostream>
#include <utility> // Required for using pair
using namespace std;

int main()
{

    // ------------------------------
    // 1️⃣ Simple Pair Declaration
    // ------------------------------

    // Creating a pair of two integers
    pair<int, int> p1 = {1, 2};

    // Accessing first and second elements
    cout << "This is first element of p1 pair : " << p1.first << endl;
    cout << "This is second element of p1 pair : " << p1.second << endl;

    // -----------------------------------------
    // 2️⃣ Nested Pair (Pair inside another Pair)
    // -----------------------------------------

    // Outer pair:
    // First value = int
    // Second value = another pair<int,int>
    pair<int, pair<int, int>> p2 = {1, {2, 3}};

    // Accessing outer first element
    cout << "This is first element of p2 : " << p2.first << endl;

    // Accessing nested pair elements
    cout << "This is first element of nested p2 : " << p2.second.first << endl;
    cout << "This is second element of nested p2 : " << p2.second.second << endl;

    // -----------------------------------------
    // 3️⃣ Array of Pairs
    // -----------------------------------------

    // Creating an array of pairs
    pair<int, int> arr[] = {{1, 2}, {3, 4}, {5, 6}};

    // Accessing elements of pair array
    cout << "This is first element of arr[0] : " << arr[0].first << endl;
    cout << "This is second element of arr[0] : " << arr[0].second << endl;

    cout << "This is first element of arr[1] : " << arr[1].first << endl;
    cout << "This is second element of arr[1] : " << arr[1].second << endl;

    cout << "This is first element of arr[2] : " << arr[2].first << endl;
    cout << "This is second element of arr[2] : " << arr[2].second << endl;

    return 0;
}
