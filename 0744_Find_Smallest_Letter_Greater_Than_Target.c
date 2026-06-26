/*
 * LeetCode 744. Find Smallest Letter Greater Than Target
 * Difficulty: Easy
 * Topics: Array, Binary Search
 *
 * Time Complexity: O(n)
 * Space Complexity: O(1)
 */

char nextGreatestLetter(char* letters, int lettersSize, char target) 
{
    int n = lettersSize;

    int find = target;
    int check = 1;

    char result;

    for(int i = 0; i < n; i++)
    {
        if(letters[i] > find)
        {
            result = letters[i];
            check = 1;
            break;
        }
        else
        {
            check = 0;
        }
    }

    if(check == 0)
    {
        result = letters[0];
    }

    return result;
}
