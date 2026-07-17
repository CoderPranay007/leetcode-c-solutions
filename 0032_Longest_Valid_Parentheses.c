/*
 * LeetCode 32. Longest Valid Parentheses
 * Difficulty: Hard
 * Topics: String, Dynamic Programming, Stack
 *
 * Time Complexity: O(n)
 * Space Complexity: O(n)
 */

int longestValidParentheses(char* s)
{
    int n = strlen(s);

    int *stack = malloc((n + 1) * sizeof(int));

    int top = 0;
    stack[0] = -1;

    int ans = 0;

    for (int i = 0; i < n; i++)
    {
        if (s[i] == '(')
        {
            stack[++top] = i;
        }
        else
        {
            top--;

            if (top < 0)
            {
                stack[++top] = i;
            }
            else
            {
                int len = i - stack[top];

                if (len > ans)
                {
                    ans = len;
                }
            }
        }
    }

    free(stack);

    return ans;
}
