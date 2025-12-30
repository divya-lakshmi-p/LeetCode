Given an integer array nums, rotate the array to the right by k steps, where k is non-negative.

 

Example 1:

Input: nums = [1,2,3,4,5,6,7], k = 3
Output: [5,6,7,1,2,3,4]
Explanation:
rotate 1 steps to the right: [7,1,2,3,4,5,6]
rotate 2 steps to the right: [6,7,1,2,3,4,5]
rotate 3 steps to the right: [5,6,7,1,2,3,4]
Example 2:

Input: nums = [-1,-100,3,99], k = 2
Output: [3,99,-1,-100]
Explanation: 
rotate 1 steps to the right: [99,-1,-100,3]
rotate 2 steps to the right: [3,99,-1,-100]

class Solution {

    /*void reversearray(vector<int> &v , int left ,int right)
    {
        while(left<right)
        {
            swap(v[left] , v[right]);
            left++;
            right--;
        }
    }*/
public:
    void rotate(vector<int>& nums, int k) {
       int n = nums.size();

       /* k = k%n;
        if(k==0 || n==0)
            return;
        reversearray(nums , 0,n-1);
        reversearray(nums , 0,k-1);
        reversearray(nums , k,n-1);*/

        vector<int>res(n);
        for(int i=0; i<n; i++)
        {
            int pos = (i+k)%n;

            res[pos]=nums[i];
        }

        nums.assign(res.begin() , res.end());

       /* for(auto val:res)
        {
            nums.push_back(val);
        }*/
    }

    
};
