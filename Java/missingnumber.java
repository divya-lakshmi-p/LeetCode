import java.util.Scanner;
import java.util.HashSet;


class main
{
    public static void main(String args[])
    {
         Scanner sc = new Scanner(System.in);

         int n = sc.nextInt();

         int [] arr = new int [n-1];
          
         for(int i=0; i<n-1; i++)
         {
            arr[i]=sc.nextInt();
            
         }
System.out.println(findMissing(arr ,n));
} 
  static int findMissing( int [] arr, int n)
    {      // int left = 0 , right = arr.length-1;

       int missingnum = n;

       for(int i=1; i<n; i++)
       {
        missingnum^= i;
       }

       for(int i=0; i<arr.length; i++){
        missingnum^=arr[i];
       }

       return missingnum;

    }
} 
                


        



    









