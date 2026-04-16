import java.util.Scanner;

 class main
{
    public static void main(String args[])
  {
       Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        
        int before = n;
         
        int rev =0;

        while(n!=0)
            {
                int digit = n%10;
                rev = rev*10+digit;
                n /= 10;
            }

            if(rev == before)
            	System.out.println("Palindrome");
            else
            	System.out.println("Not Palindrome");
      
    }
       
   
  }
