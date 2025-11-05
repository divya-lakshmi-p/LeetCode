/Given the head of a singly linked list, return true if it is a palindrome or false otherwise.

Example 1:
Input: head = [1,2,2,1]
Output: true


**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
  // This is used to reverse the list
    ListNode * reversenum(ListNode * head)
    {
        ListNode * next = NULL;
        ListNode* curr = head;
        ListNode * prev = NULL;

        while(curr !=NULL)
        {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;

        }
        return prev;
    }
public:
    bool isPalindrome(ListNode* head) {
        ListNode * slow = head;
        ListNode * fast = head;
  // this is used to find the middle of the given list 
        while(fast->next!=NULL && fast ->next->next!=NULL)
        {
            slow = slow->next;
            fast = fast->next->next;

        }

        //This is used to compare the list with before and after middle value 
       ListNode * reverselist = reversenum(slow->next);
        ListNode*first = head;
        ListNode*second = reverselist;
        while(second!=NULL)
        {
            if(first->val != second->val)
            {    reversenum(reverselist);
                return false;
            }
            first = first->next;
            second = second->next;
        }
        reversenum(reverselist);
        return true;
    }
};
