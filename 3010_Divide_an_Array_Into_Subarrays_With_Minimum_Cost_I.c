/*
 * LeetCode 3010. Divide an Array Into Subarrays With Minimum Cost I
 * Difficulty: Easy
 * Topics: Array, Greedy
 *
 * Time Complexity: O(n)
 * Space Complexity: O(1)
 */

int minimumCost(int* nums, int numsSize) 
{   
    int n = numsSize;

    if(n == 3)
    {
        return nums[0] + nums[1] + nums[2];
    }

    int min1 = nums[0];

    int min2 = nums[1];
    int index = 1;
    for(int i = 2; i < n; i++)
    {
        if(nums[i] < min2)
        {
            min2 = nums[i];
            index = i;
        }
    }

    int min3 = nums[2];
    if(min2 != nums[1])
    {
        min3 = nums[1];
    }

    for(int i = 2; i < n; i++)
    {
        if(nums[i] < min3 && i != index)
        {
            min3 = nums[i];
        }
    }

    return min1 + min2 + min3;
}
