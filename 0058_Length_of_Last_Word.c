/*
 * LeetCode 58. Length of Last Word
 * Difficulty: Easy
 * Topics: String
 *
 * Time Complexity: O(n)
 * Space Complexity: O(1)
 */

int lengthOfLastWord(char* s) 
{
    int len = strlen(s);
    int count = 0;

    for(int i=len-1; i>=0; i--)
    {
        if(s[i] ==' ' && count == 0)
        {
            continue;
        }
        
        if(s[i]==' ')
        {
            break;
        }

        count++;
    }

    return count;
}
