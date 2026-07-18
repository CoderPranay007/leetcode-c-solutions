/*
 * LeetCode 258. Add Digits
 * Difficulty: Easy
 * Topics: Math, Number Theory
 *
 * Time Complexity: O(1)
 * Space Complexity: O(1)
 */

int addDigits(int num)
{
    return ((num - 1) % 9) + 1;
}
