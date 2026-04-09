/*************************************************
 * Program Name : Vector Internal Implementation
 * Language     : C++
 * Description  :
 * This program demonstrates how vector manages
 * its SIZE and CAPACITY internally.
 *
 * It shows:
 * 1. Initial size and capacity
 * 2. Reallocation on push_back
 * 3. Size & capacity change behavior
 *************************************************/

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    /*************** VECTOR INITIALIZATION ***************/
    // Vector initialized with 4 elements
    vector<int> v = {1, 2, 3, 4};

    /*************** INITIAL STATE ***************/
    // size = number of elements present
    // capacity = total allocated space
    cout << "Initial size: " << v.size() << endl;
    cout << "Initial capacity: " << v.capacity() << endl;

    /*************** PUSH BACK (REALLOCATION CASE) ***************/
    // At this point:
    // size == capacity (4 == 4)
    // So pushing a new element will cause reallocation
    v.push_back(5);

    cout << "\nAfter push_back(5):" << endl;
    cout << "Size: " << v.size() << endl;         // size becomes 5
    cout << "Capacity: " << v.capacity() << endl; // capacity usually doubles (4 -> 8)

    /*************** PUSH BACK (NO REALLOCATION) ***************/
    // Capacity is already available
    // So elements are added directly
    v.push_back(6);
    v.push_back(7);

    cout << "\nAfter push_back(6) & push_back(7):" << endl;
    cout << "Size: " << v.size() << endl;         // size becomes 7
    cout << "Capacity: " << v.capacity() << endl; // capacity remains same

    /*************** PRINTING VECTOR ELEMENTS ***************/
    cout << "\nVector Elements: ";
    for (int x : v)
        cout << x << " ";

    return 0;
}
