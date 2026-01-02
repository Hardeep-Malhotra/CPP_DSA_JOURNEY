# ▶️ How to Run a C++ Program

This guide explains **how to compile and run a C++ program** using the **GCC (g++) compiler** on **Windows and Linux** systems.

---

## 📌 Prerequisites

Before running a C++ program, make sure:

- You have **GCC / g++ compiler installed**
- You have **basic command line knowledge**
- Your file is saved with `.cpp` extension

---

## 📝 Step 1: Create a C++ File

Create a file and save it with a `.cpp` extension.

### Example:
```cpp
hello.cpp
Sample Code:

#include <iostream>
using namespace std;

int main() {
    cout << "Hello, C++!";
    return 0;
}
🖥️ Step 2: Open Terminal / Command Prompt
On Windows:
Press Win + R

Type cmd and press Enter
OR

Use PowerShell / Git Bash

On Linux:
Open Terminal

⚙️ Step 3: Compile the Program
Use the g++ compiler to compile your .cpp file.

Syntax:

g++ filename.cpp -o output
Example:

g++ hello.cpp -o hello
Explanation:
g++ → C++ compiler

hello.cpp → Source file

-o → Output flag

hello → Executable file name

▶️ Step 4: Run the Program
On Windows:

hello.exe
On Linux / macOS:
./hello

## 📂 Output Files Generated

| OS | Output File |
|----|------------|
| Windows | `hello.exe` |
| Linux | `hello` |
| macOS | `hello` |



❌ Common Errors & Fixes
❗ g++ not recognized

'g++' is not recognized as an internal or external command
✅ Fix:

Install MinGW / GCC

Add bin folder to PATH environment variable

❗ File not found

fatal error: hello.cpp: No such file or directory
✅ Fix:

Make sure you are in the correct folder

Use cd foldername to navigate

💡 Tips
Always compile before running

Use meaningful output file names

Avoid spaces in file names

Use .cpp extension only

🚀 Next Steps
After learning how to run a C++ program, move to:

Input / Output (cin, cout)

Variables & Data Types

Operators

Conditional Statements

Loops

Functions

Arrays & Strings

⭐ Author
Hardeep Singh
Maintained for learning and mastering C++ Programming Basics.

🙌 Contribute
You can contribute by:

Improving explanations

Adding screenshots

Adding error solutions

Adding Linux/macOS commands

✨ Pull Requests are welcome!