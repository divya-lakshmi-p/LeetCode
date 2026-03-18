#include<bits/stdc++.h>

using namespace std;

int main()
{
  int n ;
  cin>>n;
  int ans = 0;
  vector<int>v(n);
  for(int i=1;i<=n;i++)
  {
    //cin>>v[i];
    ans = ans^i;
    
  }
cout<<ans<<endl;
}

Input:
5
Output:
1
