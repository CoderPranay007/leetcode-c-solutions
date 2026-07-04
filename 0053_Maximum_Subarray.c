/*
 * LeetCode 53. Maximum Subarray
 * Difficulty: Medium
 * Topics: Array, Divide and Conquer, Dynamic Programming
 *
 * Time Complexity: O(n)
 * Space Complexity: O(n)
 */

int maxSubArray(int* nums, int numsSize) 
{
    int n = numsSize;

    int *prefix = malloc((n + 1) * sizeof(int));
    prefix[0] = 0;

    int prefixmin = 0;
    int maxdiff = INT_MIN;

    for(int i = 1; i - 1 < n; i++)
    {
        prefix[i] = prefix[i - 1] + nums[i - 1];

        if(prefix[i] - prefixmin > maxdiff)
        {
            maxdiff = prefix[i] - prefixmin;
        }

        if(prefixmin > prefix[i])
        {
            prefixmin = prefix[i];
        }
    }

    free(prefix);
    return maxdiff;
}
