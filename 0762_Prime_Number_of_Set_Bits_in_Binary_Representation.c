/*
 * LeetCode 762. Prime Number of Set Bits in Binary Representation
 * Difficulty: Easy
 * Topics: Bit Manipulation, Math
 *
 * Time Complexity: O((right - left + 1) * log n)
 * Space Complexity: O(1)
 */

bool isprime(int n)
{
    if (n == 1)
    {
        return false;
    }

    int y = sqrt(n);

    for (int k = 2; k < y + 1; k++)
    {
        if (n % k == 0)
            return false;
    }

    return true;
}

int binary(int n)
{
    int count = 0;

    while (n > 0)
    {
        if (n % 2 == 1)
            count++;

        n /= 2;
    }

    return count;
}

int countPrimeSetBits(int left, int right)
{
    int final = 0;

    for (int i = left; i < right + 1; i++)
    {
        if (isprime(binary(i)))
            final++;
    }

    return final;
}
