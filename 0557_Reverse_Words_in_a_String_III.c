/*
 * LeetCode 557. Reverse Words in a String III
 * Difficulty: Easy
 * Topics: Two Pointers, String
 *
 * Time Complexity: O(n)
 * Space Complexity: O(1)
 */

char* reverseWords(char* s) 
{
    int count;
    int i = 0;

    while(s[i] != '\0')
    {
        count = 0;
        int j = i;

        while(s[i] != ' ' && s[i] != '\0')
        {
            count++;
            i++;
        }

        for(int y = j; y < j + count / 2; y++)
        {
            char temp = s[y];
            s[y] = s[j + count - 1 - (y - j)];
            s[j + count - 1 - (y - j)] = temp;
        }

        if(s[i] == ' ')
            i++;
    }

    return s;
}
