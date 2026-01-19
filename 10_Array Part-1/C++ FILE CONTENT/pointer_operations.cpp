// ===============================
// POINTER ARITHMETIC PRACTICE
// ===============================

#include <iostream>
using namespace std;

// ------------------------------------
// 1) Increment & Decrement Operators
// ptr++, ++ptr, ptr--, --ptr
// ------------------------------------
void incrementDecrementDemo()
{
    cout << "\n--- Pointer Increment / Decrement ---\n";

    int arr[] = {10, 20, 30, 40};
    int *ptr = arr; // ptr points to arr[0]

    cout << "Initial Address: " << ptr << endl;
    cout << "Value: " << *ptr << endl;

    ptr++; // Move to next element
    cout << "After ptr++ Address: " << ptr << endl;
    cout << "Value: " << *ptr << endl;

    ptr--; // Move back
    cout << "After ptr-- Address: " << ptr << endl;
    cout << "Value: " << *ptr << endl;
}

// ------------------------------------
// 2) Addition & Subtraction of Constant
// ptr + k , ptr - k
// ------------------------------------
void constantAdditionDemo()
{
    cout << "\n--- Pointer + Constant / - Constant ---\n";

    int arr[] = {10, 20, 30, 40, 50, 60};
    int *ptr = arr;

    cout << "Initial Address: " << ptr << endl;
    cout << "Value: " << *ptr << endl;

    ptr = ptr + 3; // Jump 3 elements ahead
    cout << "After ptr + 3 Address: " << ptr << endl;
    cout << "Value: " << *ptr << endl;

    ptr = ptr - 3; // Back to start
    cout << "After ptr - 3 Address: " << ptr << endl;
    cout << "Value: " << *ptr << endl;
}

// ------------------------------------
// 3) Subtraction of Two Pointers
// p1 - p2
// ------------------------------------
void pointerSubtractionDemo()
{
    cout << "\n--- Pointer - Pointer ---\n";

    int arr[] = {10, 20, 30, 40, 50};

    int *p1 = &arr[4]; // 50
    int *p2 = &arr[1]; // 20

    cout << "Difference (p1 - p2): " << p1 - p2 << endl;
}

// ------------------------------------
// 4) Pointer Comparison
// ------------------------------------
void pointerComparisonDemo()
{
    cout << "\n--- Pointer Comparison ---\n";

    int arr[] = {10, 20, 30, 40, 50};

    int *p1 = &arr[4];
    int *p2 = &arr[1];

    if (p1 == p2)
        cout << "p1 and p2 are equal\n";
    else
        cout << "p1 and p2 are NOT equal\n";

    if (p1 > p2)
        cout << "p1 points to higher address than p2\n";

    if (p1 < p2)
        cout << "p1 points to lower address than p2\n";
}

// ------------------------------------
// MAIN FUNCTION
// ------------------------------------
int main()
{
    incrementDecrementDemo();
    constantAdditionDemo();
    pointerSubtractionDemo();
    pointerComparisonDemo();

    return 0;
}
