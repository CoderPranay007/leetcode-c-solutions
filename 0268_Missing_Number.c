/*
 * LeetCode 268. Missing Number
 * Difficulty: Easy
 * Topics: Array, Hash Table, Math, Binary Search, Bit Manipulation, Sorting
 *
 * Time Complexity: O(n)
 * Space Complexity: O(1)
 */

int missingNumber(int* nums, int numsSize) 
{
    int n = numsSize;
    int ideal = n * (n + 1) / 2;

    int actual = 0;

    for(int i = 0; i < n; i++)
    {
        actual += nums[i];
    }

    return ideal - actual;
}
