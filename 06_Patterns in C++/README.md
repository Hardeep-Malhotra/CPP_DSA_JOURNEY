# 📘 Patterns in C++ (In-Depth Guide)

Pattern questions are considered the **foundation of programming**.  
They help beginners and intermediate learners build **strong logic**, improve thinking ability, and gain confidence with loops.

---

## 🤔 Why are Pattern Problems Important?

By solving pattern programs, you learn:

- ✅ **Practical use of nested loops**
- ✅ **Clear understanding of rows and columns**
- ✅ **Strong logic-building skills**
- ✅ **Handling spaces and stars correctly**
- ✅ **Preparation for interviews & competitive programming**

👉 Almost **every programming language** follows the same logic for patterns.

---

## 🔁 Nested Loops (Most Important Concept)

**Nested loop** = a loop inside another loop.

```cpp
for(int i = 1; i <= 3; i++) {
    for(int j = 1; j <= 3; j++) {
        cout << "* ";
    }
    cout << endl;
}
🖨 Output

* * *
* * *
* * *

🧠 Logic Explanation
Outer loop (i) → controls rows

Inner loop (j) → controls columns

👉 Whenever you solve a pattern:

rows → outer loop

columns → inner loop

⭐ Star Square Pattern
Pattern

* * *
* * *
* * *
Code

int n = 3;
for(int i = 1; i <= n; i++) {
    for(int j = 1; j <= n; j++) {
        cout << "* ";
    }
    cout << endl;
}
📌 Observation
Rows = n

Columns = n

Every row has the same number of stars

🔻 Inverted Star Pattern
Pattern

* * *
* *
*
Code

int n = 3;
for(int i = n; i >= 1; i--) {
    for(int j = 1; j <= i; j++) {
        cout << "* ";
    }
    cout << endl;
}
📌 Logic
Stars decrease in each next row

Inner loop condition = j <= i

⛰ Half Pyramid Pattern
Pattern

*
* *
* * *
* * * *
Code

int n = 4;
for(int i = 1; i <= n; i++) {
    for(int j = 1; j <= i; j++) {
        cout << "* ";
    }
    cout << endl;
}
📌 Key Idea
Row number = number of stars

Row 1 → 1 star

Row 2 → 2 stars …

🔡 Character Pyramid Pattern
Pattern

A
A B
A B C
A B C D
Code

int n = 4;
for(int i = 1; i <= n; i++) {
    char ch = 'A';
    for(int j = 1; j <= i; j++) {
        cout << ch << " ";
        ch++;
    }
    cout << endl;
}
📌 Logic
Each row starts with A

Characters increase sequentially

🟦 Hollow Rectangle Pattern
Pattern

* * * * *
*       *
*       *
* * * * *
Code

int rows = 4, cols = 5;
for(int i = 1; i <= rows; i++) {
    for(int j = 1; j <= cols; j++) {
        if(i == 1 || i == rows || j == 1 || j == cols)
            cout << "* ";
        else
            cout << "  ";
    }
    cout << endl;
}

📌 Important Condition
Stars on the border

Spaces inside

🔺 Inverted & Rotated Half Pyramid
Pattern

      *
    * *
  * * *
* * * *
Code

int n = 4;
for(int i = 1; i <= n; i++) {
    for(int s = 1; s <= n - i; s++)
        cout << "  ";
    for(int j = 1; j <= i; j++)
        cout << "* ";
    cout << endl;
}
📌 Two Parts
Spaces = n - i

Stars = i

🔢 Floyd’s Triangle
Pattern

1
2 3
4 5 6
7 8 9 10

Code

int n = 4;
int num = 1;
for(int i = 1; i <= n; i++) {
    for(int j = 1; j <= i; j++) {
        cout << num++ << " ";
    }
    cout << endl;
}
📌 Logic
Numbers increase continuously

💎 Diamond Pattern
Pattern

   *
  ***
 *****
*******
 *****
  ***
   
Code

int n = 4;

// upper part
for(int i = 1; i <= n; i++) {
    for(int s = 1; s <= n - i; s++) cout << " ";
    for(int j = 1; j <= 2*i-1; j++) cout << "*";
    cout << endl;
}

// lower part
for(int i = n-1; i >= 1; i--) {
    for(int s = 1; s <= n - i; s++) cout << " ";
    for(int j = 1; j <= 2*i-1; j++) cout << "*";
    cout << endl;
}
📌 Diamond = Upper Pyramid + Inverted Pyramid

🦋 Butterfly Pattern
Pattern

*      *
**    **
***  ***
********
***  ***
**    **
*      *

Code

int n = 4;

// upper part
for(int i = 1; i <= n; i++) {
    for(int j = 1; j <= i; j++) cout << "*";
    for(int s = 1; s <= 2*(n-i); s++) cout << " ";
    for(int j = 1; j <= i; j++) cout << "*";
    cout << endl;
}

// lower part
for(int i = n; i >= 1; i--) {
    for(int j = 1; j <= i; j++) cout << "*";
    for(int s = 1; s <= 2*(n-i); s++) cout << " ";
    for(int j = 1; j <= i; j++) cout << "*";
    cout << endl;
}
🧠 Master Strategy: How to Solve Any Pattern
✔ Identify the number of rows
✔ For each row, determine:

Number of stars

Number of spaces

Number / character logic

✔ Draw the pattern on paper
✔ Dry run first, then write code

🎯 Practice Questions (Must Try)
Hollow Pyramid

Numeric Half Pyramid

0–1 Triangle

Palindromic Pyramid

Hourglass Star Pattern

Hollow Diamond

## ✅ Summary

| Concept | Key Idea |
|--------|----------|
| Nested Loop | Loop inside another loop |
| Outer Loop | Controls rows |
| Inner Loop | Controls columns |
| Spaces | Alignment control |
| Stars / Numbers | Visible pattern |






**👨‍💻 Author**
Maintained by Hardeep Singh for mastering C++ fundamentals.

🚀 Happy Coding!