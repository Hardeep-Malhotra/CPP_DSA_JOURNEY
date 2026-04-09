/************************************************************
 * Program Name : Get i-th Bit using Bit Manipulation
 * Language     : C++
 * Topic        : Bit Manipulation
 *
 * Description  :
 * This program checks whether the bit at position 'i'
 * in a given number 'n' is ON (1) or OFF (0).
 *
 * Concept Used :
 * - Binary representation
 * - Left shift operator (<<)
 * - Bitwise AND operator (&)
 *
 * Key Idea :
 * 1 is stored internally as binary: 00000001
 * Left shifting (1 << i) moves this bit to i-th position.
 * AND operation checks if the same position in number 'n'
 * also has bit 1 or not.
 *
 * Output Rule :
 * - If result is non-zero → bit is ON → return 1
 * - If result is zero     → bit is OFF → return 0
 ************************************************************/

#include <iostream>
using namespace std;

// Function to get i-th bit of number n
int getIthBit(int n, int i)
{
    // Step 1: Create bitmask by shifting 1 to i-th position
    // Example: i = 2 → 00000001 << 2 = 00000100
    int bitMask = 1 << i;

    // Step 2: AND number with bitmask
    // If result is non-zero, bit is ON
    if (n & bitMask)
        return 1;
    else
        return 0;
}

int main()
{
    int n = 6; // Example number
    int i = 2; // Bit position to check

    // Function call
    int result = getIthBit(n, i);

    // Output result
    cout << "The " << i << "th bit of " << n << " is: " << result << endl;

    return 0;
}

/************************************************************
 * Program Name : Set i-th Bit using Bit Manipulation
 * Language     : C++
 * Topic        : Bit Manipulation
 *
 * Description  :
 * This program sets (turns ON) the bit at position 'i'
 * in a given number 'num'.
 *
 * Meaning of Set i-th Bit:
 * - Make the i-th bit equal to 1
 * - If it is already 1, it remains 1
 *
 * Formula Used :
 * num | (1 << i)
 *
 * Example:
 * num = 8  → 00001000
 * i   = 1
 * Result   → 00001010 (10)
 ************************************************************/

#include <iostream>
using namespace std;

// Function to set i-th bit
int setIthBit(int num, int i)
{
    // Create bitmask by shifting 1 to i-th position
    int bitMask = 1 << i;

    // OR operation sets the i-th bit
    return num | bitMask;
}

int main()
{
    int num = 8; // Given number
    int i = 1;   // Bit position to set

    cout << "Number after setting " << i << "th bit: ";
    cout << setIthBit(num, i) << endl;

    return 0;
}

/************************************************************
 * Program Name : Clear i-th Bit using Bit Manipulation
 * Language     : C++
 * Topic        : Bit Manipulation
 *
 * Description  :
 * This program clears (turns OFF) the bit at position 'i'
 * in a given number 'num'.
 *
 * Meaning of Clear i-th Bit:
 * - Make the i-th bit equal to 0
 * - If it is already 0, it remains 0
 *
 * Formula Used :
 * num & ~(1 << i)
 *
 * Example:
 * num = 6  → 00000110
 * i   = 1
 * Result   → 00000100 (4)
 ************************************************************/

#include <iostream>
using namespace std;

// Function to clear i-th bit
int clearIthBit(int num, int i)
{
    // Create bitmask and invert it
    int bitMask = ~(1 << i);

    // AND operation clears the i-th bit
    return num & bitMask;
}

int main()
{
    int num = 6; // Given number
    int i = 1;   // Bit position to clear

    cout << "Number after clearing " << i << "th bit: ";
    cout << clearIthBit(num, i) << endl;

    return 0;
}

/************************************************************
 * Program Name : Check Power of 2
 * Language     : C++
 * Topic        : Bit Manipulation
 *
 * Description  :
 * This program checks whether a given number
 * is a power of 2 or not.
 *
 * Logic Used :
 * - A number is a power of 2 if it has only one set bit
 * - Formula: n & (n - 1)
 *
 * Condition:
 * - n must be greater than 0
 *
 * Examples:
 * 8  → Power of 2
 * 6  → Not Power of 2
 ************************************************************/

