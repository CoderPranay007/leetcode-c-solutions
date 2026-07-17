/*
 * LeetCode 868. Binary Gap
 * Difficulty: Easy
 * Topics: Bit Manipulation
 *
 * Time Complexity: O(log n)
 * Space Complexity: O(log n)
 */

int binaryGap(int n) 
{
    int *arr = malloc(31 * sizeof(int));
    int k = 0;

    while (n > 0)
    {
        if (n % 2 == 0)
        {
            arr[k++] = 0;
        }
        else
        {
            arr[k++] = 1;
        }

        n /= 2;
    }

    int i = 0;

    while (arr[i] == 0)
    {
        i++;
    }

    int j = i;
    int max = 0;

    while (i < k)
    {
        if (arr[i] == 1)
        {
            if (i - j > max)
            {
                max = i - j;
            }

            j = i;
        }

        i++;
    }

    free(arr);

    return max;
}
