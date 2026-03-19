#include<bits/stdc++.h>

using namespace std;

int main()
{
  int n ;
  cin>>n;
  int ans = 0;
  vector<int>v(n);
  for(int i=0;i<n;i++)
  {
    cin>>v[i];
    ans = ans^v[i];
    
  }
  int rightmostbit = ans & (-ans);
  //cout<<"right"<<" "<<rightmostbit;
  int num1 =0,num2=0;
  for(auto val:v)
  {
    if(val & rightmostbit)
      num1 ^= val;
    else
      num2 ^= val;
  }
  
cout<<num1<<"  "<<num2<<endl;
}

Input:
8
1 2 3 4 2 3 1 7
Output:
  7  4
