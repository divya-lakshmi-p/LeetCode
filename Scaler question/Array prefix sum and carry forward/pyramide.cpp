
ake an integer N as input, and print the corresponding Inverted Full Pyramid pattern for N.



For example if N = 5 then pattern will be like:

* * * * * 
 * * * * 
  * * * 
   * *    
    * 
NOTE: There should be exactly one extra space after each * for each row.













Problem Constraints

2 <= N <= 100



Input Format

First and only line of input contains a single integer N.



Output Format

Output the Inverted Full Pyramid pattern corresponding to the given N.



Example Input

Input 1:











 2
Input 2:

 3
Input 3:

 4






Example Output

Output 1:











* * 
 *  
Output 2:

* * * 
 * *  
  * 
Output 3:

* * * * 
 * * *  
  * *
   *
   









#include<iostream>

using namespace std;

int main()  {
  
  int n;
  cin>>n;

  for(int i=0;i<n; i++)
  {
        for(int r=0; r<i; r++)
      {
          cout<<" ";
      }
      for(int s=0; s<n-i; s++)
      {
          cout<<"*"<<" ";
      }
      
    
      cout<<endl;
  }
    return 0;
}
