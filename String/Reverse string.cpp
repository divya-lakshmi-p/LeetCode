Reverse a string 

Input: "hello"
Output: "olleh"




#include<bits/stdc++.h>
    using namespace std;
    void reverse(string & jewels)
    {

      int left =0 , right =jewels.size()-1;

      while(left<right)
      {
        swap(jewels[left] , jewels[right]);
        left++;
        right--;
      }
    }

    int main()
    {
      string jewels;
      cin>>jewels;


      reverse(jewels);

      cout<<jewels;
      
      
     
    }
