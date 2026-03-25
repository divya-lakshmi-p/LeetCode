#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n,i;
  cin>>n>>i;

  int ans = n&(1<<i);

  (ans)?cout<<"BIT IS SET\n":cout<<"BIT IS NOT SET\n";
}
