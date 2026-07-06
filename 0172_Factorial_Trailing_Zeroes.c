/*
 * LeetCode 172. Factorial Trailing Zeroes
 * Difficulty: Medium
 * Topics: Math
 *
 * Time Complexity: O(log₅ n)
 * Space Complexity: O(1)
 */

int trailingZeroes(int n) 
{
    int count = 0;
    int x = 5;

    while(n / x > 0)
    {
        count += n / x;
        x *= 5;
    }

    return count;
}
