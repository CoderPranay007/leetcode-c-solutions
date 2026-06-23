/*
 * LeetCode 19. Remove Nth Node From End of List
 * Difficulty: Medium
 * Topics: Linked List, Two Pointers
 *
 * Time Complexity: O(n)
 * Space Complexity: O(1)
 */

struct ListNode* removeNthFromEnd(struct ListNode* head, int n) 
{
   struct ListNode * temp = head;
   
   int count = 1;
   while(temp->next != NULL)
   {
     temp = temp->next;
     count++;
   }

   if (n == count) 
   {
        head = head->next;
        return head;
   }

   temp = head;
   for (int i = 1; i < count - n; i++) {
        temp = temp->next;
   }

   if(temp->next->next != NULL)
   {
      temp->next = temp->next->next;
   }
   else
   {
      temp->next = NULL;
   }

   return head;
}
