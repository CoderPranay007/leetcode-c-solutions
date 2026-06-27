/*
 * LeetCode 92. Reverse Linked List II
 * Difficulty: Medium
 * Topics: Linked List
 *
 * Time Complexity: O(n)
 * Space Complexity: O(1)
 */

struct ListNode* reverseBetween(struct ListNode* head, int left, int right) 
{
    if(left == right)
    {
        return head;
    }

    struct ListNode *start = head, *end = NULL;
    struct ListNode *prevstart = NULL, *nextend = NULL;
    struct ListNode *prev = NULL, *curr = NULL, *next = NULL;
    
    int i = 1;

    while(i < left && start->next != NULL)
    {
        prevstart = start;
        start = start->next;
        i++;
    }

    end = start;
    while(i < right && end->next != NULL)
    {
        end = end->next;
        nextend = end->next;
        i++;
    }

    if(prevstart != NULL)
        prevstart->next = NULL;

    end->next = NULL;

    curr = start;

    while(curr != NULL)
    {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }

    start = prev;

    while(prev->next != NULL)
    {
        prev = prev->next;
    }

    end = prev;

    if(prevstart != NULL)
        prevstart->next = start;
    else
        head = start;

    end->next = nextend;

    return head;
}
