#include<bits/stdc++.h>
using namespace  std;

int main()
{
  int row =2;
  int column = 3 ,sum=0;

  vector<vector<int>>mat(row , vector<int>(column));

  for(int i=0;i<row; i++)
  {
    for(int j=0; j<column; j++)
    {
      cin>>mat[i][j];
      sum += mat[i][j];
    }
  }

cout<<sum;
  
  return 0;
}

Input:
1 2 3 4 5 6

output:
21
