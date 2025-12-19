You are given an arbitrary node from a doubly linked list, which contains nodes that have a next pointer and a previous pointer.

Return an integer array which contains the elements of the linked list in order.

 

Example 1:

Input: head = [1,2,3,4,5], node = 5

Output: [1,2,3,4,5]

Example 2:

Input: head = [4,5,6,7,8], node = 8

Output: [4,5,6,7,8]


/**
 * Definition for doubly-linked list.
 * class Node {
 *     int val;
 *     Node* prev;
 *     Node* next;
 *     Node() : val(0), next(nullptr), prev(nullptr) {}
 *     Node(int x) : val(x), next(nullptr), prev(nullptr) {}
 *     Node(int x, Node *prev, Node *next) : val(x), next(next), prev(prev) {}
 * };
 */
class Solution {
public:
	vector<int> toArray(Node *node){
        
        vector<int>result;

        while(node->prev != NULL)
        {
            node =node->prev;
        }

        while(node!=NULL)
        {
            result.push_back(node->val);
            node = node->next;
        }

        return result;
        
    }
};
