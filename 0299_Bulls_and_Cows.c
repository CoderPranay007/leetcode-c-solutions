/*
 * LeetCode 299. Bulls and Cows
 * Difficulty: Medium
 * Topics: String, Hash Table
 *
 * Time Complexity: O(n)
 * Space Complexity: O(1)
 */

char* getHint(char* secret, char* guess)
{
    int n = strlen(secret);

    int x = 0;
    int hash[10] = {0};

    for (int i = 0; i < n; i++)
    {
        hash[secret[i] - '0']++;

        if (secret[i] == guess[i])
        {
            x++;
        }
    }

    int y = 0;

    for (int i = 0; i < n; i++)
    {
        if (hash[guess[i] - '0'] > 0)
        {
            y++;
            hash[guess[i] - '0']--;
        }
    }

    y = (y - x > 0) ? y - x : 0;

    char *result = malloc(20);

    sprintf(result, "%dA%dB", x, y);

    return result;
}
