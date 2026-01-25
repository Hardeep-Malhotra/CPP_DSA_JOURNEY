#include <iostream>
#include <vector>
using namespace std;

int trapRainWater(vector<int> &height)
{
    int n = height.size();

    // Edge case
    if (n == 0)
        return 0;

    vector<int> leftMax(n), rightMax(n);

    // 🔹 PREFIX ARRAY (leftMax)
    leftMax[0] = height[0];
    for (int i = 1; i < n; i++)
    {
        leftMax[i] = max(leftMax[i - 1], height[i]);
    }

    // 🔹 SUFFIX ARRAY (rightMax)
    rightMax[n - 1] = height[n - 1];
    for (int i = n - 2; i >= 0; i--)
    {
        rightMax[i] = max(rightMax[i + 1], height[i]);
    }

    // 🔹 WATER CALCULATION
    int totalWater = 0;
    for (int i = 0; i < n; i++)
    {
        int waterAtI = min(leftMax[i], rightMax[i]) - height[i];
        if (waterAtI > 0)
            totalWater += waterAtI;
    }

    return totalWater;
}

int main()
{
    vector<int> height = {4, 2, 0, 6, 3, 2, 5};

    cout << "Total Trapped Water = "
         << trapRainWater(height) << endl;

    return 0;
}
