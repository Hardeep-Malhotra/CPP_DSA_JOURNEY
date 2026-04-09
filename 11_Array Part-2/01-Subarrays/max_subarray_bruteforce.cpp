// Maximum Subarray Sum using Brute Force Approach
#include <iostream>
#include <climits>
using namespace std;

int maxSubarraySum(int arr[], int n)
{
    int maxSum = INT_MIN;

    // Fix starting index
    for (int start = 0; start < n; start++)
    {
        // Fix ending index
        for (int end = start; end < n; end++)
        {
            int currSum = 0;

            // Calculate sum from start to end
            for (int i = start; i <= end; i++)
            {
                currSum += arr[i];
            }

            cout << currSum << ", ";
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