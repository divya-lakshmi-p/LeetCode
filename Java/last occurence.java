import java.util.Scanner;
import java.util.HashSet;


class main
{
    public static void main(String args[])
    {
         Scanner sc = new Scanner(System.in);

         int n = sc.nextInt();

         int [] arr = new int [n];
         int k = sc.nextInt();
          
         for(int i=0; i<n; i++)
         {
            arr[i]=sc.nextInt();
            
         }
System.out.println(lastoccurence(arr ,k));
} 


static int lastoccurence(int [] arr , int k)
{

   int low =0 ;
   int high = arr.length-1;
   int ans =-1;

   while(low<=high)
   {
      int mid = low +(high-low)/2;

      if(arr[mid]==k)
      {
            ans = mid;
            low = mid+1;
      }
      else if(arr[mid]>k)
         high = mid-1;
      else
         low = mid+1;
   }
   return ans;
}
 
    
} 
                


        



    









