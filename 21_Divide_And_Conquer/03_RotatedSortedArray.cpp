#include <iostream>
using namespace std;

int searchInRotated(int arr[], int si, int ei, int tar) {
    if (si > ei) return -1;

    int mid = si + (ei - si) / 2;
    if (arr[mid] == tar) return mid;

    // Case 1: Left side is sorted
    if (arr[si] <= arr[mid]) {
        if (arr[si] <= tar && tar <= arr[mid]) 
            return searchInRotated(arr, si, mid - 1, tar);
        else 
            return searchInRotated(arr, mid + 1, ei, tar);
    } 
    // Case 2: Right side is sorted
    else {
        if (arr[mid] <= tar && tar <= arr[ei]) 
            return searchInRotated(arr, mid + 1, ei, tar);
        else 
            return searchInRotated(arr, si, mid - 1, tar);
    }
}

int main() {
    int arr[] = {4, 5, 6, 7, 0, 1, 2};
    int target = 0;
    int result = searchInRotated(arr, 0, 6, target);
    cout << "Target found at index: " << result << endl;
    return 0;
}