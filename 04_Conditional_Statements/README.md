# 📘 Conditional Statements in C++

Conditional statements allow a program to **make decisions** based on certain conditions.  
In simple words, they help the program choose **what to do and when to do it**.

In C++, decision-making is done using **conditional statements**.

---

## 🧠 Real-Life Examples of Conditions

| Scenario | Condition |
|--------|----------|
| 🏧 ATM | If balance ≥ withdrawal amount → allow cash |
| 📺 YouTube | If age ≥ 18 → show video |
| 🔐 Login | If password is correct → login success |
| 🚦 Traffic Signal | If red → stop, if green → go |

👉 Just like real life, programs also check conditions before taking actions.

---

## 🔹 Types of Conditional Statements in C++

| No. | Statement | Purpose |
|----|----------|--------|
| 1 | `if` | Execute code when condition is true |
| 2 | `if - else` | Choose between two options |
| 3 | `else if` ladder | Multiple conditions |
| 4 | `nested if` | if inside another if |
| 5 | `switch` | Multiple fixed choices |
| 6 | Ternary operator `?:` | Short form of if-else |

---

## 1️⃣ `if` Statement

Executes code **only if condition is true**.

### Syntax
```cpp
if(condition) {
    // code
}
Example

int age = 18;

if(age >= 18) {
    cout << "Eligible to vote";
}
✔ If condition is false → nothing happens.

2️⃣ if - else Statement
Used when there are two choices.

Syntax

if(condition) {
    // true block
} else {
    // false block
}
Example

int marks = 40;

if(marks >= 33) {
    cout << "Pass";
} else {
    cout << "Fail";
}
3️⃣ else if Ladder
Used when there are multiple conditions.

Syntax

if(condition1) {
    // code
}
else if(condition2) {
    // code
}
else {
    // default
}
Example

int marks = 85;

if(marks >= 90) {
    cout << "Grade A";
}
else if(marks >= 75) {
    cout << "Grade B";
}
else if(marks >= 50) {
    cout << "Grade C";
}
else {
    cout << "Fail";
}
👉 Conditions are checked top to bottom.

4️⃣ Nested if
An if statement inside another if.

Example

int age = 20;
bool hasID = true;

if(age >= 18) {
    if(hasID) {
        cout << "Entry Allowed";
    }
}
✔ Used when multiple dependent conditions exist.

5️⃣ switch Statement
Used when comparing one variable with fixed values.

Syntax

switch(expression) {
    case value1:
        // code
        break;
    case value2:
        // code
        break;
    default:
        // code
}
Example

int day = 3;

switch(day) {
    case 1:
        cout << "Monday";
        break;
    case 2:
        cout << "Tuesday";
        break;
    case 3:
        cout << "Wednesday";
        break;
    default:
        cout << "Invalid Day";
}
⚠ break is important to stop execution.

6️⃣ Ternary Operator ?:
Short form of if-else.

Syntax

condition ? expression1 : expression2;
Example

int n = 5;

string result = (n % 2 == 0) ? "Even" : "Odd";
cout << result;
✔ Useful for simple decisions.

## 🆚 Comparison Table

| Statement   | Best Use Case          |
|------------|------------------------|
| `if`        | Single condition       |
| `if-else`   | Two outcomes           |
| `else-if`   | Multiple ranges        |
| `nested if` | Dependent checks       |
| `switch`    | Fixed options          |
| `ternary`   | Short conditions       |


🎯 Why Conditional Statements are Important?
✔ Control program flow
✔ Make programs intelligent
✔ Handle real-life logic
✔ Essential for DSA & problem-solving

🧠 Practice Questions
Try writing C++ programs for:

Check even or odd

Find largest of three numbers

Check leap year

Simple calculator using switch

Login system (username & password)

⭐ Next Topics

Loops (for, while, do-while)

Control statements (break, continue)

Functions

Arrays & Strings

👨‍💻 Author
Maintained by Hardeep Singh for mastering C++ fundamentals.

🚀 Happy Coding!