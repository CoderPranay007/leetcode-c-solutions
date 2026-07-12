/*
 * LeetCode 423. Reconstruct Original Digits from English
 * Difficulty: Medium
 * Topics: Hash Table, Math, String
 *
 * Time Complexity: O(n)
 * Space Complexity: O(1)
 */

char* originalDigits(char* s) 
{
    int hash[26] = {0};

    int i = 0;
    while(s[i] != '\0')
    {
        hash[s[i++] - 'a']++;
    }

    int digit[10] = {0};

    digit[0] = hash['z' - 'a'];
    digit[6] = hash['x' - 'a'];
    digit[2] = hash['w' - 'a'];
    digit[8] = hash['g' - 'a'];
    digit[4] = hash['u' - 'a'];

    digit[3] = hash['h' - 'a'] - digit[8];
    digit[5] = hash['f' - 'a'] - digit[4];
    digit[7] = hash['v' - 'a'] - digit[5];
    digit[9] = hash['i' - 'a'] - digit[5] - digit[6] - digit[8];
    digit[1] = hash['n' - 'a'] - digit[7] - 2 * digit[9];

    char *final = malloc((strlen(s) / 3) + 1);
    int j = 0;

    for(int k = 0; k < 10; k++)
    {
        while(digit[k] > 0)
        {
            final[j++] = k + '0';
            digit[k]--;
        }
    }

    final[j] = '\0';

    return final;
}
