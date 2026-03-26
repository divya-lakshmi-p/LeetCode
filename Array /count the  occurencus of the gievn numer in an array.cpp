#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n , target;
  cin>>n >>target;

  vector<int>v(n);
  int count=0;

  for(int i=0; i<n;i++)
  {
    cin>>v[i];
    if(v[i]==target)
     count++;
  }

 cout<<count<<endl;


}


#include<bits/stdc++.h>
using namespace std;
int repeattimes(vector<int> &v , int target)
{  int count=0;
  for(auto val:v)
  {
    if(val==target)
      count++;
  }

  return count;
}
int main()
{
  int n , target;
  cin>>n >>target;

  vector<int>v(n);
  //int count=0;

  for(int i=0; i<n;i++)
  {
    cin>>v[i];
    //if(v[i]==target)
     // count++;
  }

 cout<<repeattimes(v, target);


}







#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n , target;
  cin>>n >>target;

  int count=0;

  for(int i=0; i<n;i++)
  {
      int x;
      cin>>x;
    if(x==target)
     count++;
  }

 cout<<count<<endl;


}

