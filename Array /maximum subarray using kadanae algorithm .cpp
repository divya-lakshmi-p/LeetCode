Kadane’s Core Logic (Intuition)

At every index, ask:

“Is it better to extend the previous subarray,
or start fresh from this element?”



currSum = max(arr[i], currSum + arr[i]);
maxSum = max(maxSum, currSum);


maximum subarray using kadanae algorithm 
Given an integer array nums, find the subarray with the largest sum, and return its sum.

 

Example 1:

Input: nums = [-2,1,-3,4,-1,2,1,-5,4]
Output: 6
Explanation: The subarray [4,-1,2,1] has the largest sum 6.
Example 2:

Input: nums = [1]
Output: 1
Explanation: The subarray [1] has the largest sum 1.
Example 3:

Input: nums = [5,4,-1,7,8]
Output: 23
Explanation: The subarray [5,4,-1,7,8] has the largest sum 23.



class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int curr = nums[0] , maxi= nums[0],n=nums.size();

        for(int i=1;i<n;i++)
        {
            curr = max(nums[i] , curr+nums[i]);
            maxi = max(maxi , curr);
        }
        return maxi;
    }
};
