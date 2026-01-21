// Maximum Subarray Sum using Kadane's Algorithm
// Time Complexity: O(n)

#include <iostream>
#include <climits>
using namespace std;

int maxSubarraySum(int arr[], int n)
{
    int maxSum = INT_MIN;
    int currSum = 0;

    for (int i = 0; i < n; i++)
    {
        currSum += arr[i]; // Add current element to running sum

        maxSum = max(maxSum, currSum); // Update maximum sum if needed

        // If current sum becomes negative, reset it
        if (currSum < 0)
        {
            currSum = 0;
        }
    }

    cout << "Maximum Subarray Sum: " << maxSum << endl;
    return maxSum;
}

int main()
{
    int arr[] = {2, -3, 6, -5, 4, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    maxSubarraySum(arr, n);

    return 0;
}
