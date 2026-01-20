Given an array arr of integers which may or may not contain duplicate elements. Your task is to remove duplicate elements.

Examples:

Input: arr[] = [1, 2, 3, 1, 4, 2]
Output: [1, 2, 3, 4]
Explanation: 2 and 1 have more than 1 occurence.
Input: arr[] = [1, 2, 3, 4]
Output: [1, 2, 3, 4]
Explanation: There is no duplicate element.
Expected Time Complexity: O(n)
Expected Auxiliary Space: O(n)

Constraints:
1<=arr.size()<=106
1<=arr[i]<=105


// User function Template for C++

class Solution {
  public:
    vector<int> removeDuplicate(vector<int>& arr) {
        // code here
        
        unordered_set<int>s;
              vector<int>v;
        
        for(auto val:arr)
        {
          if(!s.count(val))
          {
              s.insert(val);
              v.push_back(val);
          }
        }
            
        
  
        
        return v;
    }
};
