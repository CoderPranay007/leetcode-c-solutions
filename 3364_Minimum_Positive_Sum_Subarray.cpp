/*
 * LeetCode 3364. Minimum Positive Sum Subarray
 * Difficulty: Easy
 * Topics: Array, Prefix Sum, Sliding Window
 *
 * Time Complexity: O(n × (r - l + 1))
 * Space Complexity: O(1)
 */

int minimumSumSubarray(int* nums, int numsSize, int l, int r) 
{
    int n = numsSize;
    int sum = INT_MAX;
    
    for(int i = 0; i <= n - l; i++)
    {   
        int windowsum = 0;
        int j = i;

        while(j - i < l)
        {
            windowsum += nums[j++];
        }
        
        if(windowsum > 0 && windowsum < sum)
        {
            sum = windowsum;
        }

        while(j < n && j - i < r)
        {
            windowsum += nums[j++];

            if(windowsum > 0 && windowsum < sum)
            {
                sum = windowsum;
            }
        }
    }

    if(sum == INT_MAX)
    {
        return -1;
    }

    return sum;
}
