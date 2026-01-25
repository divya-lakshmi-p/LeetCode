Count number of occurrences (or frequency) in a sorted array
Last Updated : 3 Oct, 2025
Given a sorted array arr[] and an integer target, find the number of occurrences of target in given array.

Examples:

Input: arr[] = [1, 1, 2, 2, 2, 2, 3], target = 2
Output: 4
Explanation: 2 occurs 4 times in the given array.

Input: arr[] = [1, 1, 2, 2, 2, 2, 3], target = 4
Output: 0
Explanation: 4 is not present in the given array.'





#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n,target;
  cin>>n>>target;
  vector<int>v(n);
  unordered_map<int , int>mp;


  for(int i=0; i<n; i++)
  {
    cin>>v[i];
    mp[v[i]]++;

  }

  if(mp.find(target) != mp.end())
  {
    cout<<mp[target];
  }
  else
  {
    cout<<"0";
  }
}






#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n,target;
  cin>>n>>target;
  vector<int>v(n);
  for(int i=0;i<n;i++)
  {cin>>v[i];}
  auto l = lower_bound(v.begin() , v.end() ,target);
  auto h = upper_bound(v.begin() , v.end() , target);
  cout<<(h-l);
}
