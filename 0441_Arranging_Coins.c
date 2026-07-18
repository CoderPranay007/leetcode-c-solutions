/*
 * LeetCode 441. Arranging Coins
 * Difficulty: Easy
 * Topics: Math, Binary Search
 *
 * Time Complexity: O(√n)
 * Space Complexity: O(1)
 */

int arrangeCoins(int n)
{
    int x = 0;

    while (n >= 0)
    {
        x++;
        n -= x;
    }

    return x - 1;
}
