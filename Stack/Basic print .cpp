#include<bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin>>n;
    vector<int>v(n);
    
    stack<int>s;

    for(int i=0;i<n;i++)
    {
        cin>>v[i];
        s.push(v[i]);
    }

    int N = s.size();
    cout<< "[ ";
   for(int i=0; i<N; i++)
   {
    cout<<s.top()<<",";
      s.pop();
   }

   cout<<"]"<<endl;
}
