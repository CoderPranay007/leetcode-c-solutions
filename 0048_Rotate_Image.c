/*
 * LeetCode 48. Rotate Image
 * Difficulty: Medium
 * Topics: Array, Math, Matrix
 *
 * Time Complexity: O(n²)
 * Space Complexity: O(1)
 */

void rotate(int** matrix, int matrixSize, int* matrixColSize) 
{
    int n = matrixSize;
    int swap;

    for(int i = 0; i < n; i++)
    {
        for(int j = i; j < n; j++)
        {
            swap = matrix[i][j];
            matrix[i][j] = matrix[j][i];
            matrix[j][i] = swap;
        }
    }

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n / 2; j++)
        {
            int temp = matrix[i][j];
            matrix[i][j] = matrix[i][n - 1 - j];
            matrix[i][n - 1 - j] = temp;
        }
    }
}
