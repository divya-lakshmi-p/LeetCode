You are given the head of a linked list of even length containing integers.

Each odd-indexed node contains an odd integer and each even-indexed node contains an even integer.

We call each even-indexed node and its next node a pair, e.g., the nodes with indices 0 and 1 are a pair, the nodes with indices 2 and 3 are a pair, and so on.

For every pair, we compare the values of the nodes in the pair:

If the odd-indexed node is higher, the "Odd" team gets a point.
If the even-indexed node is higher, the "Even" team gets a point.
Return the name of the team with the higher points, if the points are equal, return "Tie".

 

Example 1:

Input: head = [2,1]

Output: "Even"

Explanation: There is only one pair in this linked list and that is (2,1). Since 2 > 1, the Even team gets the point.

Hence, the answer would be "Even".

Example 2:

Input: head = [2,5,4,7,20,5]

Output: "Odd"




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
    string gameResult(ListNode* head) {

        int ODd= 0 , EVen=0;

        ListNode * curr = head;
        while(curr != nullptr && curr->next !=nullptr)
        {
            int evenval = curr->val;
            int oddval = curr->next->val;

            if(evenval > oddval)
                EVen++;
            else
                 ODd++;



          curr = curr->next->next;
        }

        if(EVen>ODd)
            return "Even";
        else if (EVen<ODd)
            return "Odd";
        else
            return "Tie";
        
    }
};
