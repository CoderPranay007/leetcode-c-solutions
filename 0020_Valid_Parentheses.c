/*
 * LeetCode 20. Valid Parentheses
 * Difficulty: Easy
 * Topics: String, Stack
 *
 * Time Complexity: O(n)
 * Space Complexity: O(1)
 */

bool isValid(char* s)
{
    int n = strlen(s);
    int top = -1;

    for (int i = 0; i < n; i++)
    {
        if (s[i] == '[' || s[i] == '(' || s[i] == '{')
        {
            s[++top] = s[i];
        }
        else if (s[i] == ']' || s[i] == ')' || s[i] == '}')
        {
            if (top < 0)
                return false;

            if ((s[i] == ']' && s[top] != '[') ||
                (s[i] == ')' && s[top] != '(') ||
                (s[i] == '}' && s[top] != '{'))
            {
                return false;
            }

            top--;
        }
    }

    return top == -1;
}
