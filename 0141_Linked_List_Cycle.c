/*
 * LeetCode 141. Linked List Cycle
 * Difficulty: Easy
 * Topics: Hash Table, Linked List, Two Pointers
 *
 * Time Complexity: O(n)
 * Space Complexity: O(1)
 */

bool hasCycle(struct ListNode *head) 
{
    if(head == NULL || head->next == NULL)
    {
        return false;
    }

    struct ListNode *temp = head, *temp1 = head;

    while(temp1 != NULL && temp1->next != NULL)
    {
        temp = temp->next;
        temp1 = temp1->next->next;

        if(temp == temp1)
        {
            return true;
        }
    }

    return false;
}
