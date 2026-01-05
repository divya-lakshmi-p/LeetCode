Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the non-zero elements.

Note that you must do this in-place without making a copy of the array.

 

Example 1:

Input: nums = [0,1,0,3,12]
Output: [1,3,12,0,0]
Example 2:

Input: nums = [0]
Output: [0]
 

Constraints:

1 <= nums.length <= 104
-231 <= nums[i] <= 231 - 1



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




second way 




        int nonzero =0;

        for(int i=0; i<nums.size(); i++)
        {
            if(nums[i]!=0)
            {
                nums[nonzero++]=nums[i];
            }
        }

        for(int i=nonzero; i<nums.size(); i++)
        {
            nums[i]=0;
        }
        
