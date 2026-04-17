import java.util.Scanner;

 class main
{
    public static void main(String args[])
  {
       
    Scanner sc = new Scanner(System.in);

    int n = sc.nextInt();
   

    int first = Integer.MIN_VALUE , second = Integer.MIN_VALUE;
    int [] arr = new int[n];
    
    for(int i=0; i<n; i++)
    {
        arr[i]=sc.nextInt();

        if(arr[i]>first)
        {   second = first;
            first = arr[i];
            
        }
        else if(arr[i]<first && arr[i]>second)
        {
            second = arr[i];
        }

        }

        System.out.println(second);

        
        
    }

    
    }
        
    
       
   


  
