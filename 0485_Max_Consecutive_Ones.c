/*
 * LeetCode 485. Max Consecutive Ones
 * Difficulty: Easy
 * Topics: Array
 *
 * Time Complexity: O(n)
 * Space Complexity: O(1)
 */

int findMaxConsecutiveOnes(int* nums, int numsSize)
{
    int result = 1;
    int count = 1;

    for(int i=0; i<numsSize; i++)
    {
        if(nums[i] == 0)
        {
            count = 0;
        }
        else
        {
            count = 1;
            break;
        }
    }

    if(count == 0)
    {
        return 0;
    }

    for(int i=0; i<numsSize - 1; i++)
    {
        if(nums[i] == 1 && nums[i+1] == 1)
        {
            count++;
        }
        else
        {
            count = 1;
        }

        if(result < count)
        {
            result = count;
        }
    }

    return result;
}
