Take an integer N as input, print the corresponding stair pattern for N.

For example if N = 4 then stair pattern will be like:

*
**
***
****

Problem Constraints

1 <= N <= 100



Input Format

First and only line of input contains a single integer N.



Output Format

Output the stair pattern corresponding to the given N.



Example Input

Input 1:

 2
Input 2:

 3


Example Output

Output 1:

 *
 **
Output 2:

 *
 **
 ***








#include<iostream>

using namespace std;

int main()  {
    // YOUR CODE GOES HERE
    // Please take input and print output to standard input/output (stdin/stdout)
    // E.g. 'cin' for input & 'cout' for output

        int n;
        cin>>n;

     for(int i=0;  i<n; i++)
        {
            for(int j=0; j<=i; j++)
            {
                cout<<"*"<<"";
            }
           
            cout<<endl;
        }
    
    return 0;
}
