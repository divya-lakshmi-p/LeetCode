#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin>>n;
  
  int rightmosetsetbit = n& (-n);

  int count =1;
  while(rightmosetsetbit >1)
  {
    rightmosetsetbit >>= 1;
    count++;
  }
  cout<<count;
}


Input:
974
Output:
2

512 +256+128+64+8+4+2

//The positon of the last set  bit is 2 whic place value is also 2

