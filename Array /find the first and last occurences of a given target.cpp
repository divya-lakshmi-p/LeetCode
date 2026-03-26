#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n , target;
  cin>>n >>target;

  int first = -1 , last = -1;

  for(int i=0; i<n;i++)
  {
      int x; cin>>x;

      if(x==target)

      {
        if(first ==-1)
          first = i;


        last =i;
      }
  }

 cout<<first<<" " <<last<<endl;


}

Input:
10 7 
1 2 3 7 4 5 7 8 7 7
Output:
3 9
