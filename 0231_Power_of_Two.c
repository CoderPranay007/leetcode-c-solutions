/*
 * LeetCode 231. Power of Two
 * Difficulty: Easy
 * Topics: Math, Bit Manipulation, Recursion
 *
 * Time Complexity: O(log n)
 * Space Complexity: O(1)
 */

bool isPowerOfTwo(int n) 
{
    while(n > 1 && n % 2 == 0)
    {
        n = n / 2;
    }

    if(n == 1)
        return true;

    return false;
}
