/*
 * LeetCode 83. Remove Duplicates from Sorted List
 * Difficulty: Easy
 * Topics: Linked List
 *
 * Time Complexity: O(n)
 * Space Complexity: O(1)
 */

struct ListNode* deleteDuplicates(struct ListNode* head) 
{   
    if (head == NULL)
    {
        return head;
    }

    struct ListNode* temp;
    temp = head;
    
    while(temp->next != NULL)
    {
        if(temp->val == temp->next->val)
        {
            temp->next = temp->next->next;
        }
        else
        {
            temp = temp->next;
        }
    }

    return head;
}
