/*
 * LeetCode 234. Palindrome Linked List
 * Difficulty: Easy
 * Topics: Linked List, Two Pointers, Stack, Recursion
 *
 * Time Complexity: O(n)
 * Space Complexity: O(n)
 */

bool isPalindrome(struct ListNode* head) 
{
    struct ListNode *temp = head;

    int n = 0;
    while(temp != NULL)
    {
        temp = temp->next;
        n++;
    }

    int *arr = malloc(n * sizeof(int));
    temp = head;

    int i = -1;
    while(temp != NULL)
    {
        arr[++i] = temp->val;

        if(i >= n / 2 && arr[i] != arr[n - i - 1])
        {
            return false;
        }

        temp = temp->next;
    }

    return true;
}
