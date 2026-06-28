/*
 * LeetCode 3379. Transformed Array
 * Difficulty: Easy
 * Topics: Array, Simulation
 *
 * Time Complexity: O(n)
 * Space Complexity: O(n)
 */

int* constructTransformedArray(int* nums, int numsSize, int* returnSize) 
{
    int n = numsSize;
    *returnSize = n;

    int j;

    int *result = malloc(n * sizeof(int));

    for(int i = 0; i < n; i++)
    {
        j = nums[i] + i;

        if(j < 0)
        {
            j = j % n;
            j += n;
        }

        if(j >= n)
        {
            j = j % n;
        }

        result[i] = nums[j];
    }

    return result;
}
