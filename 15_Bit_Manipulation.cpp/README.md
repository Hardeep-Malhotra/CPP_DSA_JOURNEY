# 📘 Bit Manipulation in C++

This repository contains complete C++ Bit Manipulation concepts with:

Basic Bitwise Operators

Bit Masking Techniques

Important Bit Problems

Optimized Algorithms (Binary Exponentiation)

All programs are written with clear explanations and practical examples.

## 📌 1️⃣ Basic Bitwise Operators
🔹 AND (&)
3 & 5  // Output: 1

🔹 OR (|)
3 | 5  // Output: 7

🔹 XOR (^)
3 ^ 5  // Output: 6

🔹 NOT (~)
~6  // Output: -7

🔹 Left Shift (<<)
7 << 2  // Output: 28

🔹 Right Shift (>>)
8 >> 1  // Output: 4

## 📌 2️⃣ Check Odd or Even
Logic

If last bit is 1 → Odd

If last bit is 0 → Even

if (num & 1)
    cout << "Odd";
else
    cout << "Even";


Time Complexity: O(1)

## 📌 3️⃣ Get i-th Bit
Formula
(n & (1 << i))


Returns:

1 → Bit is ON

0 → Bit is OFF

Time Complexity: O(1)

## 📌 4️⃣ Set i-th Bit
Formula
n | (1 << i)


Makes the i-th bit equal to 1.

## 📌 5️⃣ Clear i-th Bit
Formula
n & ~(1 << i)


Makes the i-th bit equal to 0.

## 📌 6️⃣ Update i-th Bit
Formula
n = (n & ~(1 << i)) | (val << i)


Used to set bit as 0 or 1.

## 📌 7️⃣ Clear Last i Bits
Formula
mask = (~0) << i
result = n & mask


Clears rightmost i bits.

## 📌 8️⃣ Check Power of 2
Logic
n > 0 && (n & (n - 1)) == 0


✔ Power of 2 → Only one set bit
✔ Time Complexity → O(1)

## 📌 9️⃣ Count Set Bits
Method Used

Check last bit using n & 1

Right shift until number becomes 0

while (num > 0)
{
    count += (num & 1);
    num = num >> 1;
}


Time Complexity: O(log n)

## 📌 🔟 Fast Exponentiation (Binary Exponentiation)
Time Complexity: O(log n)
Space Complexity: O(1)
long long fastPower(long long a, long long n)
{
    long long ans = 1;

    while (n > 0)
    {
        if (n & 1)
            ans = ans * a;

        a = a * a;
        n = n >> 1;
    }

    return ans;
}


Example:

fastPower(2, 10) → 1024

🚀 Why Bit Manipulation is Important?

✔ Used in Competitive Programming
✔ Used in System Programming
✔ Optimizes time complexity
✔ Frequently asked in interviews (Microsoft / Amazon level)

🎯 Topics Covered

Bitwise AND, OR, XOR, NOT

Bit Masking

Set / Clear / Update Bits

Power of 2 Check

Count Set Bits

Binary Exponentiation



🚀 Author

Hardeep Singh
BCA Student | DSA with C++ Learner | Aspiring Software Engineer

⭐ If you find this helpful
Give the repo a star 🙂
```

