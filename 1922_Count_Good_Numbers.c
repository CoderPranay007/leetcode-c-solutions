/*
 * LeetCode 1922. Count Good Numbers
 * Difficulty: Medium
 * Topics: Math, Recursion
 *
 * Time Complexity: O(log n)
 * Space Complexity: O(log n)
 */

long long power(long long base, long long exp, long long mod)
{
    long long result = 1;

    while (exp > 0)
    {
        if (exp % 2 == 1)
            result = (result * base) % mod;

        base = (base * base) % mod;
        exp /= 2;
    }

    return result;
}

int countGoodNumbers(long long n) 
{
    long long odd = n / 2;
    long long even = n - odd;
    long long mod = 1000000007;

    long long result =
        (power(4, odd, mod) * power(5, even, mod)) % mod;

    return (int)result;
}
