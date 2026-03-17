#include<bits/stdc++.h>
using namespace  std;

int main()
{
  int row =3,column = 3;
    vector<vector<int>>mat(row , vector<int>(column));
    for(int i=0;i<row; i++)
      {
      for(int j=0; j<column; j++)
      {
        cin>>mat[i][j];
     }
    }

   for(int i=0; i<row; i++)
   {
    for(int j=0; j<column; j++)
    {
        if(i == 0 || i==row-1||j==0||j==column-1)
          cout<<mat[i][j];
        else
          cout<<" ";
    }
    cout<<endl;
   }
  return 0;
}

Input:

1 2 3 4 5 6 7 8 9

Output:
123
4 6
789
