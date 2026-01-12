Given an array arr[] consisting of both positive and negative integers, find the length of the longest subarray whose elements sum is zero.
A subarray is a contiguous part of an array, formed by selecting one or more consecutive elements while maintaining their original order.

Examples:

Input: arr[] = [15, -2, 2, -8, 1, 7, 10]
Output: 5
Explanation: The longest subarray with sum equals to 0 is [-2, 2, -8, 1, 7].

Input: arr[] = [1, 2, 3]
Output: 0
Explanation: There is no subarray with 0 sum.

Input:  arr[] = [1, 0, 3]
Output:  1
Explanation: The longest sub-array with sum equal to 0 is [0].


#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin>>n;
  vector<int>v(n);
  for(int i=0; i<n;i++)
  {
    cin>>v[i];
  }
  int sum =0, len=0;

  for(int i=0;i<n; i++)
  {
    sum =0;
    for(int j=i; j<n;j++)
    {
      sum+=v[j];
      
      if(sum ==0)
      {
        len = max(len , (j-i+1));
      }
    }
  }

  cout<<len<<" ";
  cout<<endl;
}



optimised 
#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin>>n;
  vector<int>v(n);
  for(int i=0; i<n;i++)
  {
    cin>>v[i];
  }
  int sum =0, len=0;

  unordered_map<int , int>mp;
    for(int i=0; i<n; i++)
    {
      sum+=v[i];

      if(mp.find(sum)!= mp.end())
      {
         len = max(len , (i-mp[sum]));
      }
      else
      {
        mp[sum]=i;
      }
    }

  cout<<len<<" ";
  cout<<endl;
}
