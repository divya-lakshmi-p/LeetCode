Problem Description

Given an array of integers A and multiple values in B, which represents the number of times array A needs to be left rotated.

Find the rotated array for each value and return the result in the from of a matrix where ith row represents the rotated array for the ith value in B.



Problem Constraints

1 <= length of both arrays <= 2000 -10^9 <= A[i] <= 10^9 0 <= B[i] <= 2000


Input Format

The first argument given is the integer array A.
The second argument given is the integer array B.


Output Format

Return the resultant matrix.


Example Input

Input 1:
 
    A = [1, 2, 3, 4, 5]
    B = [2, 3]

Input 2:

  
    A = [5, 17, 100, 11]
    B = [1]




Example Output

Output 1:
 
    [ [3, 4, 5, 1, 2]
     [4, 5, 1, 2, 3] ]


Output 2:

    
    [ [17, 100, 11, 5] ]



Example Explanation

for input 1 -> B[0] = 2 which requires 2 times left rotations

1: [2, 3, 4, 5, 1]

2: [3, 4, 5, 1, 2]

B[1] = 3 which requires 3 times left rotation

1: [2, 3, 4, 5, 1]

2: [3, 4, 5, 1, 2]

2: [4, 5, 1, 2, 4]Multile 






vector<vector<int> > Solution::solve(vector<int> &A, vector<int> &B) {


    vector<vector<int>>res;

    int n=A.size();

    for(auto k:B)
    {
        k=k%n;

        vector<int>row;;

        for(int i=k; i<n; i++)
        {
            row.push_back(A[i]);
        }

        for(int j=0; j<k; j++)
        {
            row.push_back(A[j]);
        }

        res.push_back(row);
    }

    return res;
}













#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n,m;
  cin >> n>>m;

  vector<int>v;
  vector<int>b;
  vector<vector<int>>ans;
  vector<int>row;
  for(int i=0; i<n;i++)
  {
    int x;
    cin>>x;

    v.push_back(x);
  }
  for(int i=0; i<m;i++)
  {
    int l;
    cin>>l;

    b.push_back(l);
  }
  
  for(auto k:b)
  {
    k=k%n;

    for(int i=k; i<n; i++)
    {
      row.push_back(v[i]);
    }

    for(int j = 0; j<k; j++)
    {
      row.push_back(v[j]);
    }
  }
  ans.push_back(row);

  for(auto val:ans)
  {for(auto P:val)
    {
      cout<<P<<" ";
    }
    
  }

 
}
