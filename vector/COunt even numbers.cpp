#include<bits/stdc++.h>
using namespace  std;

int main()
{
  int row =2,column = 3, sum=0;
    vector<vector<int>>mat(row , vector<int>(column));
    for(int i=0;i<row; i++){for(int j=0; j<column; j++)
      {cin>>mat[i][j];
      if(mat[i][j]%2==0)
        sum++;}}cout<<sum<<endl;
  return 0;
}
INput:
2 4 6 8 10 1
Output:
5
