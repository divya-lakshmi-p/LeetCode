import java.util.Scanner;

 class main
{
    public static void main(String args[])
  {
       Scanner sc = new Scanner(System.in);
        int x = sc.nextInt();
        int sum =0;
        for(int i=1; i<=x;i++)
        {
           // int num = sc.nextInt();
             sum +=i ;
            
        }
       System.out.print(sum);
       
   System.out.println();
  }

}
