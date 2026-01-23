Take an integer N as input, print the corresponding pattern for N.

For example if N = 4 then pattern will be like:

1
1 2
1 2 3
1 2 3 4

NOTE: There should be no extra spaces after last integer.


Problem Constraints

1 <= N <= 100



Input Format

First and only line of input contains a single integer N.



Output Format

Output the pattern corresponding to the given N.

NOTE:

There should be no extra spaces after last integer and before first integer in any row.
All integers in any row in the pattern are space separated.





Example Input

Input 1:










 2
Input 2:

 3











Example Output

Output 1:










1
1 2
Output 2:

1
1 2
1 2 3











Example Explanation

 Print the pattern as described.









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
                cout<<j+1;
                if (j < i) cout << " ";
            }
           
            cout<<endl;
        }
    
    return 0;
}
