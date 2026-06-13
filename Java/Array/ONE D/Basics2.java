1.Find largest and smallest together.

import java.util.IntSummaryStatistics;
import java.util.Scanner;


public class Main
{
    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();
        int arr[] = new int[n];
        int Large =Integer.MIN_VALUE,small =Integer.MAX_VALUE;
        for(int i=0; i<n; i++)
        {
            arr[i] = sc.nextInt();

            if(arr[i]>Large)
            {
                Large = arr[i];
            }
             if (arr[i]<small)
            {
                small = arr[i];
            }
        }

        System.out.println(Large+ " "+small);
    }

}

Input:
10
6 8 4 8 9 3 12 45 76 -1
Output:

76 -1

2.Find second smallest.


import java.util.IntSummaryStatistics;
import java.util.Scanner;


public class Main
{
    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();
        int arr[] = new int[n];
        int first =Integer.MAX_VALUE,second =Integer.MAX_VALUE;
        for(int i=0; i<n; i++)
        {
            arr[i] = sc.nextInt();

            if(arr[i]<first)
            {
                second =  first;
                first = arr[i];
            }
            else if (arr[i]>first && arr[i]<second)
            {
                second = arr[i];
            }
        }

        System.out.println(second);
    }

}

Input
5
1 8 6 7 4

Output:
4

3.Check if array is sorted.

import java.util.IntSummaryStatistics;
import java.util.Scanner;


public class Main
{
    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();
        int arr[] = new int[n];
        boolean isSorted = true;
        for(int i=0; i<n; i++)
        {
            arr[i] = sc.nextInt();
        }
         
        for(int i=0; i<arr.length-1; i++)
        {  
            if(arr[i]>arr[i+1])
            {
                isSorted=false;
                break;
            }
        }
        if(isSorted)
            System.out.println("Array is sorted");
        else
            System.out.println("Array is unsorted");
    }

}
Input:
6
1 7 4 5 6 2
Output:
Array is unsorted

4.Move all zeros to end.

import java.util.IntSummaryStatistics;
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
         int nonzero =0 , temp=0;

         for(int i=0; i<n; i++)
        {
            if (arr[i]!=0)
            {
                temp = arr[i];
                arr[i] = arr[nonzero];
                arr[nonzero] = temp;

                nonzero++;
                
            }
        }

        for(int x:arr)
        {
            System.out.print(x+" ");
        }
    }

}






5.Remove duplicates from sorted array.

import java.util.HashSet;
import java.util.IntSummaryStatistics;
import java.util.Scanner;


public class Main
{
    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();
        int arr[] = new int[n];

        HashSet<Integer>set = new HashSet<>();
        
        for(int i=0; i<n; i++)
        {
            arr[i] = sc.nextInt();

            set.add(arr[i]);
        }States
        
        System.out.print(set);
        
    }

}


this logic interviewver will expect 

int j = 0;

for(int i=1;i<n;i++)
{
    if(arr[i] != arr[j])
    {
        j++;
        arr[j] = arr[i];
    }
}


6.Find frequency of each element.

import java.util.HashMap;
import java.util.HashSet;
import java.util.IntSummaryStatistics;
import java.util.Scanner;


public class Main
{
    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();
        int arr[] = new int[n];
        HashMap<Integer , Integer>map = new HashMap<>();
        for(int i=0; i<n; i++)
        {

            arr[i] = sc.nextInt();

            if(map.containsKey(arr[i]))
            {
                map.put(arr[i] , map.get(arr[i])+1);

            }
            else{
                map.put(arr[i] ,1);
            }
            
        }
        
        System.out.print(map);
        
    }

}

Input:
6
1 2 1 2 1 2

Output:

{1=3, 2=3}


7.Left rotate array by 1.


import java.util.Scanner;

class Main
{
    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();

        int []arr = new int[n];

        for(int i=0; i<n; i++)
        {
            arr[i] = sc.nextInt();
        }

        int d = sc.nextInt();

        rotatearray(arr, d);

        for(int i=0; i<n; i++)
        {
            System.out.print(arr[i] + " ");
        }


}

static void rotatearray(int [] arr , int d)
{
    int n = arr.length;

    reversearray(arr , 0, d-1);
    reversearray(arr, d, n-1);
    reversearray(arr, 0, n-1);


}

static  void reversearray(int [] arr , int left , int right)
{
    while(left<right)
    {
        int temp = arr[left];
        arr[left] = arr[right];
        arr[right]= temp;
        left++;
        right--;
    }
}

}


8.right rotate by 1

import java.util.Scanner;

class Main
{
    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();

        int []arr = new int[n];

        for(int i=0; i<n; i++)
        {
            arr[i] = sc.nextInt();
        }

        int d = sc.nextInt();

        rightrotatearray(arr, d);

        for(int i=0; i<n; i++)
        {
            System.out.print(arr[i] + " ");
        }


}

static void rightrotatearray(int [] arr , int d)
{
    int n = arr.length;
     reversearray(arr, 0, n-1);
    reversearray(arr , 0, d-1);
    reversearray(arr, d, n-1);
   


}

static  void reversearray(int [] arr , int left , int right)
{
    while(left<right)
    {
        int temp = arr[left];
        arr[left] = arr[right];
        arr[right]= temp;
        left++;
        right--;
    }
}

}



9.find missing number (1 to N)


import java.util.Scanner;
class Main
{

    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);

        int n=  sc.nextInt();

        int []arr = new int[n];

        int Arraysum =0;

        for(int i=0; i<n; i++)
        {
            arr[i] = sc.nextInt();
            Arraysum +=arr[i];

        }

        int sum =  n+1;
        int Actualsum= sum*(sum+1)/2;

        System.out.println(Actualsum-Arraysum);

        


    }
}


10.find duplicate element

One way but it will print the duplicate ellements how many time it is presented 

import java.util.HashSet;
import java.util.Scanner;
class Main
{

    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);

        int n=  sc.nextInt();

        int []arr = new int[n];

        HashSet<Integer>set =  new HashSet<>();

        for(int i=0; i<n; i++)
        {
            arr[i] = sc.nextInt();

            if(set.contains(arr[i]))
            {
                System.out.print(arr[i]+"  ");
            }
            else{
                set.add(arr[i]);
            }
        }
    }
}


import java.util.HashMap;
import java.util.HashSet;
import java.util.Scanner;
class Main
{

    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);

        int n=  sc.nextInt();

        int []arr = new int[n];

        HashMap<Integer,Integer> map =  new HashMap<>();

        for(int i=0; i<n; i++)
        {
            arr[i] = sc.nextInt();

            if(map.containsKey(arr[i]))
            {
                map.put(arr[i] , map.get(arr[i])+1);
            }
            else{
                map.put(arr[i] ,1);
            }
        }

        for(int val:map.keySet())
        {
            if(map.get(val)>1)
            {
                System.out.println(val);
                
            }
        }
    }
}


