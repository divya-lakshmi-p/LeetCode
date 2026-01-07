Given an array of size n with all zero  , given query with i and value , add the given value from i to n-1;

ip n=5 , q=5
2 4
3 2
1 5
4 2
0 3


o/p
3 8 12 14 16

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,q;
    cin>>n>>q;

    vector<int>v(n ,0);
    while(q--)
    {
        int index , value,i;
        cin>>index>>value;

        for(int i=index; i<n;i++)
        {
            v[i]+=value;
        }

      
    }
    
    for(auto val:v)
    {
        cout<<val<<" ";
    }
    cout<<endl;

}   o(n*q)







#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,q;
    cin>>n>>q;

    vector<int>v(n ,0);
    while(q--)
    {
        int index , value,i;
        cin>>index>>value;
        v[index]+=value;
    }
      for(int i=1; i<=n;i++)
        {
            v[i]+=v[i-1];
        }

    
    for(auto val:v)
    {
        cout<<val<<" ";
    }
    cout<<endl;

}    o(n+q);
