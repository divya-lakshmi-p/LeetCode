Given an array of integers nums sorted in non-decreasing order, find the starting and ending position of a given target value.

If target is not found in the array, return [-1, -1].

You must write an algorithm with O(log n) runtime complexity.

 

Example 1:

Input: nums = [5,7,7,8,8,10], target = 8
Output: [3,4]
Example 2:

Input: nums = [5,7,7,8,8,10], target = 6
Output: [-1,-1]
Example 3:

Input: nums = [], target = 0
Output: [-1,-1]
 

Constraints:

0 <= nums.length <= 105
-109 <= nums[i] <= 109
nums is a non-decreasing array.
-109 <= target <= 109



class Solution {

    int lowerbound(vector<int>& nums , int target)
    {
        int left =0, right = nums.size();
        while(left<right)
        {
            int mid = (left+right)/2;   
            (nums[mid]<target)? (left = mid+1): (right = mid);
        }
        return left;
    }

    int upperbound(vector<int>& nums , int target)
    {
        int left =0 , right = nums.size();
        while(left <right)
        {
            int mid = (left+right)/2;
            (nums[mid]<= target)?(left=mid+1):(right = mid);
        }
        return left;
    }

public:
    vector<int> searchRange(vector<int>& nums, int target) {

        int loweboundindex = lowerbound(nums , target);
        int upperboundindex = upperbound(nums , target);
        if (loweboundindex == nums.size() || nums[loweboundindex] != target)
            return {-1, -1};
         return {loweboundindex, upperboundindex-1};

        
    }
};
