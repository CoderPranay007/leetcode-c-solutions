/*
 * LeetCode 2124. Check if All A's Appears Before All B's
 * Difficulty: Easy
 * Topics: String
 *
 * Time Complexity: O(n)
 * Space Complexity: O(1)
 */

bool checkString(char* s) 
{
    for(int i = 0; s[i + 1] != '\0'; i++)
    {
        if(s[i] == 'b' && s[i + 1] == 'a')
        {
            return false;
        }
    }

    return true;
}
