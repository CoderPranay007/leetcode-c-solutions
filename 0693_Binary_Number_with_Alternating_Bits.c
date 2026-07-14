/*
 * LeetCode 693. Binary Number with Alternating Bits
 * Difficulty: Easy
 * Topics: Bit Manipulation
 *
 * Time Complexity: O(log n)
 * Space Complexity: O(log n)
 */

bool hasAlternatingBits(int n) 
{
    int* binary = malloc(31 * sizeof(int));
    int count = 0;

    while (n > 0)
    {
        if (n % 2 == 1)
        {
            binary[count++] = 1;
        }
        else
        {
            binary[count++] = 0;
        }

        n /= 2;
    }

    for (int i = 0; i + 1 < count; i++)
    {
        if (binary[i] == binary[i + 1])
        {
            free(binary);
            return false;
        }
    }

    free(binary);

    return true;
}
