Given the head of a linked list containing k distinct elements, return the head to a linked list of length k containing the frequency of each distinct element in the given linked list in any order.

 

Example 1:

Input: head = [1,1,2,1,2,3]

Output: [3,2,1]

Explanation: There are 3 distinct elements in the list. The frequency of 1 is 3, the frequency of 2 is 2 and the frequency of 3 is 1. Hence, we return 3 -> 2 -> 1.

Note that 1 -> 2 -> 3, 1 -> 3 -> 2, 2 -> 1 -> 3, 2 -> 3 -> 1, and 3 -> 1 -> 2 are also valid answers.




/**
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
public:
    ListNode* frequenciesOfElements(ListNode* head) {
    
       ListNode * curr = head;
       
       unordered_map <int , int > freqcount;

       while(curr!=NULL)
       {
            freqcount[curr->val]++;

            curr = curr->next;
       }

        
        ListNode * newhead = nullptr;
        ListNode * tail = nullptr;

     for(auto & p :freqcount)
     {
        ListNode * newone = new ListNode (p.second);
        if(!newhead){
            newhead= newone ;
            tail = newone;
        }
        else
        {
            tail->next = newone;
            tail = newone;
        }
     }

        return newhead;
        
    }
};
