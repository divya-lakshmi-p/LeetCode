left Rotation


#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int k;
    cin>>k;
    vector<int>v(n);
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }
    vector<int>res(n);
    //k=k%n;
    for(int i=0; i<n; i++)
    {
       int position = (i+k)%n;
       res[position] = v[i];
    }
    for(auto val:res)
      cout<<val<<" ";
}



#include<bits/stdc++.h>
using namespace std;
void reversearray(vector<int> &v , int left , int right)
{
    while(left<right)
    {swap(v[left],v[right]);
     left++;
     right--;}
     

}
void rotatearr(vector<int>&v ,int k)
{   int n = v.size();
    reversearray(v,0,n-1);
    reversearray(v,0,k-1);
    reversearray(v,k,n-1);

    
}

int main()
{
    int n;
    cin>>n;
    int k;
    cin>>k;
    vector<int>v(n);
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }
    rotatearr(v,k);

    for(int val:v)
      cout<<val<< " ";
}
