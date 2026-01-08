

i/p
    5
1 2 3 4 5
    o/p
1 3 6 10 15 
2 5 9 14 
3 7 12 
4 9 
5
TC:o(n^3)

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int>v(n);
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    
    }
int sum=0;
    for(int i=0; i<n; i++)
    {
        for(int j=i; j<n; j++)
        { sum =0;
            for(int k=i; k<=j; k++)
            {
                sum+=v[k];
            }
            cout<<sum<<" "; 
        }
        cout<<endl;
    }
cout<<endl;
}

5
1 2 3 4 5
15 
14 
12 
9 
5 
5 

TC:o(n^2)
    #include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int>v(n);
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    
    }
int sum=0;
    for(int i=0; i<n; i++)
    {sum =0;
        for(int j=i; j<=n; j++)
        { sum+=v[j];
            }
        cout<<sum<<" "; 
        cout<<endl;
    }
cout<<endl;
}




i/p 5
    1 2 3 4 5
    o/p
    (1)+(1+2)+(1+2+3)+(1+2+3+4)+(1+2+3+4+5)
    (2)+(2+3)+(2+3+4)+(2+3+4+5)
    (3)+(3+4)+(3+4+5)
    (4)+(4+5)
    (5)
    105
o(n) 
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int>v(n);
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    
    }
int sum=0,s=0,e=0;
    for(int i=0; i<n; i++)
    {
        s=i+1;   //cput of starting index choices not the index number 
        e=n-i;//cput of ending  index choices not the index number 
       sum+=v[i]*(s*e); 
       cout<<"sum"<<" "<<sum;
    }
    cout<<sum<<" ";
cout<<endl;
}
