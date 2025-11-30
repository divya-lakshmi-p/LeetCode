You are given an integer array order of length n and an integer array friends.

order contains every integer from 1 to n exactly once, representing the IDs of the participants of a race in their finishing order.
friends contains the IDs of your friends in the race sorted in strictly increasing order. Each ID in friends is guaranteed to appear in the order array.
Return an array containing your friends' IDs in their finishing order.

 

Example 1:

Input: order = [3,1,2,5,4], friends = [1,3,4]

Output: [3,1,4]

Explanation:

The finishing order is [3, 1, 2, 5, 4]. Therefore, the finishing order of your friends is [3, 1, 4].

Example 2:

Input: order = [1,4,5,3,2], friends = [2,5]

Output: [5,2]

Explanation:

The finishing order is [1, 4, 5, 3, 2]. Therefore, the finishing order of your friends is [5, 2].



class Solution {
public:
    vector<int> recoverOrder(vector<int>& order, vector<int>& friends) {
            vector<int>res;
        for(int i=0; i<order.size(); i++)
        {
            for(int j=0; j<friends.size(); j++)
            {
                if(order[i]==friends[j]){
                    res.push_back(order[i]);
                    break;
                }
            }
        }
        return res;
        /*unordered_set<int>s(friends.begin() , friends.end());
        for(auto x:order)
        {
            if(s.count(x))
                res.push_back(x);
        }

        return res;*/
        
    }
};



#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    cin >> n>>k;
    vector<int>v;
    vector<int>t;
    vector<int>res;
    for(int i=0; i<n; i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    for(int i=0; i<k; i++)
    {
        int l;
        cin>>l;
        t.push_back(l);

    }

    unordered_set<int>s;
    for(auto r:t)
    {s.insert(r);}
     

    
    for(auto x:v)
        if(s.count(x))
        {
            res.push_back(x);
        }
    for(auto l:res)

        cout<<l<<" ";
}



