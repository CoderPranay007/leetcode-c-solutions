/*
 * LeetCode 69. Sqrt(x)
 * Difficulty: Easy
 * Topics: Math, Binary Search
 *
 * Time Complexity: O(√x)
 * Space Complexity: O(1)
 */

int mySqrt(int x) 
{
    if (x < 2)
    {
        return x;
    }

    int i = 1;

    while (i <= x / i)
    {
        i++;
    }

    return i - 1;
}
