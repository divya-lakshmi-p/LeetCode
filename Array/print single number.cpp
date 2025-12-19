Given an array of integer all the number present in the array twice except two numbers print the two single number 


#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int>v(n);
unordered_map<int ,int>mp;
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
        mp[v[i]]++;
    }
    vector<int>result;

    for(auto  res:mp)
    {
        if(res.second==1)
            result.push_back(res.first);
    }
    for(auto print:result)
        cout<<print<<" ";
    
}
