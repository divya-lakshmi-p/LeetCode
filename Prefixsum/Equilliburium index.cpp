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






class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n=nums.size();
        vector<int>pref(n);
         // pref[0] = nums[0];
        for(int i=0; i<n; i++)
        {  
            (i==0)? pref[i]=nums[i]:pref[i]=pref[i-1]+nums[i];
        }
        // int total = pref[n - 1];

        for(int i=0; i<n;i++)
        {
            int left =  (i==0?0:pref[i-1]);
            int right = pref[n-1] -pref[i];

            if(left == right)
            {
                return i;
            }
        }
        return -1;
    }
};
