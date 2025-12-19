In a linked list of size n, where n is even, the ith node (0-indexed) of the linked list is known as the twin of the (n-1-i)th node, if 0 <= i <= (n / 2) - 1.

For example, if n = 4, then node 0 is the twin of node 3, and node 1 is the twin of node 2. These are the only nodes with twins for n = 4.
The twin sum is defined as the sum of a node and its twin.

Given the head of a linked list with even length, return the maximum twin sum of the linked list.

 

Example 1:


Input: head = [5,4,2,1]
Output: 6
Explanation:
Nodes 0 and 1 are the twins of nodes 3 and 2, respectively. All have twin sum = 6.
There are no other nodes with twins in the linked list.
Thus, the maximum twin sum of the linked list is 6. 



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


using vector 

class Solution {
public:
    int pairSum(ListNode* head) {
        
        ListNode * curr = head;

        vector<int>v;

        while(curr !=NULL)
        {
            v.push_back(curr->val);
            curr= curr->next;
        }
        int i=0 ,j = v.size()-1;
        int maxsum=0;

        while(i<j)
        {
            maxsum = max(maxsum , (v[i]+v[j]));
            i++;
            j--;
        }

        return maxsum;
    }
};


using stack


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
    int pairSum(ListNode* head) {
        
        /*ListNode * curr = head;

        vector<int>v;

        while(curr !=NULL)
        {
            v.push_back(curr->val);
            curr= curr->next;
        }
        int i=0 ,j = v.size()-1;
        int maxsum=0;

        while(i<j)
        {
            maxsum = max(maxsum , (v[i]+v[j]));
            i++;
            j--;
        }

        return maxsum;*/

        ListNode * cur = head;

        stack<int>st;
        while(cur!=NULL)
        {
            st.push(cur->val);
            cur=cur->next;
        }

        cur= head;
        int maximum=0;
        int size = st.size() , count=1;

        while(count<=size/2)
        {
            maximum = max(maximum , (cur->val+st.top()));
            cur=cur->next;
            count++;
            st.pop();
        }

        return maximum;
    }
};
