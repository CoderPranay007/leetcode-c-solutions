/*
 * LeetCode 203. Remove Linked List Elements
 * Difficulty: Easy
 * Topics: Linked List, Recursion
 *
 * Time Complexity: O(n)
 * Space Complexity: O(1)
 */

struct ListNode* removeElements(struct ListNode* head, int val) 
{
    if(head == NULL)
        return head;

    struct ListNode *prev = NULL, *curr = head;

    while(curr != NULL && curr->val == val)
    {
        curr = curr->next;
    }

    head = curr;

    while(curr != NULL)
    {
        prev = curr;
        curr = curr->next;

        if(curr != NULL && curr->val == val)
        {
            prev->next = curr->next;
            curr = prev;
        }
    }

    return head;
}
