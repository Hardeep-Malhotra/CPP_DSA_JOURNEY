// find the position of character
#include <iostream>
using namespace std;

int main()
{
    char ch = 'f';

    // This gives 0-based index
    int index = ch - 'a';

    // This gives actual alphabet position (1-based)
    int position = ch - 'a' + 1;

    cout << "Index of f (0-based): " << index << endl;
    cout << "Position of f (1-based): " << position << endl;

    return 0;
}
