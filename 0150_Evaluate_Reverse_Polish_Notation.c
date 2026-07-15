/*
 * LeetCode 150. Evaluate Reverse Polish Notation
 * Difficulty: Medium
 * Topics: Array, Math, Stack
 *
 * Time Complexity: O(n)
 * Space Complexity: O(n)
 */

int evalRPN(char** tokens, int tokensSize) 
{
    int stack[tokensSize];
    int i = 0;

    for (int j = 0; j < tokensSize; j++)
    {
        char *ch = tokens[j];

        if (strcmp(ch, "+") == 0)
        {
            stack[i - 2] = stack[i - 2] + stack[i - 1];
            i--;
        }
        else if (strcmp(ch, "-") == 0)
        {
            stack[i - 2] = stack[i - 2] - stack[i - 1];
            i--;
        }
        else if (strcmp(ch, "*") == 0)
        {
            stack[i - 2] = stack[i - 2] * stack[i - 1];
            i--;
        }
        else if (strcmp(ch, "/") == 0)
        {
            stack[i - 2] = stack[i - 2] / stack[i - 1];
            i--;
        }
        else
        {
            stack[i] = atoi(ch);
            i++;
        }
    }

    return stack[i - 1];
}
