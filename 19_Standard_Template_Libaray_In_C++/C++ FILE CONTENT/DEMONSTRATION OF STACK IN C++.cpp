/*
===========================================================
            DEMONSTRATION OF STACK IN C++
===========================================================
Definition:
Stack is a container adapter that follows LIFO
(Last In First Out) principle.

Operations Covered:
1. push()   -> Insert element at top
2. pop()    -> Remove top element
3. top()    -> Access top element
4. empty()  -> Check if stack is empty
5. size()   -> Get number of elements
===========================================================
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Creating a stack of integers
    stack<int> st;

    // ------------------------------------------------
    // 1️⃣ push() → Insert elements
    // ------------------------------------------------
    st.push(10);
    st.push(20);
    st.push(30);

    cout << "Stack size after push operations: "
         << st.size() << endl;

    // ------------------------------------------------
    // 2️⃣ top() → Access top element
    // ------------------------------------------------
    cout << "Top element: " << st.top() << endl;

    // ------------------------------------------------
    // 3️⃣ pop() → Remove top element
    // ------------------------------------------------
    st.pop();

    cout << "Top element after pop(): "
         << st.top() << endl;

    // ------------------------------------------------
    // 4️⃣ Traversing Stack
    // (Note: Stack does NOT support direct iteration)
    // So we use while loop and pop elements
    // ------------------------------------------------
    cout << "Elements in stack: ";

    while (!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }

    cout << endl;

    // ------------------------------------------------
    // 5️⃣ empty() → Check if stack is empty
    // ------------------------------------------------
    if (st.empty())
    {
        cout << "Stack is now empty." << endl;
    }

    return 0;
}
