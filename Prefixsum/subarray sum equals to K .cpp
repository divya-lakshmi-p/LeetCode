Given an array of integers nums and an integer k, return the total number of subarrays whose sum equals to k.

A subarray is a contiguous non-empty sequence of elements within an array.

 

Example 1:

Input: nums = [1,1,1], k = 2
Output: 2
Example 2:

Input: nums = [1,2,3], k = 3
Output: 2
 

Constraints:

1 <= nums.length <= 2 * 104
-1000 <= nums[i] <= 1000
-107 <= k <= 107



 Brute force approach 
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    vector<int>v;
    for(int i=0; i<n; i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
   
     int sum=0,count=0,l=0;
      for(int i=0; i<n; i++)
     {
       sum=0;
      for(int j=i; j<n; j++)
      {
         ((sum+=v[j])==k)?count++:l++;
         // cout<<sum <<" ";
       //  if(sum==k)
          //count++;
      }
     }

     cout<<count<<" ";
     cout<<endl;
     
}



optimised approach

#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n,k;
  cin>>n>>k;
  vector<int>v;
  for(int i=0; i<n; i++)
  {
    int x;
    cin>>x;
    v.push_back(x);
  }
    unordered_map<int , int>mp;
    mp[0]=1;
     int prefsum=0, need=0 , count=0;
   for(auto num:v)
   {
    prefsum+=num;
    need= abs(prefsum-k);
    if(mp.count(need))
      count+=mp[need];
mp[prefsum]++;
   }
   cout<<count<<" ";
   cout<<endl;
}




class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {

        unordered_map<int, int>mp;
        mp[0]=1;
        int prefsum=0,need=0,count=0;
        for(auto val:nums)
        {   
            prefsum +=val;
            need = prefsum-k;
            if(mp.count(need))
                count+=mp[need];

        mp[prefsum]++;

        }
        return count;
    }
};


/*int subarrayCount = 0, runningSum = 0;
        unordered_map<int, int> sumFreq = {{0, 1}};
        for (int num: nums) {
            runningSum += num;
            subarrayCount += sumFreq[runningSum - k];
            sumFreq[runningSum]++;
        }
        return subarrayCount;*/
