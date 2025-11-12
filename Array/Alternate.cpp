
Given an array arr[], the task is to print every alternate element of the array starting from the first element.

Examples:

Input: arr[] = [10, 20, 30, 40, 50]
Output: 10 30 50
Explanation: Print the first element (10), skip the second element (20), print the third element (30), skip the fourth element(40) and print the fifth element(50).

Input: arr[] = [-5, 1, 4, 2, 12]
Output: -5 4 12

#include<bits/stdc++.h>
using namespace std;

int main()
{
   
    int n;
    cin>>n;
     vector<int>v;
    for(int i =0;i<n;i++)
    {   int x;
        cin>>x;
        v.push_back(x);
    }
    for(int i=0;i<n;i+=2)
    {
        cout<<v[i];
    }
}
