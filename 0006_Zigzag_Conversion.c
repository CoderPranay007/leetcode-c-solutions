/*
 * LeetCode 6. Zigzag Conversion
 * Difficulty: Medium
 * Topics: String
 *
 * Time Complexity: O(r·n) (Worst case n^2)
 * Space Complexity: O(r·n)  (Worst case n^2)
 */

char* convert(char* s, int numRows) 
{
    if (numRows == 1) return s;

    int rows = numRows;
    int size = strlen(s);

    char **arr = (char **)malloc(rows * sizeof(char *));

    for (int i = 0; i < rows; i++)
    {
        arr[i] = (char *)malloc(size * sizeof(char));
      
        for (int j = 0; j < size; j++) arr[i][j] = ' ';
    }

    int n = 2 * (rows - 1);

    for(int full = 0; full * n< size; full++)
    {
        for(int i = 0; i < rows; i++)
        {       
            if(full * 2 * (rows - 1) + i<size)
            {
                arr[i][full * (rows - 1)] = s[full * 2 * (rows - 1) + i];
            }
        }

        for(int i = 1; i < rows - 1; i++)
        {
            if(full * 2 * (rows - 1) + rows - 1 + i < size)
            {
                arr[rows - 1 - i][full * (rows - 1) + i] = s[full * 2 * (rows - 1) + rows - 1 + i];
            }
        }
    }

    char *result = (char *)malloc(size + 1);
    int k = 0;

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (arr[i][j] != ' ') result[k++] = arr[i][j];
        }
    }
    result[k] = '\0';

   
    for (int i = 0; i < rows; i++) free(arr[i]);
  
    free(arr);

    return result;
}
