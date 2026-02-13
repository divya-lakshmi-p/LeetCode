Input: "madam"
Output: true



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

      string stone = jewels;
      reverse(jewels);


      (stone == jewels)?cout<<"True":cout<<"False";
      
      //cout<<jewels;
      
      
     
    }







    #include<bits/stdc++.h>
    using namespace std;
    bool ispalindrome(string & jewels)
    {

      int length = jewels.length();

      for(int i=0; i<length/2; i++)
      {
        if(jewels[i] !=  jewels[length-i-1])
        { 
          return false;

        }
     
      }
      return true;
    }

    int main()
    {
      string jewels;
      cin>>jewels;

     
     cout<< (ispalindrome(jewels)?"True":"False");


      //(stone == jewels)?cout<<"True":cout<<"False";
      
      //cout<<jewels;
      
      
     
    }
