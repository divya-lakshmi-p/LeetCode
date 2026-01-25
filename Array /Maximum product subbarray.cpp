Given an integer array nums, find a subarray that has the largest product, and return the product.

The test cases are generated so that the answer will fit in a 32-bit integer.

Note that the product of an array with a single element is the value of that element.

 

Example 1:

Input: nums = [2,3,-2,4]
Output: 6
Explanation: [2,3] has the largest product 6.
Example 2:

Input: nums = [-2,0,-1]
Output: 0
Explanation: The result cannot be 2, because [-2,-1] is not a subarray.
 

Constraints:

1 <= nums.length <= 2 * 104
-10 <= nums[i] <= 10
The product of any subarray of nums is guaranteed to fit in a 32-bit integer.






class Solution {
public:
    int maxProduct(vector<int>& nums) {
       /* int res = nums[0], maxSoFar = nums[0], minSoFar = nums[0];
        vector<int> temp;
        for (int i = 1; i < nums.size(); ++i) {
            temp = {nums[i], maxSoFar*nums[i], minSoFar*nums[i]};
            maxSoFar = *max_element(temp.begin(), temp.end());
            minSoFar = *min_element(temp.begin(), temp.end());
            res = max(res, maxSoFar);
        }
        return res;*/


        int MINV = nums[0] , MAXIV = nums[0], n = nums.size() , curr = nums[0];

        for(int i=1; i<n; i++)
        {
            int tempMAXV = max({nums[i] , MAXIV*nums[i] , MINV*nums[i]});
            int tempMINV = min({nums[i] , MAXIV*nums[i] , MINV*nums[i]});



            MAXIV=tempMAXV;
            MINV = tempMINV;

            curr = max(curr , MAXIV);
        }
return curr;
        
    }
};
