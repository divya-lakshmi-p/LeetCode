
Given an array, return the  length of the smallest subarray that contains both the  max and min of the subarray
INput L
11
2 2 6 4 5 1 5 2 6 4 1

Output:
3

#include<bits/stdc++.h>
  using namespace std;

  int main()
  {
    int n;
    cin >>n;
    vector<int>v(n);
    int maxi=INT_MIN, mini=INT_MAX,ans=INT_MAX;
    for(int i=0;i<n;i++)
    {
      cin>>v[i];

      maxi = max(maxi ,v[i]);
      mini = min(mini , v[i]);
    }

    for(int i=0; i<n; i++)
    {
      if(v[i]==mini)
      {
        for(int j=i; j<n; j++)
        {
          if(v[j]==maxi)
          {
              ans= min(ans , j-i+1);
          }
        }
      }

      if(v[i]==maxi)
      {
        for(int j=i;j<n; j++)
        {
          if(v[j]==mini)
          {
            ans = min(ans , j-i+1);
          }
        }
      }
    }

    cout<<ans<<endl;
    
  }











  #include<bits/stdc++.h>
  using namespace std;

  int main()
  {
    int n;
    cin >>n;
    vector<int>v(n);
    int maxi=INT_MIN, mini=INT_MAX,ans=INT_MAX;
    for(int i=0;i<n;i++)
    {
      cin>>v[i];

      maxi = max(maxi ,v[i]);
      mini = min(mini , v[i]);
    }

    int lastmin = -1 , lastmax =-1;

    for(int i=0; i<n; i++)
    {
      if(v[i]==mini)
        lastmin = i;
      if(v[i]==maxi)
        lastmax=i;

        if(lastmin != -1 && lastmax !=-1)
        {
           ans = min( ans , abs(lastmin-lastmax)+1);
        }
    }

    cout<<ans<<endl;
    

  }
