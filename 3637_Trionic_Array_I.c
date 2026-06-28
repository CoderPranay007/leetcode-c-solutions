/*
 * LeetCode 3637. Trionic Array I
 * Difficulty: Easy
 * Topics: Array
 *
 * Time Complexity: O(n)
 * Space Complexity: O(1)
 */

bool isTrionic(int* nums, int numsSize) 
{
    int n = numsSize;
    int i = 0;

    if(n == 3)
    {
        return false;
    }

    int check = 0;

    while(i < n - 1 && nums[i] < nums[i + 1])
    {
        i++;
        check = 1;
    }

    if(check == 0)
    {
        return false;
    }

    check = 0;

    while(i < n - 1 && nums[i] > nums[i + 1])
    {
        i++;
        check = 1;
    }

    if(check == 0)
    {
        return false;
    }

    check = 0;

    while(i < n - 1 && nums[i] < nums[i + 1])
    {
        i++;
        check = 1;
    }

    if(i != n - 1 || check == 0)
    {
        return false;
    }

    return true;
}
