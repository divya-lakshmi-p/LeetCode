#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    cin >>n>>k;
    vector<int>v(n);
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    
    }

one way
   /* int left=0, right=k-1;
    while(right<n)
    {
        cout<<left <<"  "<<right<<endl;
        left++;
        right++;
    }*/

second way 
    for(int i=0; i<=n-k; i++)
    {
        cout<<i<<"  "<<i+k-1<<endl;
    }

   
cout<<endl;
}
