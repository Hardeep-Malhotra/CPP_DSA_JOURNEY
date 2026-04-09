#include <iostream>
using namespace std;

int maxProfit(int prices[], int n)
{
    int minPrice = prices[0]; // assume first day as buy
    int maxProfit = 0;        // profit can never be negative

    for (int i = 1; i < n; i++)
    {
        // profit if we sell today
        int profit = prices[i] - minPrice;

        // update maximum profit
        if (profit > maxProfit)
        {
            maxProfit = profit;
        }

        // update minimum price (best buy so far)
        if (prices[i] < minPrice)
        {
            minPrice = prices[i];
        }
    }

    return maxProfit;
}

int main()
{
    int prices[] = {7, 1, 5, 3, 6, 4};
    int n = sizeof(prices) / sizeof(prices[0]);

    cout << "Maximum Profit = " << maxProfit(prices, n) << endl;
    return 0;
}
