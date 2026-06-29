/*
 * LeetCode 1470. Shuffle the Array
 * Difficulty: Easy
 * Topics: Array
 *
 * Time Complexity: O(n)
 * Space Complexity: O(n)
 */

int* shuffle(int* nums, int numsSize, int n, int* returnSize)
{
    int m = numsSize;
    int *final = malloc(m * sizeof(int));

    for(int i = 0; i < m - 1; i += 2)
    {
        final[i] = nums[i / 2];
        final[i + 1] = nums[m / 2 + i / 2];
    }

    *returnSize = m;
    return final;
}
