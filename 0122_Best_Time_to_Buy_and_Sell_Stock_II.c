/*
 * LeetCode 122. Best Time to Buy and Sell Stock II
 * Difficulty: Medium
 * Topics: Array, Dynamic Programming, Greedy
 *
 * Time Complexity: O(n)
 * Space Complexity: O(1)
 */

int maxProfit(int* prices, int pricesSize)
{   
    int n = pricesSize;
    int profit = 0;

    for (int i = 1; i < n; i++)
    {
        if (prices[i] > prices[i - 1])
        {
            profit += prices[i] - prices[i - 1];
        }
    }

    return profit;
}
