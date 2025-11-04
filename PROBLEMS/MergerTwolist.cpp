You are given the heads of two sorted linked lists list1 and list2.

Merge the two lists into one sorted list. The list should be made by splicing together the nodes of the first two lists.

Return the head of the merged linked list.

Input  : l1= 1 1 2 3 4 5 l2: 1 2 4 5 6 7
Ouput :  1 1 1 2 2 3 4 4 5 5 6 7

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        // this is to store the value like new list 
        ListNode * mergelist = new ListNode();
        ListNode * it = mergelist;

        while(list1 != NULL  && list2!= NULL)
        {   // this will store the nodes value to compare , if it is null it will store the max value 
            int l1 = (list1 !=NULL)? list1->val :INT_MAX;
            int l2 = (list2 !=NULL)? list2->val :INT_MAX;

            if(l1<l2)
            {
                it->next = list1;
                list1 = list1->next;
                }

            else
            {
                it->next = list2;
                list2 = list2->next;
            }
            it = it->next;
        }
        // this will work for last node because we are validating till become the node become null , so it will stop before the null node whic means it wont go till end of the list 
        it->next = (list1!=NULL)?list1:list2;
        return mergelist->next;
    }
};
