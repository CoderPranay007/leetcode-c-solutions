/*
 * LeetCode 36. Valid Sudoku
 * Difficulty: Medium
 * Topics: Array, Hash Table, Matrix
 *
 * Time Complexity: O(1)
 * Space Complexity: O(1)
 */

bool isValidSudoku(char** board, int boardSize, int* boardColSize) 
{
    int rows = boardSize;
    int cols = *boardColSize;

    for(int i = 0; i < rows; i++)
    {   
        int checkr[10] = {0};
        int checkc[10] = {0};

        for(int j = 0; j < cols; j++)
        {   
            if(board[i][j] != '.')
            {
                int val = board[i][j] - '0';

                if(checkr[val])
                    return false;

                checkr[val] = 1;
            }

            if(board[j][i] != '.')
            {
                int val = board[j][i] - '0';

                if(checkc[val])
                    return false;

                checkc[val] = 1;
            }
        }
    }

    for(int x = 0; x < rows; x += 3)
    {
        for(int y = 0; y < cols; y += 3)
        {
            int checkbox[10] = {0};

            for(int i = x; i < x + 3; i++)
            {
                for(int j = y; j < y + 3; j++)
                {
                    if(board[i][j] != '.')
                    {
                        int val = board[i][j] - '0';

                        if(checkbox[val])
                            return false;

                        checkbox[val] = 1;
                    }
                }
            }
        }
    }

    return true;
}
