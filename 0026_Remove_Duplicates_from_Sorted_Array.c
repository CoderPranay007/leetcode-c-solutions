/*
 * LeetCode 26. Remove Duplicates from Sorted Array
 * Difficulty: Easy
 * Topics: Array, Two pointers
 *
 * Time Complexity: O(n)
 * Space Complexity: O(1)
 */

int removeDuplicates(int* nums, int numsSize) 
{   
    int k=1;
    int n = numsSize;

    if(n==0)
    {
        return 0;
    }

    for(int i=0; i<n-1; i++)
    {
        if(nums[i+1] != nums[i])
        {
            nums[k] = nums[i+1];
            k++;
        }
    }
    
    return k;
}
