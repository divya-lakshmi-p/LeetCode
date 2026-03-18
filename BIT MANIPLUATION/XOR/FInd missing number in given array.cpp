#include<bits/stdc++.h>

using namespace std;

int main()
{
  int n ;
  cin>>n;
  int ans = n;
  vector<int>v(n);
  for(int i=0;i<n;i++)
  {
    cin>>v[i];
    ans = ans^i^v[i];
    
  }
cout<<ans<<endl;
}

Input:
5
0 5 3 2 1
Output:
4
