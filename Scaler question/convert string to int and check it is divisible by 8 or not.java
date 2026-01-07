Problem Description

You are given a number A in the form of a string. Check if the number is divisible by eight or not.

Return 1 if it is divisible by eight else, return 0.


Problem Constraints

1 <= length of the String <= 100000
'0' <= A[i] <= '9'


Input Format

The only argument given is a string A.


Output Format

Return 1 if it is divisible by eight else return 0.


Example Input

Input 1:
A = "16"
Input 2:

A = "123"


Example Output

Output 1:
1
Output 2:

0



public class Solution {
    public int solve(String A) {

        int n= A.length();

        if(n<=3)
        {
            int sum = Integer.parseInt(A);
            return (sum %8 == 0)?1:0;
        }

        int result =0;

        int lastone = (A.charAt(n-1) - '0');
        int secondlast = (A.charAt(n-2)-'0');
        int thirdlast = (A.charAt(n-3)-'0');

        int sum = thirdlast *100+secondlast*10+lastone;


       return (sum%8 ==0)? 1: 0;
    }
}



In C++
    int solve(string A) {
    int n = A.length();

    // If the number has less than 3 digits, convert whole thing
    if (n <= 3) {
        int num = stoi(A);
        return (num % 8 == 0) ? 1 : 0;
    }

    // Extract last 3 digits
    int d1 = A[n - 3] - '0';
    int d2 = A[n - 2] - '0';
    int d3 = A[n - 1] - '0';

    int lastThree = d1 * 100 + d2 * 10 + d3;

    return (lastThree % 8 == 0) ? 1 : 0;
}
