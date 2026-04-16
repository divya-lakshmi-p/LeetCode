import java.util.Scanner;

 class main
{
    public static void main(String args[])
  {
       Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        //int count=0;
        for(int i=1; i<=n; i++)
        {
            for(int j=1; j<=i;j++)
            {
                 System.out.print(i);
            }
            System.out.println();
        } 
      
    }
       
   
  }


Input:
5
Ouput:
1
2 2
3 3 3
4 4 4 4
5 5 5 5 5
