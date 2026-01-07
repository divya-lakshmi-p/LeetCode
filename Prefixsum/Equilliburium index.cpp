equilliburium means lhs sum == rhs sum 


#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<long long >v(n+1 ,0);
   
    for(int i=1; i<=n; i++)
    {
        int x;
        cin>>x;
        v[i] = v[i-1]+x;
    }

     long long total = v[n];
    
   for(int i=1; i<n-1; i++)
   {
    int left =v[i-1];
    int right = v[n-1]-v[i];

    if(left == right)
        cout<< i-1;


   }
cout<<endl;
}

