/*
 * LeetCode 2529. Maximum Count of Positive Integer and Negative Integer
 * Difficulty: Easy
 * Topics: Array, Binary Search, Counting
 *
 * Time Complexity: O(n)
 * Space Complexity: O(1)
 */

int maximumCount(int* nums, int numsSize) 
{
    int neg = 0;
    int pos = 0;

    int i = 0;
    while(i < numsSize && nums[i] < 0)
    {
        neg++;
        i++;
    }
    
    for(int j = i; j < numsSize; j++)
    {
        if(nums[j] > 0)
        {
            pos++;
        }
    }
    
    int final = (neg > pos) ? neg : pos;
    return final;
}
