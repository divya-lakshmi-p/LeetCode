import java.util.Scanner;

 class main
{
    public static void main(String args[])
  {
       
    Scanner sc = new Scanner(System.in);

    int n = sc.nextInt();
    Boolean  find = false;

    int target = sc.nextInt();
    int [] arr = new int[n];
    
    for(int i=0; i<n; i++)
    {
        arr[i]=sc.nextInt();

        if(target == arr[i])
        {
            find = true;

        }
        
    }

    if(find)
            System.out.println("Target found");
    else
        System.out.println("Target not found");
    }
        
    }
       
   


  
