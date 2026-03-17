  #include<bits/stdc++.h>
  using namespace std;

  int main()
  {
    int n;
    cin>>n;
    bool same = true;
    vector<int>v(n) ,  W(n);
    unordered_map<int, int>mp;
    for(int i=0; i<n; i++)
    {
      cin>>v[i];
      mp[v[i]]++;
    }
    for(int i=0; i<n; i++)
    {
      cin>>W[i];
      mp[W[i]]--;
    }

   for(auto val: mp)
   {
       if(val.second !=0)
       {same = false;
          break;}
   }

   (same)?cout<<"Yes\n":cout<<"No\n";
   

    cout<<endl;
    
  }

Input:
2
1 2
1 2

Output:
Yes


Input:
4
1 2  3  4
6 5 7 1
Ouput:false
