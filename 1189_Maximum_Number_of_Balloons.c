/*
 * LeetCode 1189. Maximum Number of Balloons
 * Difficulty: Easy
 * Topics: String, Hash Table
 *
 * Time Complexity: O(n)
 * Space Complexity: O(1)
 */

int maxNumberOfBalloons(char* text)
{
    int n = strlen(text);
    int hash[5] = {0};

    for (int i = 0; i < n; i++)
    {
        if (text[i] == 'b')
            hash[0]++;
        else if (text[i] == 'a')
            hash[1]++;
        else if (text[i] == 'l')
            hash[2]++;
        else if (text[i] == 'o')
            hash[3]++;
        else if (text[i] == 'n')
            hash[4]++;
    }

    hash[2] /= 2;
    hash[3] /= 2;

    int final = 100000;

    for (int i = 0; i < 5; i++)
    {
        if (hash[i] < final)
        {
            final = hash[i];
        }
    }

    return final;
}
