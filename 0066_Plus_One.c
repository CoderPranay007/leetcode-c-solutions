/*
 * LeetCode 66. Plus One
 * Difficulty: Easy
 * Topics: Array, Math
 *
 * Time Complexity: O(n)
 * Space Complexity: O(n)
 */

int* plusOne(int* digits, int digitsSize, int* returnSize)
{
    int n = digitsSize;
    int carry = 1;  
    int digit;

    for (int i = n - 1; i >= 0; i--)
    {
        digit = digits[i] + carry;
        digits[i] = digit % 10;
        carry = digit / 10;

        if (carry == 0)
        {
            break;
        }
    }

    if (carry == 1)
    {
        int* final = malloc((n + 1) * sizeof(int));
        final[0] = 1;

        for (int i = 1; i <= n; i++)
        {
            final[i] = 0;
        }

        *returnSize = n + 1;
        return final;
    }

    int* final = malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
    {
        final[i] = digits[i];
    }

    *returnSize = n;
    return final;
}
