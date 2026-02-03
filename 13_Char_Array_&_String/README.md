# 📘 Char Array & String 

This documentation explains the fundamental concepts of Char Arrays and Strings in C++ for academic learning, revision, and interview preparation.

---

## 1️⃣ `char` Data Type

### 📌 What is `char`?

* `char` is a **primitive data type** in C++
* Used to store **a single character**
* Characters are written in **single quotes (' ')**

### 📌 Size

* Size of `char` = **1 byte (8 bits)**

### 📌 Syntax

```
char ch;
char grade = 'A';
```

### 📌 Important Note

* Internally, `char` stores an **ASCII value**
* Example:

  * `'A'` → 65
  * `'a'` → 97

---

## 2️⃣ Character Array

### 📌 What is a Character Array?

* A collection of characters stored in **continuous memory**
* Used to represent **C-style strings**
* Ends with a **null character `\0`**

### 📌 Syntax

```
char name[20];
char word[] = {'H','E','L','L','O','\0'};
char city[] = "Delhi";
```

### 📌 Null Character (`\0`)

* Marks the **end of the string**
* Compiler uses it to determine string length

---

## 3️⃣ Input in Character Array

### 📌 Problem with `cin >>`

* Reads only **one word**
* Stops input at **space**

### 📌 Syntax

```
cin >> name;
```

### 📌 Taking Multiple Words Input

* To read full line including spaces

```
cin.getline(name, size);
```

---

## 4️⃣ Convert Character Array to Uppercase

### 📌 Concept

* Lowercase ASCII range: **97–122**
* Uppercase ASCII range: **65–90**
* Difference = **32**

### 📌 Rule

```
uppercase = lowercase - 32
```

### 📌 Syntax (Logic Only)

```
if(ch >= 'a' && ch <= 'z')
    ch = ch - 32;
```

---

## 5️⃣ Reverse a Character Array

### 📌 Concept

* Reverse characters by **swapping start and end positions**
* Uses **two-pointer approach**

### 📌 Steps

1. Find string length
2. Set `start = 0`, `end = length - 1`
3. Swap characters
4. Continue while `start < end`

### 📌 Syntax Idea

```
swap(arr[start], arr[end]);
```

---

## 6️⃣ Valid Palindrome

### 📌 What is a Palindrome?

* A string that reads the **same forward and backward**

Examples:

* `madam`
* `naman`

### 📌 Concept

* Compare characters from start and end
* Or reverse string and compare with original

### 📌 Conditions

* Case-insensitive comparison
* Optional: ignore non-alphabet characters

---

## 7️⃣ `<cstring>` Functions

### 📌 Header File

```
#include <cstring>
```

### 📌 Common Functions

| Function   | Purpose             |
| ---------- | ------------------- |
| `strlen()` | Find string length  |
| `strcpy()` | Copy string         |
| `strcat()` | Concatenate strings |
| `strcmp()` | Compare strings     |

### 📌 Syntax

```
strlen(str);
strcpy(dest, src);
strcat(str1, str2);
strcmp(str1, str2);
```

### 📌 `strcmp()` Return Values

* `0` → strings are equal
* `> 0` → first string is greater
* `< 0` → first string is smaller

---

## 8️⃣ C++ String (`std::string`)

### 📌 What is `string`?

* `string` is a **class** in C++
* More powerful and safer than char arrays

### 📌 Header

```
#include <string>
```

### 📌 Syntax

```
string name;
string city = "Amritsar";
```

### 📌 Advantages

* Dynamic size
* Built-in functions
* Easy input/output

---

## 9️⃣ For-Each Loop (Range-Based Loop)

### 📌 What is it?

* Used to iterate over each element in a collection

### 📌 Syntax

```
for(char ch : str)
{
}
```

### 📌 Use Case

* Clean and readable traversal
* Mostly for read-only access

---

## 🔟 String Member Functions

### 📌 Common Functions

| Function      | Purpose                 |
| ------------- | ----------------------- |
| `length()`    | Get length              |
| `size()`      | Get length              |
| `append()`    | Add string              |
| `push_back()` | Add character           |
| `pop_back()`  | Remove last character   |
| `find()`      | Search character/string |
| `substr()`    | Extract substring       |

### 📌 Syntax

```
str.length();
str.append("abc");
str.find('a');
str.substr(0, 3);
```

---

## 1️⃣1️⃣ String Anagram

### 📌 What is an Anagram?

* Two strings containing the **same characters**
* Order of characters does not matter

Examples:

* `listen` & `silent`
* `race` & `care`

### 📌 Conditions

* Both strings must have the same length
* Character frequency must be identical

### 📌 Common Approaches

1. Sorting method
2. Frequency array method

---

## ✅ Char Array vs String (Comparison)

| Feature   | Char Array  | String           |
| --------- | ----------- | ---------------- |
| Type      | Primitive   | Class            |
| Size      | Fixed       | Dynamic          |
| Safety    | Low         | High             |
| Functions | `<cstring>` | Member functions |

---

## 🎯 Final Notes

* Char arrays help in understanding **low-level memory concepts**
* `std::string` is preferred for **real-world C++ programming**
* Strong command over both is useful for **interviews and exams**

---


🚀 Author

Hardeep Singh
BCA Student | DSA with C++ Learner | Aspiring Software Engineer

⭐ If you find this helpful
Give the repo a star 🙂
```