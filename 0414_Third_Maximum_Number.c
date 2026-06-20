/*
 * LeetCode 414. Third Maximum Number
 * Difficulty: Easy
 * Topics: Array, Sorting
 *
 * Time Complexity: O(n)
 * Space Complexity: O(1)
 */

int thirdMax(int* nums, int numsSize) 
{
    int n = numsSize;
    
    int max1 = nums[0];
    for(int i=0; i<n; i++)
    {
        if(nums[i] > max1)
        {
            max1 = nums[i];
        }
    }

    int max2 = INT_MIN;

    for(int i=0; i<n; i++)
    {
        if(nums[i] > max2 && nums[i] < max1)
        {
            max2 = nums[i];
        }
    }
    
    int check = 0;
    int max3 = INT_MIN;

    for(int i=0; i<n; i++)
    {
        if(nums[i] >= max3 && nums[i] < max2)
        {
            max3 = nums[i];
            check = 1;
        }
    }
    
    if(max3 == INT_MIN && check == 0)
    {   
        return max1;
    }
    
    return max3;
}
