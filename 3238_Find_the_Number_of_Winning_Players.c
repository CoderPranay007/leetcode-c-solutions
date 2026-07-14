/*
 * LeetCode 3238. Find the Number of Winning Players
 * Difficulty: Easy
 * Topics: Array, Hash Table, Counting
 *
 * Time Complexity: O(pickSize)
 * Space Complexity: O(n)
 */

int winningPlayerCount(int n, int** pick, int pickSize, int* pickColSize) 
{
    int hash[n][11];
    memset(hash, 0, sizeof(hash));

    int won[n];
    memset(won, 0, sizeof(won));

    int final = 0;

    for (int i = 0; i < pickSize; i++)
    {
        int player = pick[i][0];
        int ball = pick[i][1];

        hash[player][ball]++;

        if (won[player] != 1 &&
            hash[player][ball] - player == 1)
        {
            won[player] = 1;
            final++;
        }
    }

    return final;
}
