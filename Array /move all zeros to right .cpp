#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int>v(n);
    bool sortandrotate=true;
    int k=0;
   // unordered_map<int, int>mp;
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    
    }
    int nonzero =0;
    for(int i=0; i<n; i++)
    {
        if(v[i]!=0)
        {
            swap(v[nonzero++] , v[i]);
        }
    }

    for(auto val:v)
    {
        cout<<val<<"  ";
    }

    cout<<endl;
}
