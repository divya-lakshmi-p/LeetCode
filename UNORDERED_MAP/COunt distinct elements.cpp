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

    cout<<mp.size();
    
  }

Input:
7
1 2 3 4 5 6 1

Output:
6
