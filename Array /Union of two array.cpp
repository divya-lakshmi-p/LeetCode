Union of Two Arrays
Last Updated : 30 Jun, 2025
Given two arrays a[] and b[], Return union of both the arrays in any order.
Note: Union of two arrays is an array having all distinct elements that are present in either array.

Examples:

Input : a[] = [1, 2, 3, 2, 1], b[] = [3, 2, 2, 3, 3, 2]
Output : [3, 2, 1]
Explanation: 3, 2 and 1 are the distinct elements present in either array.

Input : a[] = [1, 2, 3], b[] = [4, 5, 6]
Output : [1, 2, 3, 4, 5, 6]
Explanation: 1, 2, 3, 4, 5 and 6 are the elements present in either array.


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
    set<int>s;
    for(int i=0; i<n; i++)
    {
         s.insert(v[i]);
    }
    for(int j=0;j<m;j++)
{
    s.insert(v1[j]);
}
   for(auto val:s)
   {
    cout<<val<<" ";
   }
}



if order matter then we have to go for set , but if its not matter then we can go with unordered_set that is the optimal approach
