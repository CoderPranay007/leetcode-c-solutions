/*
 * LeetCode 343. Integer Break
 * Difficulty: Medium
 * Topics: Math, Dynamic Programming
 *
 * Time Complexity: O(log n)
 * Space Complexity: O(1)
 */

int power(int x)
{
    int final = 1;

    for(int i = 0; i < x; i++)
    {
        final *= 3;
    }

    return final;
}

int integerBreak(int n) 
{
    if(n < 4)
    {
        return n - 1;
    }

    if(n % 3 < 2)
    {
        return power(n / 3 - 1) * (n % 3 + 3);
    }

    return power(n / 3) * (n % 3);
}
