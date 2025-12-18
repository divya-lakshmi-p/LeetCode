find uniques number  in the given array , note in the whole array each number present twice a time except one #

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int>v(n);
    int sum =0;
     map<int ,  int>mp;
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
        mp[v[i]]++;
        
    }
    for(auto x:mp)
    {
        if(x.second==1)
        {
            cout<<x.first;
        }
    }
   

    //cout<<sum;


}
