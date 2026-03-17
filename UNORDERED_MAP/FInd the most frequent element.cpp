  #include<bits/stdc++.h>
  using namespace std;

  int main()
  {
    int n , Max = INT_MIN , ans=0;
    cin>>n;
    vector<int>v(n);
    unordered_map<int, int>mp;
    for(int i=0; i<n; i++)
    {
      cin>>v[i];
      mp[v[i]]++;
    }

    for(auto val:mp)
    {
      if(val.second>Max)
      {Max=val.second;
          ans=val.first;}
          
    }
    cout<<ans<<"  "<<Max;

    
  }


Input:
6
1 1 1 1 1 6

Output:
1  5
