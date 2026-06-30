/*
 * LeetCode 1653. Minimum Deletions to Make String Balanced
 * Difficulty: Medium
 * Topics: String, Dynamic Programming, Stack
 *
 * Time Complexity: O(n)
 * Space Complexity: O(1)
 */

#include <string.h>

int minimumDeletions(char* s) 
{
    int delcount = 0;
    int bcount = 0;

    for(int i = 0; s[i] != '\0'; i++)
    {
        if(s[i] == 'b')
            bcount++;

        else
        {
            if(bcount > 0)
            {
                delcount++;
                bcount--;
            }
        }
    }

    return delcount;
}
