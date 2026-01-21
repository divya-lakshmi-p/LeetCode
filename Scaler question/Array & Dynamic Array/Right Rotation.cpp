Problem Description

Given an integer array A of size N and an integer B, you have to print the same array after rotating it B times towards the right.


Problem Constraints

1 <= N <= 106
1 <= A[i] <=108
1 <= B <= 109


Input Format

There are 2 lines in the input

Line 1: The first number is the size N of the array A. Then N numbers follow which indicate the elements in the array A.

Line 2: A single integer B.


Output Format

Print array A after rotating it B times towards the right.


Example Input

Input 1 :
4 1 2 3 4
2


Example Output

Output 1 :
3 4 1 2









#include<bits/stdc++.h>

using namespace std;
void reversearray(vector<int>& v ,  int left , int right)
{


    while(left<right)
    {
        swap(v[left] ,v[right]);
        left++;
        right--;
    }
}
void rotatearr(vector<int>& v , int k)
{
     int n=v.size();
    k=k%n;
    reversearray(v,0,n-1);
    reversearray(v,0,k-1);
    reversearray(v,k,n-1);
}

int main()  {
    // YOUR CODE GOES HERE
    // Please take input and print output to standard input/output (stdin/stdout)
    // E.g. 'cin' for input & 'cout' for output
    int n;
    cin>>n;

    vector<int>v(n);
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }
    int k;
    cin>>k;

    rotatearr(v,k);

for(auto x:v)
{
    cout<<x<<" ";
}
    return 0;
}
