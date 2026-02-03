// Common <cstring> Functions in C++

#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    // --------------------------------------------------
    // 1️⃣ strcpy()  → Copy one string into another
    // --------------------------------------------------
    /*
    char str1[100];
    char str2[100] = "Hello world from str2";

    // Copies content of str2 into str1
    strcpy(str1, str2);

    cout << "After strcpy, str1: " << str1 << endl;
    */

    // --------------------------------------------------
    // 2️⃣ strcat()  → Concatenate (join) two strings
    // --------------------------------------------------
    /*
    char str1[100] = "Hello";
    char str2[100] = " World";

    // Appends str2 at the end of str1
    cout << "After strcat: " << strcat(str1, str2) << endl;
    */

    // --------------------------------------------------
    // 3️⃣ strcmp()  → Compare two strings
    // --------------------------------------------------
    char str1[100] = "abc";
    char str2[100] = "zdsdabc";

    // Compares strings lexicographically (ASCII based)
    int result = strcmp(str1, str2);

    cout << "Result of strcmp: " << result << endl;

    return 0;
}