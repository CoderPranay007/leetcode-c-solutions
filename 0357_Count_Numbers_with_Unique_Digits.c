/*
 * LeetCode 357. Count Numbers with Unique Digits
 * Difficulty: Medium
 * Topics: Math, Dynamic Programming, Backtracking
 *
 * Time Complexity: O(n²)
 * Space Complexity: O(n)
 */

int countNumbersWithUniqueDigits(int n) 
{
    if(n == 0)
    {
        return 1;
    }
    else if(n == 1)
    {
        return 10;
    }

    int x = n - 1;
    int product = 1;

    while(x > 0)
    {
        x--;
        product *= (9 - x);
    }

    product *= 9;

    return product + countNumbersWithUniqueDigits(n - 1);
}
