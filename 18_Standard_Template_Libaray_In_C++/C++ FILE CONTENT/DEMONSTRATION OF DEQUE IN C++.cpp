/*
===========================================================
        DEMONSTRATION OF DEQUE IN C++
===========================================================
Functions Covered:
push_back, push_front, pop_back, pop_front, traversal
===========================================================
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{

        deque<int> dq;

        dq.push_back(10);
        dq.push_back(20);
        dq.push_front(5);
        dq.push_front(2);

        cout << "After insertion: ";
        for (auto val : dq)
        {
                cout << val << " ";
        }
        cout << endl;

        dq.pop_back();
        dq.pop_front();

        cout << "After deletion: ";
        for (auto val : dq)
        {
                cout << val << " ";
        }

        return 0;
}
