You are given a constant array A.

You are required to return another array which is the reversed form of the input array.



Problem Constraints

1 <= A.size() <= 10000

1 <= A[i] <= 10000



Input Format

First argument is a constant array A.



Output Format

Return an integer array.



Example Input

Input 1:

A = [1,2,3,2,1]
Input 2:

A = [1,1,10]


Example Output

Output 1:

 [1,2,3,2,1] 
Output 2:

 [10,1,1] 


void reversearray(vector<int>& A, int left , int right)
{
    while(left < right)
    { swap(A[left] , A[right]);
    left++;
    right--;
}
   
}

vector<int> Solution::solve(const vector<int> &A) {


vector<int>B=A;
    int n = B.size();
    reversearray(B,0,n-1);

    return B;

}
