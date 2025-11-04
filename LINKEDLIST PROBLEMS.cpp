Given the head of a sorted linked list, delete all duplicates such that each element appears only once. Return the linked list sorted as well.

 Input -> 1 2 3 3 4 5
  Output -> 1 2 3 4 5
  class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {

        if(head == NULL)
         return head;

         ListNode * temp = head;

         while(temp->next != NULL)
         {  //here we are trying to skip the node if the next node is same 
            if(temp->val == temp->next->val)
            {    ListNode* dupli = temp->next;
                temp->next = temp->next->next;
                delete dupli;
            }
            else
            {
                temp = temp->next;
            }
         }
        return head;
    }
};
