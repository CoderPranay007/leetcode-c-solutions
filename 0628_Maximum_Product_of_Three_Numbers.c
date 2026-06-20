/*
 * LeetCode 628. Maximum Product of Three Numbers
 * Difficulty: Easy
 * Topics: Array, Sorting
 *
 * Time Complexity: O(n)
 * Space Complexity: O(1)
 */

int maximumProduct(int* nums, int numsSize)
{
    int n = numsSize;

    int max1 = nums[0];
    int j1 = 0;
    for(int i=0; i<n; i++)
    {
        if(nums[i] > max1)
        {
            max1 = nums[i];
            j1 = i;
        }
    }

    int max2 = -1000;
    int j2 = -1;
    for(int i=0; i<n; i++)
    {
        if(nums[i] > max2 && i != j1)
        {
            max2 = nums[i];
            j2 = i;
        }
    }

    int max3 = -1000;
    for(int i=0; i<n; i++)
    {
        if(nums[i] > max3 && i != j1 && i != j2)
        {
            max3 = nums[i];
        }
    }

    int min1 = nums[0];
    int k1 = 0;
    for(int i=0; i<n; i++)
    {
        if(nums[i] < min1)
        {
            min1 = nums[i];
            k1 = i;
        }
    }

    int min2 = 1000;
    for(int i=0; i<n; i++)
    {
        if(nums[i] < min2 && i != k1)
        {
            min2 = nums[i];
        }
    }

    int p1 = max1 * max2 * max3;
    int p2 = min1 * min2 * max1;

    return p1 > p2 ? p1 : p2;
}
