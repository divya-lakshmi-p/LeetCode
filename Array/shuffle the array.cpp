Given the array nums consisting of 2n elements in the form [x1,x2,...,xn,y1,y2,...,yn].

Return the array in the form [x1,y1,x2,y2,...,xn,yn].

 

Example 1:

Input: nums = [2,5,1,3,4,7], n = 3
Output: [2,3,5,4,1,7] 
Explanation: Since x1=2, x2=5, x3=1, y1=3, y2=4, y3=7 then the answer is [2,3,5,4,1,7].
Example 2:

Input: nums = [1,2,3,4,4,3,2,1], n = 4
Output: [1,4,2,3,3,2,4,1]
Example 3:

Input: nums = [1,1,2,2], n = 2
Output: [1,2,1,2]



class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        
        for(int i=n; i<2*n; i++)
        {
            int a = (nums[i]<<10);
            nums[i-n]=nums[i-n]|a;
        }

        int Power = pow(2,10)-1;

        for(int i=n-1; i>=0; i--)
        {
            int secondnum= nums[i]>>10;
            int firstnum = nums[i] & Power;

            nums[2*i+1] = secondnum;
            nums[2*i]=firstnum;
        }
        return nums;        
    }
};




#include<bits/stdc++.h>
using namespace std;

int main()
{  

    int n;
    cin >> n;
  
    vector<int>v;
    for(int i=0; i<2*n; i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    for(int i=n; i<2*n; i++)
        {
            int a = (v[i]<<10);
            v[i-n]=v[i-n]|a;
        }

    int  Power = pow(2,10)-1;


    for(int i=n-1; i>=0; i--)
    {
        int secondnum= v[i]>>10;
        int firstnum = v[i] & Power;

        v[2*i+1]=secondnum;
        v[2*i] = firstnum;
    }

    for(auto val:v)
    {
        cout<<val<<" ";
    }
    }
    
    

  
