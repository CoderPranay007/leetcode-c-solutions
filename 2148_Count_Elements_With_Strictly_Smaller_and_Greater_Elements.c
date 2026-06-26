/*
 * LeetCode 2148. Count Elements With Strictly Smaller and Greater Elements
 * Difficulty: Easy
 * Topics: Array
 *
 * Time Complexity: O(n)
 * Space Complexity: O(1)
 */

int countElements(int* nums, int numsSize) 
{
    int n = numsSize;

    if(numsSize < 3)
    {
        return 0;
    }

    int max = nums[0];
    int min = nums[0];

    for(int i = 1; i < n; i++)
    {
        if(nums[i] > max)
        {
            max = nums[i];
        }

        if(nums[i] < min)
        {
            min = nums[i];
        }
    }

    int count = 0;
    for(int i = 0; i < n; i++)
    {
        if(nums[i] == min || nums[i] == max)
        {
            count++;
        }
    }

    return n - count;
}
