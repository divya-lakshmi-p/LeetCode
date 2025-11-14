
Given an array elements count the no of elemennts that  have atleast 1 greater elements than that 
Input 7
3 -2 6 8 4 8 5


#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    vector<int>v;
    for(int i=0; i<n; i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    int count=0;
    for (int i=0; i<v.size(); i++)
    {
        for(int j=0; j<v.size(); j++)
        {  
            if(v[i]<v[j])
            { count++;
              break;
            }
       }
    }
    cout<<count<<endl;
}
