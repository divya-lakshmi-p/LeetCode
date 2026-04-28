import java.util.Scanner;
import java.util.HashSet;


class main
{
    public static void main(String args[])
    {
         Scanner sc = new Scanner(System.in);

         int n = sc.nextInt();

         int [] arr = new int [n-1];
         int k = sc.nextInt();
          
         for(int i=0; i<n-1; i++)
         {
            arr[i]=sc.nextInt();
            
         }
System.out.println(binarysearch(arr ,k));
} 


static int binarysearch(int [] arr , int k)
{

   int low =0 ;
   int high = arr.length-1;

   while(low<=high)
   {
      int mid = low +(high-low)/2;

      if(arr[mid]==k)
            return mid;
      else if(arr[mid]>k)
         high = mid-1;
      else
         low = mid+1;
   }
   return -1;
}
 
    
} 
                


        



    









