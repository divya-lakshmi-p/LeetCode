There are n people that are split into some unknown number of groups. Each person is labeled with a unique ID from 0 to n - 1.

You are given an integer array groupSizes, where groupSizes[i] is the size of the group that person i is in. For example, if groupSizes[1] = 3, then person 1 must be in a group of size 3.

Return a list of groups such that each person i is in a group of size groupSizes[i].

Each person should appear in exactly one group, and every person must be in a group. If there are multiple answers, return any of them. It is guaranteed that there will be at least one valid solution for the given input.

 

Example 1:

Input: groupSizes = [3,3,3,3,3,1,3]
Output: [[5],[0,1,2],[3,4,6]]
Explanation: 
The first group is [5]. The size is 1, and groupSizes[5] = 1.
The second group is [0,1,2]. The size is 3, and groupSizes[0] = groupSizes[1] = groupSizes[2] = 3.
The third group is [3,4,6]. The size is 3, and groupSizes[3] = groupSizes[4] = groupSizes[6] = 3.
Other possible solutions are [[2,1,6],[5],[0,4,3]] and [[5],[0,6,2],[4,3,1]].
Example 2:

Input: groupSizes = [2,1,3,3,3,2]
Output: [[1],[0,5],[2,3,4]]


solution 1:
class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
        

        unordered_map<int , vector<int>>mp;
        vector<vector<int>>res;
        int n= groupSizes.size();

        for(int i=0; i<n; i++)
    {
        mp[groupSizes[i]].push_back(i);
    }

    for(auto val:mp)
    {
        int size =val.first;
        vector<int>&people = val.second;

        for(int i=0; i<people.size(); i+=size)
        {
            vector<int>group;
            for(int j=0; j<size; j++)
            {
                group.push_back(people[i+j]);
            }

            res.push_back(group);
        }
    }

    return res;
    }
};





solution 2


class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
        

    vector<vector<int>>mp;

    vector<int>res[groupSizes.size()+1];
    for(int i=0; i<groupSizes.size(); i++)
    {
        res[groupSizes[i]].push_back(i);


        if(res[groupSizes[i]].size() == groupSizes[i])
            {
                mp.push_back(res[groupSizes[i]]);
                    res[groupSizes[i]].clear();
            }
    }

        /*unordered_map<int , vector<int>>mp;
        vector<vector<int>>res;
        int n= groupSizes.size();

        for(int i=0; i<n; i++)
    {
        mp[groupSizes[i]].push_back(i);
    }

    for(auto val:mp)
    {
        int size =val.first;
        vector<int>&people = val.second;

        for(int i=0; i<people.size(); i+=size)
        {
            vector<int>group;
            for(int j=0; j<size; j++)
            {
                group.push_back(people[i+j]);
            }

            res.push_back(group);
        }
    }

    return res;*/

    return mp;
    }
};



//Input: groupSizes = [3,3,3,3,3,1,3]
//Output: [[5],[0,1,2],[3,4,6]]


#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    unordered_map<int , vector<int>>mp;
    for(int i=0; i<n;i++)
    {
        mp[v[i]].push_back(i);
    }
    vector<vector<int>>final;
    for(auto val:mp)
    {
        int size = val.first;
        vector<int> &people = val.second;

        for(int i=0; i<people.size(); i+=size)
        {    // 3 ->0 1 2 3 4 6 
            vector<int>group;
            for(int j=0;j<size;j++)
            {
                group.push_back(people[i+j]);

            }

            final.push_back(group);
        }   
    }

     for(auto &grp : final)
    {
        cout << "[";
        for(int i = 0; i < grp.size(); i++)
        {
            cout << grp[i];
            if(i + 1 < grp.size()) cout << ",";
        }
        cout << "] ";
    }
}
