Given an integer array A of size N. In one second, you can increase the value of one element by 1.

Find the minimum time in seconds to make all elements of the array equal.


Problem Constraints

1 <= N <= 1000000
1 <= A[i] <= 1000


Input Format

First argument is an integer array A.


Output Format

Return an integer denoting the minimum time to make all elements equal.


Example Input

A = [2, 4, 1, 3, 2]


Example Output

8



int Solution::solve(vector<int> &A) {

   /* sort(A.begin() ,  A.end());
    int n=A.size();

int count=0,k=0;
    for(int i=0; i<A.size(); i++)
    {
        if(A[n-1]!= A[i])
        {
            count=A[n-1]-A[i];
            k+=count;
        }

    }

    return k;*/
    long long count =0;
    int maxi = A[0];

    for(int i=0;i<A.size(); i++)
    {
        maxi = max(maxi, A[i]);
    }

    for(auto x:A)
    {
        count+=(maxi-x);
    }

return count;
}
