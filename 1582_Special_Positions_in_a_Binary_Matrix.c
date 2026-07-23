/*
 * LeetCode 1582. Special Positions in a Binary Matrix
 * Difficulty: Easy
 * Topics: Array, Matrix
 *
 * Time Complexity: O(m × n)
 * Space Complexity: O(m + n)
 */

int numSpecial(int** mat, int matSize, int* matColSize)
{
    int m = matSize;
    int n = *matColSize;

    int row[m];
    int col[n];

    for (int i = 0; i < m; i++)
        row[i] = 0;

    for (int j = 0; j < n; j++)
        col[j] = 0;

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (mat[i][j] == 1)
            {
                row[i]++;
                col[j]++;
            }
        }
    }

    int count = 0;

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (mat[i][j] == 1 && row[i] == 1 && col[j] == 1)
                count++;
        }
    }

    return count;
}
