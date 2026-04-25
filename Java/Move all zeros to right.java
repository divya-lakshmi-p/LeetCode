import java.util.Scanner;
import java.util.HashSet;


class main
{
    public static void main(String args[])
    {
         Scanner sc = new Scanner(System.in);

         int n = sc.nextInt();

         int [] arr = new int [n];
          
         for(int i=0; i<n; i++)
         {
            arr[i]=sc.nextInt();
            
         }

         int nonzero =0;
         int  tempe =0;

         for(int i=0; i<n; i++)
         {
            if(arr[i]!=0)
            {        tempe =arr[i];
                    arr[i]=arr[nonzero];
                    arr[nonzero]= tempe;

                    nonzero++;

                //swap(arr[nonzero] , arr[i]);
            }
         }
         
        for(int i=0; i<n; i++)
        {
System.out.print(arr[i]);
        }
         


        



    }
}








