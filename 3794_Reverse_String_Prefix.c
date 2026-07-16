/*
 * LeetCode 3794. Reverse String Prefix
 * Difficulty: Easy
 * Topics: Two Pointers, String
 *
 * Time Complexity: O(k)
 * Space Complexity: O(1)
 */

char* reversePrefix(char* s, int k) 
{
    char temp;

    for (int i = 0; i < k / 2; i++)
    {
        temp = s[i];
        s[i] = s[k - 1 - i];
        s[k - 1 - i] = temp;
    }

    return s;
}
