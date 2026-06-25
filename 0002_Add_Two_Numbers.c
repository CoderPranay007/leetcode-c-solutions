/*
 * LeetCode 2. Add Two Numbers
 * Difficulty: Medium
 * Topics: Linked List, Math, Recursion
 *
 * Time Complexity: O(max(n, m))
 * Space Complexity: O(max(n, m))
 */

struct ListNode* create(int value)
{
    struct ListNode *newNode = malloc(sizeof(struct ListNode));
    newNode->val = value;
    newNode->next = NULL;
    return newNode;
}

struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) 
{
    struct ListNode *head = malloc(sizeof(struct ListNode));
    struct ListNode *temp, *temp1 = l1, *temp2 = l2;

    int carry = 0;
    
    head->val = (temp1->val + temp2->val + carry) % 10;
    head->next = NULL;

    temp = head;

    if((temp1->val + temp2->val + carry) / 10 == 1)
    {
        carry = 1;
    }
    else
    {
        carry = 0;
    }
    
    temp1 = temp1->next;
    temp2 = temp2->next;

    while(temp1 != NULL && temp2 != NULL)
    {
        temp->next = create((temp1->val + temp2->val + carry) % 10);

        if((temp1->val + temp2->val + carry) / 10 == 1)
        {
            carry = 1;
        }
        else
        {
            carry = 0;
        }

        temp1 = temp1->next;
        temp2 = temp2->next;
        temp = temp->next;
    }

    if(temp1 == NULL && temp2 != NULL)
    {   
        while(temp2 != NULL)
        {
            temp->next = create((temp2->val + carry) % 10);

            if((temp2->val + carry) / 10 == 1)
            {
                carry = 1;
            }
            else
            {
                carry = 0;
            }

            temp2 = temp2->next;
            temp = temp->next;
        }
    }

    else if(temp2 == NULL && temp1 != NULL)
    {   
        while(temp1 != NULL)
        {
            temp->next = create((temp1->val + carry) % 10);

            if((temp1->val + carry) / 10 == 1)
            {
                carry = 1;
            }
            else
            {
                carry = 0;
            }

            temp1 = temp1->next;
            temp = temp->next;
        }
    }

    if(carry == 1)
    {
        temp->next = create(1);
    }
    
    return head;
}
