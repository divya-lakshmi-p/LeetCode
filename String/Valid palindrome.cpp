Given a string, check if it is a palindrome
👉 Ignore:

Spaces
Special characters
Case differences



Input: "A man, a plan, a canal: Panama"
Output: true



Algorithm (Step-by-Step)

Initialize:

left = 0
right = n - 1
Loop while left < right:
If character is not alphanumeric → skip it
Convert both characters to lowercase
Compare:
If not equal → return false
Move pointers:
left++
right--
If loop finishes → return true




#include<bits/stdc++.h>
using namespace std;

int main()
{
  string n;
  getline(cin, n);
  int left =0 ,right = n.size()-1;


  while(left <right)
  {

    while(left<right  && !isalnum(n[left]))
      left++;
    while(left<right  &&  !isalnum(n[right]))
      right--;

    
      if(tolower(n[left]) != tolower(n[right]))
            { cout<<false;
              return 0;}
      
        left++;
        right--;
         

  }
  cout<<true;
}
