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
