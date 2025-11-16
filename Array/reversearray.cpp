Given an array , reverse the  array , without using any extra space 

Input :
5
1 2 3 4 5
o/p
5 4 3 2 1


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
        cin>>x ;
        v.push_back(x);
    }
    int left=0 , right =n-1;

    while(left<right)
    {
        swap(v[left],v[right]);
        left++;
        right--;
    }

    for(int x:v)
        cout<<x<<" ";
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
        cin>>x ;
        v.push_back(x);
    }
    for(int i=n-1; i<0; i--)
    {
        swap(v[i] , v[n-1-i]);
    }
   for(auto val:v)
    cout<<val<<" ";
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
        cin>>x ;
        v.push_back(x);
    }
    for(int i=n-1; i>=0; i--)
    {
        cout<<v[i];
    }
}
