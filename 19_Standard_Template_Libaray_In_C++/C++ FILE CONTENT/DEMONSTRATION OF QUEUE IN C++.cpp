/*
===========================================================
            DEMONSTRATION OF QUEUE IN C++
===========================================================
Definition:
Queue is a container adapter that follows FIFO
(First In First Out) principle.

Operations Covered:
1. push()   -> Insert element at rear
2. pop()    -> Remove element from front
3. front()  -> Access front element
4. back()   -> Access last element
5. empty()  -> Check if queue is empty
6. size()   -> Get number of elements
===========================================================
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Creating a queue of integers
    queue<int> q;

    // ------------------------------------------------
    // 1️⃣ push() → Insert elements at rear
    // ------------------------------------------------
    q.push(10);
    q.push(20);
    q.push(30);

    cout << "Queue size after push operations: "
         << q.size() << endl;

    // ------------------------------------------------
    // 2️⃣ front() → Access first element
    // ------------------------------------------------
    cout << "Front element: " << q.front() << endl;

    // ------------------------------------------------
    // 3️⃣ back() → Access last element
    // ------------------------------------------------
    cout << "Back element: " << q.back() << endl;

    // ------------------------------------------------
    // 4️⃣ pop() → Remove front element
    // ------------------------------------------------
    q.pop();

    cout << "Front after pop(): "
         << q.front() << endl;

    // ------------------------------------------------
    // 5️⃣ Traversing Queue
    // (Queue does NOT support direct iteration)
    // So we remove elements one by one
    // ------------------------------------------------
    cout << "Elements in queue: ";

    while (!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }

    cout << endl;

    // ------------------------------------------------
    // 6️⃣ empty() → Check if queue is empty
    // ------------------------------------------------
    if (q.empty())
    {
        cout << "Queue is now empty." << endl;
    }

    return 0;
}
