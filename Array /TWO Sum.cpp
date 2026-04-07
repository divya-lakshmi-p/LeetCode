
Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

You can return the answer in any order.

 

Example 1:

Input: nums = [2,7,11,15], target = 9
Output: [0,1]
Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].
Example 2:

Input: nums = [3,2,4], target = 6
Output: [1,2]
Example 3:

Input: nums = [3,3], target = 6
Output: [0,1]

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        unordered_map<int , int>mp;

        int sub=0;
        for(int i=0; i<nums.size(); i++)
        {
            sub = target-nums[i];

            if(mp.find(sub) != mp.end())
            {
                return {mp[sub]  , i};
            }
            mp[nums[i]]=i;
        }

return {};
        
    }
};






using Two pointer technique 



#include<bits/stdc++.h>
using namespace std;

int main()
{

  int n , target;
  cin>>n>>target;
  vector<int>v(n);
  for(int i=0; i<n; i++)
  {
    cin>>v[i];

  }

  int left =0 ,right = v.size()-1;

  while(left < right)
  {
    int sum = v[left]+v[right];

    if(sum == target)
    {
      cout<< v[left]<<" "<<v[right];
      break;
  }
    else if(sum  <target)
        left++;
    else
        right--;

  }
}
