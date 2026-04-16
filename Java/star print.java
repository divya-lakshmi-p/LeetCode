import java.util.Scanner;

 class main
{
    public static void main(String args[])
  {
       Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        //int count=0;
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<=i;j++)
            {
                 System.out.print("*");
            }
            System.out.println();
        }
      
    }
       
   
  }


REVERSE PATTERN

import java.util.Scanner;

 class main
{
    public static void main(String args[])
  {
       Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        //int count=0;
        for(int i=n; i>0; i--)
        {
            for(int j=0; j<i;j++)
            {
                 System.out.print("*");
            }
            System.out.println();
        } 
      
    }
       
   
  }

