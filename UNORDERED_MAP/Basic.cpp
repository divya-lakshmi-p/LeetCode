
BASIC question

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>> n;
    vector<string>v;
    for(int i=0; i<n; i++)
    {
        string s;
        cin>>s;
        v.push_back(s);
    }
    unordered_map<char,int>mp;
    for(auto &str :v)
    { for(char c:str)
        { 
            mp[c]++;
        }
          
   }
     for(auto &val:mp)
        cout<<val.first << " "<<val.second<<endl;
}
