import java.util.Scanner;

 class main
{
    public static void main(String args[])
  {
       
    Scanner sc = new Scanner(System.in);

    int n = sc.nextInt();
    int [] arr = new int[n];
    int sum =Integer.MAX_VALUE;
    for(int i=0; i<n; i++)
    {
        arr[i]=sc.nextInt();
        if(sum>arr[i])
            sum = arr[i];
        
    }

    System.out.println(sum);
    }
       
   
  }

  
