//------------------------------------------------
// Recursive Function to Find the Last Occurrence of an Element in an Array
//------------------------------------------------
#include <iostream>
#include <vector>
using namespace std;

// --- RECURSIVE FUNCTION TO FIND LAST OCCURRENCE ---
// '&' use kiya hai taaki memory save ho (no extra copies)
int lastOccurence(const vector<int> &arr, int target, int i)
{
    // Base Case: Agar array khatam ho jaye
    if (i == arr.size())
    {
        return -1;
    }

    // Step 1: Pehle aage check karo (Deep dive till the end)
    int idxfound = lastOccurence(arr, target, i + 1);

    // Step 2: Wapis aate waqt (Backtracking)
    // Agar aage kahi target nahi mila (idxfound == -1)
    // tabhi current index check karo
    if (idxfound == -1 && arr[i] == target)
    {
        return i;
    }

    // Step 3: Jo result mila use upar pass karo
    return idxfound;
}

int main()
{
    // Data Preparation
    vector<int> arr = {1, 2, 3, 3, 3, 4, 5};
    int target = 3;
    int startIndex = 0;

    // Output
    int result = lastOccurence(arr, target, startIndex);

    if (result != -1)
    {
        cout << "Target " << target << " found at last index: " << result << endl;
    }
    else
    {
        cout << "Target not found in the array." << endl;
    }

    return 0;
}

#include <iostream>
#include <algorithm> // swap function ke liye achi practice hai
using namespace std;

// --- RECURSIVE FUNCTION TO REVERSE ARRAY ---
void reversArray(int i, int arr[], int n)
{
    // Base Case: Agar index beech tak pahuch gaya, toh ruk jao
    if (i >= n / 2)
    {
        return;
    }

    // Swapping: Pehle element ko uske corresponding last element se badalna
    swap(arr[i], arr[n - i - 1]);

    // Recursive Call: Agle index ke liye function dubara call karna
    reversArray(i + 1, arr, n);
}

int main()
{
    // 1. Array Size Input
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];

    // 2. Array Elements Input (Pehle data bharna zaroori hai)
    cout << "Enter " << n << " elements: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // 3. Reverse Process (Data bharne ke BAAD call karein)
    reversArray(0, arr, n);

    // 4. Output: Reversed Array Print karna
    cout << "\nReverse Array:" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
