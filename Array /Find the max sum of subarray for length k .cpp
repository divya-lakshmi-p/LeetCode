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
   /* int left=0, right=k-1;
    while(right<n)
    {
        cout<<left <<"  "<<right<<endl;
        left++;
        right++;
    }*/

    int maxi=0 , sum =0;

    for(int i=0; i<=n-k; i++)
    {   sum=0;
        for(int j=i; j<=i+k-1; j++)
        {   
            
                sum+=v[j];
        }
        maxi  = max(maxi , sum);
    }
cout<<maxi;
   
cout<<endl;
}
