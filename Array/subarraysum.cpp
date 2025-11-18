
Given an array , print the sums of all the subarray

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
  
    
    for (int i=0; i<v.size(); i++)
    {
        for(int j=i; j<v.size(); j++)
        {  int sum =0;
            //cout<<"SUM"<<sum<<endl;
            for(int k=i; k<=j; k++)
            {
                 sum +=v[k];
            }
            cout<<sum <<" ";
        }
        cout<<endl;
    }


}


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
  
    
    for (int i=0; i<v.size(); i++)
    {int sum =0;
        for(int j=i; j<v.size(); j++)
        {  
            
                 sum +=v[j];
        }
            cout<<sum <<" ";
        
        cout<<endl;
    }


}
