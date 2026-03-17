#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin>>n;
  vector<int>v(n);
  unordered_map<int, int>mp;
  for(int i=0; i<n; i++)
  {
    cin>>v[i];
    mp[v[i]]++;
  }

  for(auto val:mp)
  {
    cout<<val.first<<"->"<<val.second;
    cout<<endl;
  }

  
}

Input:
7
1 2 1 3 2 1 4

Output:
4->1
3->1
2->2
1->3
