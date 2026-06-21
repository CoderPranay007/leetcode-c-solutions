/*
 * LeetCode 2149. Rearrange Array Elements by Sign
 * Difficulty: Medium
 * Topics: Array, Two Pointers, Simulation
 *
 * Time Complexity: O(n)
 * Space Complexity: O(n)
 */

int* rearrangeArray(int* nums, int numsSize, int* returnSize) 
{   
    int n = numsSize;
    *returnSize = n;

    int *final = malloc(n * sizeof(n));

    int i = 0, j = 1;

    for(int k = 0; k < n; k++)
    {
        if(nums[k] > 0)
        {
            final[i] = nums[k];
            i += 2;
        }

        if(nums[k] < 0)
        {
            final[j] = nums[k];
            j += 2;
        }
    }

    return final;
}
