/*
 * LeetCode 283. Move Zeroes
 * Difficulty: Easy
 * Topics: Array, Two Pointers
 *
 * Time Complexity: O(n)
 * Space Complexity: O(1)
 */

void moveZeroes(int* nums, int numsSize) 
{
    int n = numsSize;
    int j = 0; 

    for(int i=0; i<n; i++)
    {
        if(nums[i] != 0)
        {
            nums[j] = nums[i];
            j++;
        }
    }

    for(int i=j; i<n; i++)
    {
        nums[i] = 0;
    }
}
