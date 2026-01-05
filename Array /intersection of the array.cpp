#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin >> n>>m;
    vector<int>v(n),v1(m);
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    
    }

    for(int i=0; i<m; i++)
    {
        cin>>v1[i];
    }
    
    unordered_set<int>s(v.begin() ,v.end());

    vector<int>vec;

    for(auto val:v1)
    {
        if(s.find(val) != s.end())
        {
            vec.push_back(val);
            s.erase(val);

        }
    }

    for(auto Pri:vec)
    {
        cout<<Pri<<"  ";
    }

    cout<<endl;


}






leetcode 
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int>new1(nums1.begin() , nums1.end());
        vector<int>v1;
        for(auto each:nums2)
        {
            if(new1.count(each))                       
           //if(new1.find(each) != new1.end())
            {
                v1.push_back(each);
                new1.erase(each);
            }
        }

        return v1;
    }
};


both the line are doing the same but the find one is searching in the set whether the number is exist in the set are not and the count one is uused to check like whther the number is exist in the set or not 
