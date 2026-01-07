#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,q;
    cin >> n >>q;
    vector<int>v(n);
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    
    }
int sum=0,s=0,e=0;

while(q--)
{    sum=0;
    int s,e;
    cin>>s>>e;
    for(int i=s; i<=e;i++)
    {
        sum+=v[i];
    }
    cout<<sum<< " ";
}
    
cout<<endl;
}    o(q*n)


optimised one 
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,q;
    cin >> n >>q ;
    vector<long long >v(n+1 ,0);
   
   /* 
   vector<int>s(n);
   for(int i=0; i<n; i++)
    {
        cin>>v[i];
        sum+=v[i];
        s.push_back(sum);

    
    }*/

    for(int i=1; i<=n; i++)
    {
        int x;
        cin>>x;
        v[i] = v[i-1]+x;
    }

     
    
    while(q--)
    {
        int l,e;
        cin>>l>>e;

        cout<< v[e]-v[l-1]<<"\n";
    
    }

cout<<endl;
}  o(q+n)
