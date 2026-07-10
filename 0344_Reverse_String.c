/*
 * LeetCode 344. Reverse String
 * Difficulty: Easy
 * Topics: Two Pointers, String
 *
 * Time Complexity: O(n)
 * Space Complexity: O(1)
 */

void reverseString(char* s, int sSize) 
{
    for(int i = 0; i < sSize / 2; i++)
    {
        char temp = s[i];
        s[i] = s[sSize - 1 - i];
        s[sSize - i - 1] = temp;
    }
}
