  #include<bits/stdc++.h>
  using namespace std;

  int main()
  {
    int n;
    cin>>n;
    vector<int>v(n);
    unordered_map<int, int>mp;
    for(int i=0; i<n; i++)
    {
      cin>>v[i];
      mp[v[i]]++;
    }

    for(int i=0; i<n; i++)
    {
      if(mp[v[i]] != 1)
      {
        cout<<v[i];
        break;
      }
    }

    cout<<endl;
    
  }


Input:
7
8 9 1 2 9 0 8
Output:
8
