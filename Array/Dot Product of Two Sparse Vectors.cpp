Given two sparse vectors, compute their dot product.

Implement class SparseVector:

SparseVector(nums) Initializes the object with the vector nums
dotProduct(vec) Compute the dot product between the instance of SparseVector and vec
A sparse vector is a vector that has mostly zero values, you should store the sparse vector efficiently and compute the dot product between two SparseVector.

Follow up: What if only one of the vectors is sparse?

 

Example 1:

Input: nums1 = [1,0,0,2,3], nums2 = [0,3,0,4,0]
Output: 8
Explanation: v1 = SparseVector(nums1) , v2 = SparseVector(nums2)
v1.dotProduct(v2) = 1*0 + 0*3 + 0*0 + 2*4 + 3*0 = 8
Example 2:

Input: nums1 = [0,1,0,0,0], nums2 = [0,0,0,0,2]
Output: 0
Explanation: v1 = SparseVector(nums1) , v2 = SparseVector(nums2)
v1.dotProduct(v2) = 0*0 + 1*0 + 0*0 + 0*0 + 0*2 = 0
Example 3:

Input: nums1 = [0,1,0,0,2,0,0], nums2 = [1,0,0,0,3,0,4]
Output: 6






class SparseVector {
     vector<pair<int ,int>>newV;
public:
   
    SparseVector(vector<int> &nums) {
        
        for(int  i=0; i<nums.size(); i++)
        {
            if(nums[i] !=0)
                newV.push_back({i, nums[i]});
        }
    }
    
    // Return the dotProduct of two sparse vectors
    int dotProduct(SparseVector& vec) {

        int res=0;
        int i=0 , j=0;

        while(i<newV.size() && j<vec.newV.size())
        {
            if(newV[i].first == vec.newV[j].first)
            {
                res +=newV[i].second * vec.newV[j].second;
                i++;
                j++;
            }
            else if(newV[i].first<vec.newV[j].first)
            {
                i++;
            }
            else
            {
                j++;
            }
        }
        
        return res;
    }
};

// Your SparseVector object will be instantiated and called as such:
// SparseVector v1(nums1);
// SparseVector v2(nums2);
// int ans = v1.dotProduct(v2);






#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int>v(n),m(n);
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }
    for(int j=0;j<n;j++)
    {
        cin>>m[j];
    }

    vector<pair<int, int>>val;
    vector<pair<int, int>>kal;

    for(int i=0; i<n; i++)
    {
        if(v[i]!=0)
        {
            val.push_back({i,v[i]});
        }
    
    }

    for(int j=0; j<n; j++)
    {
        if(m[j]!=0)
        {
            kal.push_back({j,m[j]});
        }
    }

   for(auto o:val)
    {
        cout<<o.first << "   "<<o.second;
        cout<<endl;
    }

    cout<<endl;
    for(auto p:kal)
    {
        cout<<p.first<<"    "<<p.second;
        cout<<endl;
    }

    int i=0,j=0;
    int sum =0;
     while(i <val.size() && j<kal.size())
     {

            if(val[i].first==kal[j].first)
            {
                sum += val[i].second*kal[j].second;
                i++;
                j++;
            }
            else if(val[i].first<kal[j].first)
            {
                i++;
            }
            else
            {
                j++;
            }
        }

cout<<sum;
    cout<<endl;
}
