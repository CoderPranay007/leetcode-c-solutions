/*
 * LeetCode 86. Partition List
 * Difficulty: Medium
 * Topics: Linked List, Two Pointers
 *
 * Time Complexity: O(n)
 * Space Complexity: O(1)
 */

struct ListNode* partition(struct ListNode* head, int x)
{
    struct ListNode a, b; // a and b are dummy nodes
    struct ListNode *less = &a;
    struct ListNode *more = &b;

    a.next = NULL;
    b.next = NULL;

    while (head != NULL)
    {
        if (head->val < x)
        {
            less->next = head;
            less = less->next;
        }
        else
        {
            more->next = head;
            more = more->next;
        }

        head = head->next;
    }

    more->next = NULL;
    less->next = b.next;

    return a.next;
}
