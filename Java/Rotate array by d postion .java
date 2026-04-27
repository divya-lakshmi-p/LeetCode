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

    
         int  tempe  = sc.nextInt();
         //int change =0;
          rotatearray(arr ,tempe);




    for(int i=0; i<n; i++)
    {
        System.out.print(arr[i]);
    }

         
    } 

     static void rotatearray(int[] arr , int tempe)
     {              int n = arr.length;
               tempe = tempe%n;
                reversearray(arr , 0 , n-1);
                reversearray(arr , 0 , tempe-1);
                reversearray(arr , tempe , n-1);
     }

     static void reversearray( int [] arr, int left , int right)
    {      // int left = 0 , right = arr.length-1;

        while(left<right)
        {
            int  change = arr[left];
            arr[left]=arr[right];
            arr[right]=change;

            left++;
            right--;


            
        }
    }
} 
                


        



    









