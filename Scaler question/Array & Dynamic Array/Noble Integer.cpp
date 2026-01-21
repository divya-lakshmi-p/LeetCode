Problem Description

Given an integer array A, find if an integer p exists in the array such that the number of integers greater than p in the array equals p.



Problem Constraints

1 <= |A| <= 2*105
-108 <= A[i] <= 108


Input Format

First and only argument is an integer array A.



Output Format

Return 1 if any such integer p is present else, return -1.



Example Input

Input 1:

 A = [3, 2, 1, 3]
Input 2:

 A = [1, 1, 3, 3]


Example Output

Output 1:

 1
Output 2:

 -1


Example Explanation

Explanation 1:

 For integer 2, there are 2 greater elements in the array..
Explanation 2:

 There exist no integer satisfying the required conditions.


TLE solution


int Solution::solve(vector<int> &A) {
    sort(A.begin(), A.end());
    bool sum = false;
  int count =0 , n=A.size();

  for(int i=0; i<n; i++)
  {count =0;
    for(int j =i+1; j<n; j++)
    {
      if(A[j] > A[i])
      {
        count++;
      }
    }
    if(count == A[i])
        return 1;
  }

    return -1;
}






The idea is like after sorting the array for example if array is 1 1 3 4 5 6

now i am standing there in index 2 and the value is 3 i have to find out how many elemente greater than 3 is presented and the count sshould be matched with value if its there then we have to return 1 else -1;




int Solution::solve(vector<int> &A) {
    sort(A.begin(), A.end());
 
  int count =0 , n=A.size();

  for(int i=0; i<n; i++)
  {
      if(i<n-1 && A[i]==A[i+1])
        continue;
    //core idea 
     count = n-i-1;

     if(count == A[i])
        return 1;
  }

    return -1;
}
