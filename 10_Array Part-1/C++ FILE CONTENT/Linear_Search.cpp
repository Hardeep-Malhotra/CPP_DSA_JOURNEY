#include <iostream>
using namespace std;

int linearSearch(int arr[], int size, int key)
{
    int i;

    for (i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            return i;
        }
    }
    return -1;
}
int main()
{

    int arr[] = {2, 4, 6, 8, 10, 12, 14, 16, 18};
    int size = 9;

    cout << "This is Array Element : " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " " << endl;
    }

    int key;
    cout << "Enter your Element where you see the index of element : ";
    cin >> key;

    int result = linearSearch(arr, size, key);

    if (result != -1)
    {
        cout << "Your " << key << " Element Stored at " << result << " index." << endl;
    }
    else
    {
        cout << "Sorry your " << key << " Element are not stored in this Array.......!";
    }
}
