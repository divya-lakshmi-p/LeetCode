import java.util.Scanner;

 class main
{
    public static void main(String args[])
  {
       Scanner sc = new Scanner(System.in);
        int x = sc.nextInt();
        
        
        

        if(x %3 ==0  && x%5==0)
          System.out.println("YES");
        else
          System.out.println("NO");
       
       

  }

}
