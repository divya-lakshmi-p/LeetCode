You are given an integer array nums. In one operation, you can add or subtract 1 from any element of nums.

Return the minimum number of operations to make all elements of nums divisible by 3.

 
Example 1:

Input: nums = [1,2,3,4]

Output: 3

Explanation:

All array elements can be made divisible by 3 using 3 operations:

Subtract 1 from 1.
Add 1 to 2.
Subtract 1 from 4.
Example 2:

Input: nums = [3,6,9]

Output: 0



class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int Output=0;
        for(int i=0; i<nums.size(); i++)
        {
            if(nums[i]%3 !=0)
                Output++;
        }
        return Output;
        
    }
};


#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int>v;
    for(int i=0; i<n; i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    int result=0;
    for(auto val:v)
    {
        if(val%3!=0)
            result++;
    }
    cout<<result<<endl;
}






#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int>v(n);
    int count=0;

    for(int i=0; i<n; i++)
    {
        cin>>v[i];
        if(v[i]%3 !=0)
            count++;
    }

    

    cout<<count<<endl;


}
