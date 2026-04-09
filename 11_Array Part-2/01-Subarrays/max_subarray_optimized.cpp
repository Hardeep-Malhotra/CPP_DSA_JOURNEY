// Maximum Subarray Sum using Optimized Brute Force Approach
// Time Complexity: O(n^2)

#include <iostream>
#include <climits>
using namespace std;

int maxSubarraySum(int arr[], int n)
{
    int maxSum = INT_MIN;

    // Starting index of subarray
    for (int start = 0; start < n; start++)
    {
        int currSum = 0; // Reset sum for new start

        // Ending index of subarray
        for (int end = start; end < n; end++)
        {
            currSum += arr[end];     // Add next element
            cout << currSum << ", "; // Print each subarray sum
            maxSum = max(maxSum, currSum);
        }
        cout << endl;
    }

    cout << "\nMaximum Subarray Sum: " << maxSum << endl;
    return maxSum;
}

int main()
{
    int arr[] = {2, -3, 6, -5, 4, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    maxSubarraySum(arr, n);

    return 0;
}
