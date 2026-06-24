/*
 * LeetCode 21. Merge Two Sorted Lists
 * Difficulty: Easy
 * Topics: Linked List, Recursion
 *
 * Time Complexity: O(n + m)
 * Space Complexity: O(1)
 */

struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2) 
{   
    if(list1 == NULL)
    {
        return list2;
    }

    if(list2 == NULL)
    {
        return list1;
    }

    struct ListNode *temp, *temp1 = list1, *temp2 = list2;
    struct ListNode *head;

    if(list1->val < list2->val)
    {
        head = list1;
        temp1 = temp1->next;
    }
    else
    {
        head = list2;
        temp2 = temp2->next;
    }
    
    temp = head;

    while(temp1 != NULL && temp2 != NULL)
    {
        if(temp1->val <= temp2->val)
        {   
            temp->next = temp1;
            temp1 = temp1->next;
        }
        else
        {   
            temp->next = temp2;
            temp2 = temp2->next;
        }

        temp = temp->next;
    }
    
    if(temp1 == NULL)
    {
        temp->next = temp2;
    }
    else
    {
        temp->next = temp1;
    }

    return head;
}
