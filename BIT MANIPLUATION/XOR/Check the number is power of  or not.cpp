#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin>>n;
  (n>0  && (n&(n-1))==0)?cout<<"ITS POWER OF 2\n":cout<<"ITS NOT POWER OF 2\n";
}


//why we are checking "0" here is 0 als satisy the condition 
