#include<bits/stdc++.h>
using namespace std;

void reversesubarray(vector<int>&v ,int s, int e)
{
    while(s<e){
        swap(v[s] , v[e]);
        s++;
        e--;
    }
}
int main()
{
    int n,s,e;
    cin >>n>>s>>e;
    vector<int>v(n);
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    
    }
   reversesubarray(v,s,e);

   for(auto val:v)
   {
    cout<<val<<" ";
   }
cout<<endl;
}
