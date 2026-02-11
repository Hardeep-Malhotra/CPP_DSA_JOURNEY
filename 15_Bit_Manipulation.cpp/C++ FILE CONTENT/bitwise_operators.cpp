/************************************************************
 * Program Name : Bitwise Operators in C++
 * Language     : C++
 * Topic        : Bit Manipulation
 *
 * Description  :
 * This file demonstrates all basic bitwise operators:
 * AND, OR, XOR, NOT, Left Shift, Right Shift
 * along with practice questions and real use-cases.
 *
 * Note:
 * Only ONE main() should be active at a time.
 ************************************************************/

#include <iostream>
using namespace std;

/******************** BITWISE AND (&) ********************/

int main()
{
    // 3 = 011
    // 5 = 101
    // --------
    // & = 001  → 1
    cout << (3 & 5) << endl;
    return 0;
}


/******************** BITWISE OR (|) ********************/

int main()
{
    // 3 = 011
    // 5 = 101
    // --------
    // | = 111  → 7
    cout << (3 | 5) << endl;
    return 0;
}


/******************** BITWISE XOR (^) ********************/

int main()
{
    // 3 = 011
    // 5 = 101
    // --------
    // ^ = 110  → 6
    cout << (3 ^ 5) << endl;
    return 0;
}


/******************** ONE'S COMPLEMENT (~) ********************/

int main()
{
    // 6 = 00000110
    // ~6 = 11111001  (2's complement system)
    // Result = -7
    cout << (~6) << endl;
    return 0;
}


/******************** LEFT SHIFT (<<) ********************/

int main()
{
    // 7 = 00000111
    // 7 << 2 = 00011100 → 28
    cout << (7 << 2) << endl;
    return 0;
}


/******************** RIGHT SHIFT (>>) ********************/

int main()
{
    // 8 = 00001000
    // 8 >> 1 = 00000100 → 4
    cout << (8 >> 1) << endl;
    return 0;
}