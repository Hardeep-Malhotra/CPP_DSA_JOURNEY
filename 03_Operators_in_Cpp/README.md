# 📘 Operators in C++

Operators are **symbols** that perform operations on **variables or values**.

### Example
```cpp
a + b
+ → Operator

a , b → Operands

📌 Topics Covered
Constants

Typecasting

Arithmetic Operators

Assignment Operators

Relational Operators

Logical Operators

Increment / Decrement Operators

Ternary Operator

sizeof Operator

Operator Precedence

🔥 Constants in C++
A constant is a value that cannot be changed once assigned.

✔ Ways to Declare Constants
1️⃣ Using const keyword (Recommended)

const int age = 18;
age = 20;   // ❌ Error
2️⃣ Using #define

#define PI 3.14
3️⃣ Literal Constants

int a = 10;   // 10 is a constant
🌀 Typecasting in C++
Typecasting is the process of converting one data type into another.

✔ Example

int a = 5;
float b = (float)a;

### 🔄 Implicit vs Explicit Typecasting

| Type | Meaning |
|------|---------|
| Implicit | Automatic conversion |
| Explicit | Manual conversion |


🧮 Example of Loss of Data

float x = 5.9;
int y = (int)x;
cout << y;   // 5
👉 Decimal part is lost.

### ➕ Arithmetic Operators

| Operator | Meaning |
|----------|---------|
| `+` | Addition |
| `-` | Subtraction |
| `*` | Multiplication |
| `/` | Division |
| `%` | Remainder (Modulus) |


Example

int a = 10, b = 3;
cout << a + b;
cout << a % b;

### 🟰 Assignment Operators

| Operator | Example | Meaning |
|----------|---------|---------|
| `=` | `a = 5` | Assign |
| `+=` | `a += 2` | `a = a + 2` |
| `-=` | `a -= 2` | `a = a - 2` |
| `*=` | `a *= 2` | `a = a * 2` |
| `/=` | `a /= 2` | `a = a / 2` |
| `%=` | `a %= 2` | `a = a % 2` |



### 🔁 Increment & Decrement Operators

| Type | Example | Meaning |
|------|---------|---------|
| Pre-increment | `++a` | Use after increase |
| Post-increment | `a++` | Use before increase |


Example

int a = 5;
cout << ++a;   // 6
cout << a++;   // 6

### 🔍 Relational Operators

| Operator | Meaning |
|----------|---------|
| `==` | Equal |
| `!=` | Not equal |
| `>` | Greater than |
| `<` | Less than |
| `>=` | Greater or equal |
| `<=` | Less or equal |


👉 Result is always true / false

### 🧠 Logical Operators

| Operator | Meaning |
|----------|---------|
| `&&` | Logical AND |
| `||` | Logical OR |
| `!` | Logical NOT |


Example

age >= 18 && citizen == true
❓ Ternary Operator
Short form of if-else.

Syntax

condition ? expression1 : expression2;
Example

int n = 5;
string result = (n % 2 == 0) ? "Even" : "Odd";
📏 sizeof Operator
Used to find memory size of a data type or variable.


cout << sizeof(int);
📌 Operator Precedence (Important)
Order: Highest → Lowest

### 📌 Operator Precedence (Highest → Lowest)

| Priority Order |
|----------------|
| `++`, `--` |
| `*`, `/`, `%` |
| `+`, `-` |
| `<`, `>`, `<=`, `>=` |
| `==`, `!=` |
| `&&` |
| `||` |
| `=` |


🧠 Why Operators Are Important?
✔ Build logic
✔ Perform calculations
✔ Control program flow
✔ Essential for DSA & problem solving

🚀 Next Topics
If-else statements

Loops

Functions

Arrays & Strings

Object-Oriented Programming

⭐ Author
Hardeep Singh
Maintained for mastering C++ Programming Fundamentals.

🙌 Contribute
You can contribute by adding:

More examples

Practice problems

Edge cases

Interview questions

✨ Pull Requests are welcome!