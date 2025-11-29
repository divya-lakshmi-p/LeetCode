You are given an integer array daysLate where daysLate[i] indicates how many days late the ith book was returned.

The penalty is calculated as follows:

If daysLate[i] == 1, penalty is 1.
If 2 <= daysLate[i] <= 5, penalty is 2 * daysLate[i].
If daysLate[i] > 5, penalty is 3 * daysLate[i].
Return the total penalty for all books.

 

Example 1:

Input: daysLate = [5,1,7]

Output: 32

Explanation:

daysLate[0] = 5: Penalty is 2 * daysLate[0] = 2 * 5 = 10.
daysLate[1] = 1: Penalty is 1.
daysLate[2] = 7: Penalty is 3 * daysLate[2] = 3 * 7 = 21.
Thus, the total penalty is 10 + 1 + 21 = 32.

class Solution {
public:
    int lateFee(vector<int>& daysLate) {
        
        int sum =0,n=daysLate.size();

        for(int d:daysLate)
        {
            sum+=(d==1)?1:(d<=5?2*d:3*d);
        }
        /*for(int i=0; i<n;i++)
        {
            if(daysLate[i]==1)
                sum+=1;
            else if(daysLate[i]>=2 && daysLate[i]<=5)
                sum+=2*daysLate[i];
            else
                sum+=3*daysLate[i];
        }

        return sum;*/
    return sum;
    }
};
