/*
 * LeetCode 507. Perfect Number
 * Difficulty: Easy
 * Topics: Math, Number Theory
 *
 * Time Complexity: O(√n)
 * Space Complexity: O(1)
 */

bool checkPerfectNumber(int num)
{
    if (num == 1)
    {
        return false;
    }

    int n = sqrt(num);
    int sum = 1;

    for (int i = 2; i < n + 1; i++)
    {
        if (num % i == 0)
        {
            if (i == num / i)
            {
                sum += i;
            }
            else
            {
                sum += i + num / i;
            }
        }
    }

    return sum == num;
}
