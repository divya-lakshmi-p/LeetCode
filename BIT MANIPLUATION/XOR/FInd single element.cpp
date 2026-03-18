#include<bits/stdc++.h>

using namespace std;

int main()
{
  int n , sum=0;
  cin>>n;
  vector<int>v(n);
  for(int i=0;i<n;i++)
  {
    cin>>v[i];
    sum ^=v[i];
  }
cout<<sum<<endl;
}

Input:
7
1 7 8 9 7 8 1
Output:
9
