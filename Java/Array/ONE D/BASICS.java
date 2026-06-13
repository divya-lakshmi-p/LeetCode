
1.print array elements 

import java.util.Scanner;

public class Main
{
    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();
        int arr[] = new int[n];
        for(int i=0; i<n; i++)
        {
            arr[i] = sc.nextInt();
            System.out.print(arr[i]+ " ");

        }

    }

}

2.Find sum of array.
import java.util.Scanner;

public class Main
{
    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();
        int arr[] = new int[n];
        int sum =0;
        for(int i=0; i<n; i++)
        {
            arr[i] = sc.nextInt();
            sum +=arr[i];
            
        }
        System.out.print(sum);


    }

}
3.Find average
import java.util.Scanner;

public class Main
{
    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();
        int arr[] = new int[n];
        int sum =0;
        for(int i=0; i<n; i++)
        {
            arr[i] = sc.nextInt();
            sum +=arr[i];
            
        }
        System.out.print(sum/n);


    }

}
4.find maximum
import java.util.Scanner;

public class Main
{
    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();
        int arr[] = new int[n];
        int sum =Integer.MIN_VALUE;
        for(int i=0; i<n; i++)
        {
            arr[i] = sc.nextInt();
            sum = Integer.max(sum , arr[i]);
            
        }
        System.out.print(sum);


    }

}

5. find minimum
import java.util.Scanner;

public class Main
{
    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();
        int arr[] = new int[n];
        int sum =Integer.MAX_VALUE;
        for(int i=0; i<n; i++)
        {
            arr[i] = sc.nextInt();
            sum = Integer.min(sum , arr[i]);
            
        }
        System.out.print(sum);


    }

}

6.count even numbers
import java.util.Scanner;

public class Main
{
    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();
        int arr[] = new int[n];
        int even=0,odd = 0;
        
        for(int i=0; i<n; i++)
        {
            arr[i] = sc.nextInt();

            if((arr[i]&1) !=0)
            {
                odd++;
            }
            else
            {
                even++;
            }
        }
        System.out.print(even);


    }

}
7.count odd numbers 
import java.util.Scanner;

public class Main
{
    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();
        int arr[] = new int[n];
        int even=0,odd = 0;
        
        for(int i=0; i<n; i++)
        {
            arr[i] = sc.nextInt();

            if((arr[i]&1) !=0)
            {
                odd++;
            }
            else
            {
                even++;
            }
        }
        System.out.print(odd);


    }

}
8.Reverse Array

import java.util.Scanner;

public class Main
{
    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();
        int arr[] = new int[n];
        
        for(int i=0; i<n; i++)
        {
            arr[i] = sc.nextInt();
        }
int left = 0 , right = arr.length-1;

while(left<right)
{
    
    int temp = arr[left];
    arr[left]=arr[right];
    arr[right]=temp;
    left++;
    right--;
}

for(int x:arr)
{
    System.out.print(x+ " ");
}



    }

}
9.search an element

import java.util.Scanner;


public class Main
{
    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();
        int arr[] = new int[n];
        int k = sc.nextInt();
        
        for(int i=0; i<n; i++)
        {
            arr[i] = sc.nextInt();
        }


       int low =0 , high = arr.length-1;
       while(low<=high)
       {
          int mid = low+(high-low)/2;

          if(arr[mid]==k)
          {
            System.out.println(arr[mid] + " "+mid);
            return;
          }
          else if(arr[mid]>k)
          {
            high = mid-1;
          }
          else
          {
            low = mid+1;
          }
       }



    }

}


10.Find second largest.

import java.util.Scanner;


public class Main
{
    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();
        int arr[] = new int[n];
        int first =Integer.MIN_VALUE , second =Integer.MIN_VALUE;
        
        for(int i=0; i<n; i++)
        {
            arr[i] = sc.nextInt();

            if(arr[i]>first)
            {
                second = first;
                first = arr[i];
            }
            else if (arr[i]<first && arr[i]>second)
            {
                second = arr[i];
            }
        }

        System.out.println(second);


       



    }

}
