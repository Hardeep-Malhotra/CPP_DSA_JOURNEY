# 📘 Binary Number System (In-Depth Guide)

The Binary Number System is the **foundation of programming and computer science**.  
Computers understand **only 0 and 1**, which is why the binary system is extremely important.

---

## 🔹 What is a Number System?
A number system is a way to represent numbers.

Common number systems:
- **Decimal (Base 10)** → Digits: 0–9  
- **Binary (Base 2)** → Digits: 0, 1  
- **Octal (Base 8)** → Digits: 0–7  
- **Hexadecimal (Base 16)** → Digits: 0–9, A–F  

---

## 🔹 What is the Binary Number System?
The Binary Number System has **base = 2**.

Allowed digits:
0 and 1

shell
Copy code

### Example:
Binary: 1011
Decimal: 11

yaml
Copy code

👉 Internally, a computer stores everything in binary:
- Numbers
- Characters
- Images
- Instructions

---

## 🔹 Place Value in Binary
Each digit in a binary number represents a **power of 2**.

| Position (from right) | Power | Value |
|----------------------|-------|-------|
| 1st | 2⁰ | 1 |
| 2nd | 2¹ | 2 |
| 3rd | 2² | 4 |
| 4th | 2³ | 8 |

### Example:
Binary = 1011
= 1×2³ + 0×2² + 1×2¹ + 1×2⁰
= 8 + 0 + 2 + 1
= 11 (Decimal)

yaml
Copy code

---

## 🔹 Convert Binary to Decimal (Concept)

### Steps:
1. Start from the rightmost digit
2. Multiply each digit by the corresponding power of 2
3. Add all the values

### Example:
Binary: 111
= 1×2² + 1×2¹ + 1×2⁰
= 4 + 2 + 1
= 7

csharp
Copy code

---

## 🔹 Binary to Decimal Code (C++)

```cpp
#include <iostream>
using namespace std;

int BinToDec(int BinNum)
{
    int n = BinNum;
    int dec = 0;
    int pow = 1; // 2^0

    while (n > 0)
    {
        int lastDigit = n % 10;
        dec += lastDigit * pow;
        pow *= 2;
        n /= 10;
    }
    return dec;
}

int main()
{
    cout << BinToDec(111);
}
🔹 Convert Decimal to Binary (Concept)
Steps:
Divide the number by 2

Store the remainder

Repeat until the number becomes 0

Write remainders in reverse order

Example:
makefile

Decimal: 7

7 ÷ 2 = 3 remainder 1
3 ÷ 2 = 1 remainder 1
1 ÷ 2 = 0 remainder 1

Binary = 111
🔹 Decimal to Binary Code (C++)


#include <iostream>
using namespace std;

int DecToBin(int DecNum)
{
    int n = DecNum;
    int bin = 0;
    int pow = 1;

    while (n > 0)
    {
        int lastDigit = n % 2;
        bin += lastDigit * pow;
        pow *= 10;
        n /= 2;
    }
    return bin;
}

int main()
{
    cout << DecToBin(7);
}
🔹 Data Type Modifiers (In-Depth)
🔸 int Size
On most systems:


int = 4 bytes = 32 bits
🔸 Signed int (default)
Can store positive and negative values

Range:


-2^31 to (2^31 - 1)
Example:


-2147483648 to 2147483647
🔸 Unsigned int
Stores only non-negative values

Range:

0 to (2^32 - 1)

Example:

0 to 4294967295

Example Code:

unsigned int x = 10;
int y = -5;
🔹 Why Is the Negative Range One Value Larger?
C++ uses the Two’s Complement system.

Because of this:

The negative range has one extra value

+2^31 does not exist for signed integers

🔹 Practice Questions 📝
Binary to Decimal
101

1001

11010

111111

Decimal to Binary
5

10

25

64

Conceptual Questions
Why does binary use only 0 and 1?

What is integer overflow?

When should we use unsigned int?

🔹 Common Mistakes ⚠️
Not validating binary input

Comparing function names instead of return values

Ignoring overflow and underflow

🔹 Interview Tips 🔥
Binary conversion questions are very common

Always perform a dry run

Understand the Two’s Complement concept clearly

✅ Conclusion
Understanding the binary number system helps in:

Building strong programming logic

Making DSA easier

Learning low-level computer concepts


