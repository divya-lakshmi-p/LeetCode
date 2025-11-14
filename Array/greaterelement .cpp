
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

*/---2nd

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
    int count=1;
    int maX=v[0];
    int N=v.size();
    for (int i=1; i<v.size(); i++)
    {
        
            if(maX<v[i])
            {    maX=v[i];
                count=1;
                
              
            }
            else if(v[i]==maX)
                count++;
            
       
    }
    int out= v.size()-count;
    cout<<maX<<" "<<out<< " "<<N<<endl;
}




3rd #include<bits/stdc++.h>
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
    int maX=v[0];
    for (int i=0; i<v.size(); i++)
    {
        if(maX<v[i])
            {    maX=v[i];
            
            }
       
    }
    for(int i=0; i<v.size(); i++)
    {
        if(maX!=v[i])
            count++;
    }
    cout<<maX<<" "<<count<< endl;
}
