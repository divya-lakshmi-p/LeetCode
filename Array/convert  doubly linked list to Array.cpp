You are given the head of a doubly linked list, which contains nodes that have a next pointer and a previous pointer.

Return an integer array which contains the elements of the linked list in order.

 

Example 1:

Input: head = [1,2,3,4,3,2,1]

Output: [1,2,3,4,3,2,1]

Example 2:

Input: head = [2,2,2,2,2]

Output: [2,2,2,2,2]

Example 3:

Input: head = [3,2,3,2,3,2]

Output: [3,2,3,2,3,2]

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
	vector<int> toArray(Node *head){
        vector<int>res;
        while(head!=nullptr)
        {
            res.push_back(head->val);
            head=head->next;
        }
        return res;
        
    }
};
