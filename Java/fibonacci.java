import java.util.Scanner;

 class main
{
    public static void main(String args[])
  {
       Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int count=0;
        int a =0, b=1;
        for(int i=1; i<=n; i++)
        {
            System.out.print(a +" ");
            count = a+b;
            a=b;
            b=count;

        } 
      
    }
       
   
  }

