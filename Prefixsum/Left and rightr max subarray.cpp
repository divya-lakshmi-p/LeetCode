left  max array
brute force
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int>v(n) ,left(n) , right(n);

    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }
 // int maxi =v[0];
  left[0]=v[0];
    for(int i=1;i<n;i++)
    {
        left[i]= max(left[i-1] , v[i]);
           
        //left[i]=(maxi);

    }

    for(auto val:left)
    {
        cout<<val<<"  ";
    }
}




optimised

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int>v(n) ,left(n) , right(n);

    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }
  int maxi =v[0];
  left[0]=v[0];
    for(int i=1;i<n;i++)
    {
        maxi= max(maxi , v[i]);
           
        left[i]=(maxi);

    }

    for(auto val:left)
    {
        cout<<val<<"  ";
    }
}













Brute force :right max array

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int>v(n) ,left(n) , right(n);

    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }
    //1 2 3 4 5
  int maxi =v[n-1];
  right[n-1]=v[n-1];
    for(int i=n-2;i>=0;i--)
    {
        maxi= max(maxi , v[i]);
           
        right[i]=(maxi);

    }

    for(auto val:right)
    {
        cout<<val<<"  ";
    }
}







Optimise left and right  max array



#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int>v(n) ,left(n) , right(n);

    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }
   
    left[0] = v[0];
    for(int i=1;i<=n;i++)
    {
        left[i]=max(left[i-1] ,v[i]);

    }
  right[n-1]=v[n-1];
    for(int i=n-2;i>=0;i--)
    {
        right[i]= max(right[i+1] , v[i]);
           
        //left[i]=(maxi);

    }

    cout<<"Rightmaxarray:";
    for(auto val:right)
    {
        cout<<val<<"  ";
    }

    cout<<endl;
    cout<<"leftmaxarray:";

    for(auto val1:left)
    {
        cout<<val1<<" ";
    }
}
