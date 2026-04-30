1. Count Frequency of Element

👉 Uses: First + Last Occurrence

🧠 Problem
[1,2,2,2,3,4]
target = 2 → output = 3
💡 Idea
count = lastIndex - firstIndex + 1




import java.util.Scanner;
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

         Array.sort(arr);
         
System.out.println((lastoccurence(arr,k)-firstoccurence(arr ,k))+1);
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

static int firstoccurence(int [] arr , int k)
{

   int low =0 ;
   int high = arr.length-1;
   int anss =-1;

   while(low<=high)
   {
      int mid = low +(high-low)/2;

      if(arr[mid]==k)
      {
            anss = mid;
            high = mid-1;
      }
      else if(arr[mid]>k)
         high = mid-1;
      else
         low = mid+1;
   }
   return anss;
}
 
    
} 
                
Find First and Last Position (LeetCode 34)

👉 Uses: Same logic

🧠 Output
[1,2,2,2,3]
target = 2 → [1,3]
💡 Return both
return new int[]{first, last};

        

import java.util.Arrays;
import java.util.Scanner;
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

         Arrays.sort(arr);
         
System.out.println((lastoccurence(arr,k)) +" " +(firstoccurence(arr ,k)));
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

static int firstoccurence(int [] arr , int k)
{

   int low =0 ;
   int high = arr.length-1;
   int anss =-1;

   while(low<=high)
   {
      int mid = low +(high-low)/2;

      if(arr[mid]==k)
      {
            anss = mid;
            high = mid-1;
      }
      else if(arr[mid]>k)
         high = mid-1;
      else
         low = mid+1;
   }
   return anss;
}
 
    
} 
 3. Lower Bound (Insert Position)

👉 Uses: Lower Bound directly

🧠 Problem
[1,3,5,7]
target = 4 → output = 2
💡 Idea

👉 First position where element ≥ target               


import java.util.Arrays;
import java.util.Scanner;
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

         Arrays.sort(arr);
         
System.out.println(lowerbound(arr,k));
} 




static int lowerbound(int [] arr , int k)
{

   int low =0 ;
   int high = arr.length-1;
   int anss =arr.length;

   while(low<=high)
   {
      int mid = low +(high-low)/2;

      if(arr[mid]>=k)
      {
            anss = mid;
            high = mid-1;
      }
      else
         low = mid+1;
   }
   return anss;
}
 
    
} 
4. Upper Bound (Next Greater Element Position)
🧠 Problem
[1,2,2,2,5]
target = 2 → output = 4
💡 Idea

👉 First element strictly greater than target            
import java.util.Arrays;
import java.util.Scanner;
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

         Arrays.sort(arr);
         
System.out.println(upperbound(arr,k));
} 




static int upperbound(int [] arr , int k)
{

   int low =0 ;
   int high = arr.length-1;
   int anss =arr.length;

   while(low<=high)
   {
      int mid = low +(high-low)/2;

      if(arr[mid]>k)
      {
            anss = mid;
            high = mid-1;
      }
      else
         low = mid+1;
   }
   return anss;
}
 
    
} 
                
5. Count Elements ≤ X

👉 Uses: Upper Bound

🧠 Problem
[1,2,2,3,5]
x = 2 → output = 3
💡 Idea
count = upperBound(x)

        

import java.util.Arrays;
import java.util.Scanner;
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

         Arrays.sort(arr);
         
System.out.println(upperbound(arr,k));
} 




static int upperbound(int [] arr , int k)
{

   int low =0 ;
   int high = arr.length-1;
   int anss =arr.length;

   while(low<=high)
   {
      int mid = low +(high-low)/2;

      if(arr[mid]>k)
      {
            anss = mid;
            high = mid-1;
      }
      else
         low = mid+1;
   }
   return anss;
}
 
    
} 
                


6. Count Elements in Range [L, R]

👉 Uses: Upper - Lower

🧠 Problem
[1,2,2,3,4,5]
L=2, R=4 → output = 4
💡 Formula
count = upperBound(R) - lowerBound(L);        



    



import java.util.Arrays;
import java.util.Scanner;
class main
{
    public static void main(String args[])
    {
         Scanner sc = new Scanner(System.in);

         int n = sc.nextInt();

         int [] arr = new int [n];
         int l = sc.nextInt();
         int r = sc.nextInt();
          
         for(int i=0; i<n; i++)
         {
            arr[i]=sc.nextInt();
            
         }

         Arrays.sort(arr);
         
System.out.println(Math.abs( lowerbound(arr,l)-upperbound(arr,r)));
} 
static int lowerbound(int [] arr , int l)
{

   int low =0 ;
   int high = arr.length-1;
   int ans =arr.length;

   while(low<=high)
   {
      int mid = low +(high-low)/2;

      if(arr[mid]>=l)
      {
            ans = mid;
            high = mid-1;
      }
      else
         low = mid+1;
   }
   return ans;
}



static int upperbound(int [] arr , int r)
{

   int low =0 ;
   int high = arr.length-1;
   int anss =arr.length;

   while(low<=high)
   {
      int mid = low +(high-low)/2;

      if(arr[mid]>r)
      {
            anss = mid;
            high = mid-1;
      }
      else
         low = mid+1;
   }
   return anss;
}
 
    
} 
                


 7. Find Peak Element

👉 Uses: Binary Search Pattern

🧠 Problem
[1,2,3,1] → output index = 2
💡 Idea
If mid < mid+1 → go right
Else → go left 



    

import java.util.Scanner;
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

         
         
System.out.println(peakelement(arr));
int index = peakelement(arr);
System.out.print(arr[index]);
} 
static int peakelement(int [] arr )
{

   int low =0 ;
   int high = arr.length-1;


   while(low<high)
   {
      int mid = low +(high-low)/2;

      if(arr[mid]<arr[mid+1])
      {
            low = mid+1;
      }
      else
         high = mid;
   }
   return low;
}




 
    
} 
                


        



    





8. Search in Rotated Sorted Array

👉 Classic interview 🔥

🧠 Problem
[4,5,6,7,0,1,2]
target = 0 → index = 4




import java.util.Scanner;
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
         int target = sc.nextInt();

         
         
System.out.println(peakelement(arr , target));
} 
static int peakelement(int [] arr , int target )
{

   int low =0 ;
   int high = arr.length-1;
   int ans =0;


   while(low<=high)
   {
      int mid = low +(high-low)/2;

      if(arr[mid] ==target)
      {   return mid;
            
      }
      if(arr[low]<=arr[mid])
      {
         if(target >= arr[low] && target  <arr[mid])
         {
            high = mid-1;
         }
         else
         {
            low=mid+1;
         }
      }
      else 
      {
         if(target >=arr[mid] && target <arr[high])
         {
            low = mid+1;
         }
         else
         {
            high = mid-1;
         }
      }
       
   }
   return -1;
}




 
    
} 
                


        



    


























    









