#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int>v(n);
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    
    }
int sum=0;
    for(int i=0; i<n; i++)
    {
        for(int j=i; j<n; j++)
        { sum =0;
            for(int k=i; k<=j; k++)
            {
                sum+=v[k];
            }
            cout<<sum<<" "; 
        }
        cout<<endl;
    }
cout<<endl;
}
