Given a sorted array (can have negatives), return a new array of squares in sorted order

Input:  [-4, -1, 0, 3, 10]
Output: [0, 1, 9, 16, 100]


#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin >> n;
  vector<int>v(n) , res(n);

  for(int i=0; i<n; i++)
  {
    cin>>v[i];
  }

  int left =0, right = v.size()-1 , pos = n-1;

  while(left<=right)
  {

      if(abs(v[left])>abs(v[right]))
      {
        res[pos] = v[left]*v[left];
        left++;
      }
      else{
        res[pos]=v[right]*v[right];
        right--;
      }

      pos--;
     }

     for(auto val:res)
     {
      cout<<val<<"  ";
     }
     cout<<endl;


}
