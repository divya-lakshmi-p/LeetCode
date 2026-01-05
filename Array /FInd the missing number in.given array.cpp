this will work in local ide but it wont run in leetcode becoz of OOB excetion we are trying to access the n time value bbut in array it consists of only n-1 value 


#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int>v(n);
    for(int i=0; i<=n; i++)
    {
        cin>>v[i];
    
    }
    int sum =0,val =0;
    for(int i=0; i<=n; i++)
    {
         val = val^v[i];

         sum = sum^i;

    }

    cout<<(val ^sum) << endl;
}



core idea is xor with the expected value array which means(0^1^2^3^4^5) ^ (1^3^2^5^0)  original value from 0 to n xor the give array value .

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        
        int actualsum=nums.size();
        
        for(int i=0; i<nums.size(); i++)
        {
           // actualsum  ^= i;
            actualsum ^=i^nums[i];
        }

        return actualsum ;
    }
};
