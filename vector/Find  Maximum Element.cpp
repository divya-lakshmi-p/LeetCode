#include<bits/stdc++.h>
using namespace  std;

int main()
{
  int row =2;
  int column = 3;
  int Max = INT_MIN;

  vector<vector<int>>mat(row , vector<int>(column));

  for(int i=0;i<row; i++)
  {
    for(int j=0; j<column; j++)
    {
      cin>>mat[i][j];
      Max = max(Max , mat[i][j]);
      
    }
  }

cout<<Max<<endl;

  
  return 0;
}
Input:
7 8 9 5 6 10
output:
10
