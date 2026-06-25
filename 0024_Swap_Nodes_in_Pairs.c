/*
 * LeetCode 24. Swap Nodes in Pairs
 * Difficulty: Medium
 * Topics: Linked List, Recursion
 *
 * Time Complexity: O(n)
 * Space Complexity: O(1)
 */

struct ListNode* swapPairs(struct ListNode* head) 
{
    if(head == NULL || head->next == NULL)
    {
        return head;
    }

    struct ListNode *temp, *temp1, *temp2;

    temp = head;
    temp1 = temp->next;

    temp->next = temp->next->next;
    temp1->next = temp;

    head = temp1;

    while(temp && temp->next && temp->next->next)
    {
        temp1 = temp->next;
        temp2 = temp1->next;

        temp1->next = temp2->next;
        temp2->next = temp1;
        temp->next = temp2;

        temp = temp1;
    }

    return head;
}