#include <iostream>
using namespace std;

// Function to check power of 2
bool isPowerOfTwo(int n)
{
    // n > 0 is mandatory
    if (n > 0 && (n & (n - 1)) == 0)
        return true;
    else
        return false;
}

int main()
{
    int n = 8;

    if (isPowerOfTwo(n))
        cout << n << " is a Power of 2" << endl;
    else
        cout << n << " is NOT a Power of 2" << endl;

    return 0;
}

/*******************************************************
 * Program Name : Update i-th Bit
 * Language     : C++
 * Topic        : Bit Manipulation
 *
 * Description  :
 * This program updates (sets or clears) the i-th bit
 * of a given number based on the value provided.
 *
 * Formula Used :
 *   n = (n & ~(1 << i)) | (val << i)
 *
 * Example:
 *   num = 7  (00000111)
 *   i   = 2
 *   val = 0
 *   Output = 3 (00000011)
 *******************************************************/

#include <iostream>
using namespace std;

/*
 * Function Name : updateIthBit
 * Purpose       : Updates the i-th bit of a number
 * Parameters    :
 *   num -> given number
 *   i   -> bit position (0-based index)
 *   val -> value to set (0 or 1)
 * Returns       :
 *   Updated number after modifying i-th bit
 */
int updateIthBit(int num, int i, int val)
{
    // Step 1: Clear the i-th bit
    num = num & ~(1 << i);

    // Step 2: Set the i-th bit according to 'val'
    num = num | (val << i);

    return num;
}

int main()
{
    int num = 7;
    int i = 2;
    int val = 0;

    int result = updateIthBit(num, i, val);

    cout << "Updated Number: " << result << endl;

    return 0;
}

/*******************************************************
 * Program Name : Clear Last i Bits
 * Language     : C++
 * Topic        : Bit Manipulation
 *
 * Description  :
 * This program clears (sets to 0) the last i bits
 * of a given number using bitwise operations.
 *
 * Logic Used   :
 *   mask = (~0) << i
 *   result = num & mask
 *
 * Example:
 *   num = 7  (00000111)
 *   i   = 2
 *   Output = 4 (00000100)
 *******************************************************/

#include <iostream>
using namespace std;

/*
 * Function Name : clearIBits
 * Purpose       : Clears the rightmost i bits of a number
 * Parameters    :
 *   num -> given number
 *   i   -> number of bits to clear from right
 * Returns       :
 *   void (prints the updated number)
 */
void clearIBits(int num, int i)
{
    // Create a mask with left bits as 1 and right i bits as 0
    int bitMask = (~0) << i;

    // Clear the last i bits using AND operation
    num = num & bitMask;

    // Print the result
    cout << "Result after clearing last " << i
         << " bits: " << num << endl;
}

int main()
{
    int num = 7;
    int i = 2;

    clearIBits(num, i);

    return 0;
}

/*******************************************************
 * Program Name : Count Set Bits
 * Language     : C++
 * Topic        : Bit Manipulation
 *
 * Description  :
 * This program counts the number of set bits (1s)
 * in the binary representation of a given number.
 *
 * Logic Used   :
 *   - Check the last bit using (num & 1)
 *   - Add it to count
 *   - Right shift the number by 1
 *
 * Example:
 *   num = 7  (00000111)
 *   Output = 3
 *******************************************************/

#include <iostream>
using namespace std;

/*
 * Function Name : countSetBits
 * Purpose       : Counts number of 1s in binary form of a number
 * Parameter     :
 *   num -> given integer number
 * Returns       :
 *   Number of set bits
 */
int countSetBits(int num)
{
    int count = 0;

    // Loop until number becomes 0
    while (num > 0)
    {
        // Check last bit
        int lastBit = num & 1;

        // Add last bit to count
        count += lastBit;

        // Right shift number by 1
        num = num >> 1;
    }

    return count;
}

int main()
{
    int num = 7;

    cout << "Number of set bits: "
         << countSetBits(num) << endl;

    return 0;
}

#include <iostream>
using namespace std;
