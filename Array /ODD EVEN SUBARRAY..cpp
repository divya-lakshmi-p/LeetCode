Given an array and q queries the queries contain l and r and odd or even as starting and ending index we have to return
the sum of all odd indexed elements rangee from L to R if ask is to return odd else we have to return the sumof all even 
indexeed elementes range from L tp R ask is to return even index sum


Input:
11
2 2 6 4 5 1 5 2 6 4 1
1
2 4 odd 

output:
4


#include<bits/stdc++.h>
  using namespace std;

  int main()
  {
    int n;
    cin >>n;
    vector<int>v(n);
    
    for(int i=0;i<n;i++)
    {
      cin>>v[i];
    }
    
    vector<long long>evenprefix(n,0) , oddprefix(n,0);

    for(int i=0; i<n; i++)
    {
      if(i>0)
      {
        evenprefix[i]=evenprefix[i-1];
        oddprefix[i] = oddprefix[i-1];
      }
      if(i%2==0)
      {
        evenprefix[i]+=v[i];
      }
      else
      {
        oddprefix[i]+=v[i];
      }
    }
    int q;
    cin>>q;
    while(q--)
    {
      int l,r;
      string type;
      cin>>l>>r>>type;

      if(type=="even")
      {long long ans = evenprefix[r]-(l>0 ? evenprefix[l-1]:0);
        cout<<ans<<endl;}
      else
      {
        long long ans = oddprefix[r]-(l>0 ? oddprefix[l-1]:0);
        cout<<ans<<endl;
      }

    }

    return 0;
    

  }
