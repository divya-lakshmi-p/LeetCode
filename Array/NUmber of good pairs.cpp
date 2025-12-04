Given an array of integers nums, return the number of good pairs.

A pair (i, j) is called good if nums[i] == nums[j] and i < j.

 

Example 1:

Input: nums = [1,2,3,1,1,3]
Output: 4
Explanation: There are 4 good pairs (0,3), (0,4), (3,4), (2,5) 0-indexed.
Example 2:

Input: nums = [1,1,1,1]
Output: 6
Explanation: Each pair in the array are good.
Example 3:

Input: nums = [1,2,3]
Output: 0


class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {

        unordered_map<int , int>mp;
        int res=0;

        for(int i=0; i<nums.size(); i++)
        {  res+=mp[nums[i]];
            mp[nums[i]]++;
        }
        /*for(auto val:mp)
        {
            int n = val.second;
            res+=(n*(n-1)/2);

        }*/
        
        return res;
    }
};



#include<bits/stdc++.h>
using namespace std;

int main()
{  int testcase;
    cin>>testcase;
    while(testcase--){

        int n;
    cin >> n;
  
    vector<int>v;
    for(int i=0; i<n; i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
   int res=0;
    unordered_map<int , int>mp;
    for(int i=0; i<v.size(); i++)
    {   res+=mp[v[i]];
        mp[v[i]]++;
    }

 
    /*for(auto num:mp)
    {
        int n = num.second;
        res+=(n *(n-1)/2);
    }*/
    cout<<res<<" ";
    cout<<endl;
    }
    
    

  
}
