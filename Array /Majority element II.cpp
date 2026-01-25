Given an integer array of size n, find all elements that appear more than ⌊ n/3 ⌋ times.

 Follow up: Could you solve the problem in linear time and in O(1) space?

Example 1:

Input: nums = [3,2,3]
Output: [3]
Example 2:

Input: nums = [1]
Output: [1]
Example 3:

Input: nums = [1,2]
Output: [1,2]
 

Constraints:

1 <= nums.length <= 5 * 104
-109 <= nums[i] <= 109









class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
       /* int n = nums.size(), count1 = 0, count2 = 0;
        int majEle1 = INT_MIN, majEle2 = INT_MIN;
        for (int num: nums) {
            if (majEle1 == num) {
                ++count1;
            } else if (majEle2 == num) {
                ++count2;
            } else if (count1 == 0) {
                majEle1 = num;
                ++count1;
            } else if (count2 == 0) {
                majEle2 = num;
                ++count2;
            } else {
                --count1, --count2;
            }
        }

        count1 = 0, count2 = 0;
        for (int num: nums) {
            if (majEle1 == num)   ++count1;
            if (majEle2 == num)   ++count2;
        }

        vector<int> res;
        if (count1 > n/3)   res.push_back(majEle1);
        if (count2 > n/3)   res.push_back(majEle2);
        return res;*/


        int n = nums.size();
        unordered_map<int , int>mp;

        for(auto x:nums)
        {
            mp[x]++;
        }
        vector<int>res;
        for(auto val:mp)
        {
            if(val.second >n/3)
                res.push_back(val.first);
        }


        return res;
    }
};
