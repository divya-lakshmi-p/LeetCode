Given a string, reverse it.


Input:  "hello"
Output: "olleh"



Algorithm

Initialize:

left = 0
right = n - 1
While left < right:
Swap s[left] and s[right]
left++
right--
Done ✅




#include<bits/stdc++.h>
using namespace std;

int main()
{
  string n;
  getline(cin, n);
  int left =0 ,right = n.size()-1;


  while(left <right)
  {

      swap(n[left] , n[right]);
      
        left++;
        right--;
         

  }
  cout<<n;
}


TC:o(n)
