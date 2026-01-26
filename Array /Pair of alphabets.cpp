Given a string which containes lower case alphabets return the no of pairs (i,j)(i<j) such that pairs shuld match a given string

INPUT :aggaggaaaggg      ag

output:
21


#include<bits/stdc++.h>
  using namespace std;

  int main()
  {
    string s,Expected;
    cin>>s>>Expected;

    int count =0 , pairs=0;

    char first =Expected[0];
    char second = Expected[1];
    for(int i=0; i<s.length(); i++)
    {   char ch = s[i];
      if(ch==first)
        count++;
      else if(ch==second)
        pairs+=count;
    }
    

    cout<<pairs;
    



    //one method
    

 /*string s="ag";
  int count=0;

  for(int i=0; i<n.length(); i++)
  {
    for(int j = i+1; j<n.length(); j++)
    {
      if(n[i]== 'a' && n[j]=='g')
                count++;

    }
  
    
  }


  cout<<count<<endl;*/



}
