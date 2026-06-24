/*
 * LeetCode 61. Rotate List
 * Difficulty: Medium
 * Topics: Linked List, Two Pointers
 *
 * Time Complexity: O(n)
 * Space Complexity: O(1)
 */

struct ListNode* rotateRight(struct ListNode* head, int k) 
{   
    if(head == NULL || head->next == NULL)
    {
        return head;
    }

    struct ListNode *temp = head;
    int count = 1;

    while(temp->next != NULL)
    {
        temp = temp->next;
        count++;
    }

    int j = count - k;
    while(j < 0)
    {
        j = count + j;
    }

    if(count == k || j == 0)
    {
        return head;
    }

    temp->next = head;
    temp = head;
    
    for(int i = 1; i < j; i++)
    {
        temp = temp->next;
    }

    head = temp->next;
    temp->next = NULL;

    return head;
}
