#include<bits/stdc++.h>
using namespace std;

int BinarySearch(vector<int> & v , int x)
{
    int l=0 , r=v.size()-1;
    while(l<r)
    {
        int mid = (l+r)/2;

        if(v[mid]==x)
            return mid;
        
        else if(v[mid]<x)
            l=mid-1;
        else
            r=mid+1;
    }
    return -1;
}

int main()
{
    int n;
    cin >>n;
    vector<int>v;
    for(int i=0; i<n; i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    int k;
    cin>>k;
    int res = BinarySearch(v,k);
    cout<<res<<endl;
}
