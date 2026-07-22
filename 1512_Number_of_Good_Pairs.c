/*
 * LeetCode 1512. Number of Good Pairs
 * Difficulty: Easy
 * Topics: Array, Hash Table, Math
 *
 * Time Complexity: O(n)
 * Space Complexity: O(1)
 */

int numIdenticalPairs(int* nums, int numsSize)
{
    int hash[101] = {0};

    for (int i = 0; i < numsSize; i++)
    {
        hash[nums[i]]++;
    }

    int sum = 0;

    for (int i = 0; i < 101; i++)
    {
        if (hash[i] > 1)
        {
            hash[i] = hash[i] * (hash[i] - 1) / 2;
            sum += hash[i];
        }
    }

    return sum;
}
