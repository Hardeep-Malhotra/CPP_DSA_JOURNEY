/*************************************************
 * Problem Name : 167. Two Sum II - Input Array Is Sorted
 * Language     : C++
 * Approach     : Two Pointer Technique
 *
 * Description  :
 * Given a sorted (non-decreasing) array, find two
 * numbers such that their sum equals the target.
 * Return their indices (1-indexed for LeetCode).
 *
 * Key Points:
 * - Array is sorted
 * - Use constant extra space (no new arrays needed)
 * - Two-pointer technique optimal O(n) time
 *************************************************/

#include <iostream>
#include <vector>
using namespace std;

/*************** STANDALONE FUNCTION (VS CODE / LOCAL TEST) ***************/
vector<int> twoSumLocal(vector<int> numbers, int target)
{
    int start = 0, end = numbers.size() - 1;
    vector<int> ans;

    while (start < end)
    {
        int currSum = numbers[start] + numbers[end];

        if (currSum == target)
        {
            // LOCAL TEST: return 0-based indices
            ans.push_back(start);
            ans.push_back(end);
            return ans;
        }
        else if (currSum > target)
        {
            end--;
        }
        else
        {
            start++;
        }
    }
    return ans; // never reached if input guaranteed solution
}

/*************** MAIN FUNCTION FOR LOCAL TEST ***************/
int main()
{
    vector<int> vec = {2, 7, 11, 15};
    int target = 9;

    vector<int> ans = twoSumLocal(vec, target);

    cout << "0-based indices (local test): ";
    cout << ans[0] << " " << ans[1] << endl;

    return 0;
}

/*************** CLASS-BASED FUNCTION (LEETCODE SUBMISSION) ***************/
class Solution
{
public:
    vector<int> twoSum(vector<int> &numbers, int target)
    {
        int start = 0;
        int end = numbers.size() - 1;

        while (start < end)
        {
            int currSum = numbers[start] + numbers[end];

            if (currSum == target)
            {
                // LeetCode requires 1-based indices
                return {start + 1, end + 1};
            }
            else if (currSum > target)
            {
                end--;
            }
            else
            {
                start++;
            }
        }

        // Safety return; never reached as per problem constraints
        return {};
    }
};

/*************************************************
 * Notes:
 * - Two-pointer approach directly uses sorted property
 * - No extra arrays or hash maps needed (O(1) space)
 * - For LeetCode: return 1-indexed indices
 * - For local testing: can use 0-indexed for convenience
 *************************************************/
