# 🧱 Basic C++ Program Structure (Boilerplate)

Every C++ program follows a **basic structure**, also called **boilerplate code**.  
Understanding this structure is **mandatory** before writing any real C++ program.

---

## 📌 Basic C++ Program

```cpp
#include <iostream>
using namespace std;

int main() {

    cout << "Hello C++";

    return 0;
}
🔍 Line-by-Line Explanation
🔹 Header File (#include <iostream>)

#include <iostream>
What is a Header File?
A header file contains predefined functions and objects that help us perform specific tasks.

Why iostream?
iostream stands for Input–Output Stream

It allows us to use:

cout → output

cin → input

❌ Without iostream, cout and cin will not work.

🔹 Namespace (using namespace std;)

using namespace std;
What is a Namespace?
A namespace is used to group related names and avoid naming conflicts.

Why std?
cout, cin, endl belong to the standard namespace (std)

Without namespace:

std::cout << "Hello C++";
With namespace:

cout << "Hello C++";
🔹 Main Function (int main())

int main() {
What is main()?
main() is the entry point of every C++ program

Program execution starts from main()

Why int?
int means the function returns an integer value to the operating system

⚠️ Without main(), program will not run.

🔹 Output Statement (cout)

cout << "Hello C++";
What is cout?
cout is used to print output on the screen

It uses the insertion operator (<<)

Example:

cout << "Welcome to C++ programming";
💡 Multiple outputs:


cout << "Hello " << "World";
🔹 Return Statement (return 0;)

return 0;
Why return 0?
Sends value 0 back to the operating system

Indicates successful execution

### Return Values Meaning

| Value | Meaning |
|------|---------|
| `0` | Program ran successfully |
| Non-zero | Error occurred |


🧠 Important Notes
Every C++ program must have main()

Code inside { } is called function body

Statements end with semicolon (;)

C++ is case-sensitive



⭐ Author
Hardeep Singh
Maintained for mastering C++ Programming Fundamentals.

🙌 Contribute
You can contribute by:

Adding comments

Improving explanations

Adding beginner examples

Adding diagrams

✨ Pull Requests are welcome!