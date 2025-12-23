You are given a 0-indexed integer array nums of size n.

Define two arrays leftSum and rightSum where:

leftSum[i] is the sum of elements to the left of the index i in the array nums. If there is no such element, leftSum[i] = 0.
rightSum[i] is the sum of elements to the right of the index i in the array nums. If there is no such element, rightSum[i] = 0.
Return an integer array answer of size n where answer[i] = |leftSum[i] - rightSum[i]|.

 

Example 1:

Input: nums = [10,4,8,3]
Output: [15,1,11,22]
Explanation: The array leftSum is [0,10,14,22] and the array rightSum is [15,11,3,0].
The array answer is [|0 - 15|,|10 - 11|,|14 - 3|,|22 - 0|] = [15,1,11,22].
Example 2:

Input: nums = [1]
Output: [0]
Explanation: The array leftSum is [0] and the array rightSum is [0].
The array answer is [|0 - 0|] = [0].

class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
         int n = nums.size();
        vector<int>l(n) ,r(n);
         int sum =0;
        for(int i=0; i<n; i++)
        { l[i]=sum;
        sum+=nums[i];}
         sum=0;
        for(int i=n-1; i>=0; i--)
        {   r[i]=sum;
            sum+=nums[i];
        }
        for(int i=0; i<n; i++)
        {nums[i]=abs(l[i]-r[i]);}

    return nums;
        
    }
};





#include<bits/stdc++.h>
using namespace  std;

int main()
{
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }

    vector<int>first(n),second(n);

    int sum=0;
    for(int i=0;i<n;i++)
    {       
        first[i]=sum;
        sum+=v[i];
       
    }
    sum=0;
    for(int i=n-1; i>=0; i--)
    {
        second[i]=sum;
        sum+=v[i];
    }
    for(int i=0;i<n;i++ )
    {
        v[i]=abs(first[i]-second[i]);
        cout<<v[i]<<" ";
    }
    
    cout<<endl;

}
