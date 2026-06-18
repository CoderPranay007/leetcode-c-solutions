/*
 * LeetCode 121. Best Time to Buy and Sell Stock
 * Difficulty: Easy
 * Topics: Array, Dynamic Programming
 *
 * Time Complexity: O(n)
 * Space Complexity: O(1)
 */

int maxProfit(int* prices, int pricesSize) 
{
    int n = pricesSize;
    
    if(pricesSize<2)
    {
        return 0;
    }
    
    int min = prices[0];
    int profit = 0;

    for(int i=0; i<n; i++)
    {
        if(prices[i]<min)
        {
            min = prices[i];
        }
        else if(prices[i] - min > profit)
        {
            profit = prices[i] - min;
        }
    }

    return profit;
}
