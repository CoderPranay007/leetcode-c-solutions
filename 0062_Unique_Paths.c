/*
 * LeetCode 62. Unique Paths
 * Difficulty: Medium
 * Topics: Math, Dynamic Programming, Combinatorics
 *
 * Time Complexity: O(min(m, n))
 * Space Complexity: O(1)
 */

int uniquePaths(int m, int n) 
{
    int num = m + n - 2;
    int denom = (m > n) ? n : m;
    int i = 1;

    long long result = 1;

    while (i < denom)
    {
        result = result * num / i;
        num--;
        i++;
    }

    return result;
}
