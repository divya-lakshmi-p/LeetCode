

HAshSet

1.Remove duplicates 

import java.util.HashSet;
import java.util.Scanner;

public class Main
{
    public static void main(String args[])
    {
        Scanner sc  = new Scanner(System.in);

        int n = sc.nextInt();

        int [] arr= new int[n];
        HashSet<Integer>set = new HashSet<>();
        for(int i=0; i<n; i++)
        {
            arr[i]=sc.nextInt();
            set.add(arr[i]);
        }

        System.out.print(set);
    }
}


Input:
10
1 2 3 4 5 1 2 3 4 5
Output:
[1, 2, 3, 4, 5]



2.Check Duplicate Exists


import java.util.HashSet;
import java.util.Scanner;

public class Main
{
    public static void main(String args[])
    {
        Scanner sc  = new Scanner(System.in);

        int n = sc.nextInt();

        int [] arr= new int[n];
        HashSet<Integer>set = new HashSet<>();
        for(int i=0; i<n; i++)
        {
            arr[i]=sc.nextInt();
            if(!set.contains(arr[i]))
                set.add(arr[i]);
            else
            {
                System.out.println("Dupliacte found:"+ arr[i]);
                break;
            }
                

        }

       
    }
}

Input:
3
1 2 1
Output:
Dupliacte found:1


3.Count Unique Elements

import java.util.HashSet;
import java.util.Scanner;

public class Main
{
    public static void main(String args[])
    {
        Scanner sc  = new Scanner(System.in);

        int n = sc.nextInt();

        int [] arr= new int[n];
        HashSet<Integer>set = new HashSet<>();
        for(int i=0; i<n; i++)
        {
            arr[i]=sc.nextInt();
            set.add(arr[i]);
        }
        System.out.println(set.size());
       
    }
}

Input:

6
1 2 3 1 2 3
Output:
3


4.First Repeated Character

import java.util.HashSet;
import java.util.Scanner;

public class Main
{
    public static void main(String args[])
    {
        Scanner sc  = new Scanner(System.in);

        String n = sc.nextLine();
        HashSet<Character>set = new HashSet<>();
        for(int i=0; i<n.length(); i++)
        {
            if(set.contains(n.charAt(i)))
            {
                System.out.println(n.charAt(i));
                return;
            }
            else{
                    set.add(n.charAt(i));
            }
            
        }

        System.out.println(set);
        
       
    }
}

INput:
divyalakshmi
Output:
a

5.Find Duplicate Characters

import java.util.HashSet;
import java.util.Scanner;

public class Main
{
    public static void main(String args[])
    {
        Scanner sc  = new Scanner(System.in);

        String n = sc.nextLine();
        HashSet<Character>set = new HashSet<>();
        for(int i=0; i<n.length(); i++)
        {
            if(set.contains(n.charAt(i)))
            {
                System.out.print(n.charAt(i));
            }
            else{
                    set.add(n.charAt(i));
            }
            
        }
       

       // System.out.println(set);
        
       
    }
}
Input:
divyalakshmi
Output:
a
i

6.Pangram Check

import java.util.HashSet;
import java.util.Scanner;

public class Main
{
    public static void main(String args[])
    {
        Scanner sc  = new Scanner(System.in);

        String n = sc.nextLine();
        HashSet<Character>set = new HashSet<>();
        for(int i=0; i<n.length(); i++)
        {
            set.add(n.charAt(i));
            
        }

        if(set.size()==26)
            System.out.println("Pangram");
        else
            System.out.println("Not pangram");
       

       // System.out.println(set);
        
       
    }
}

Input:
thequickbrownfoxjumpsoverthelazydog
Output:
Pangram

7.Intersection of Two Arrays

import java.util.HashSet;
import java.util.Scanner;

public class Main
{
    public static void main(String args[])
    {
        Scanner sc  = new Scanner(System.in);
        int n =  sc.nextInt();
        int [] arr1 = new int[n];
        int [] arr2 = new int[n];
        HashSet<Integer>set = new HashSet<>();
        for(int i=0; i<n; i++)
        {
            arr1[i] = sc.nextInt();
            set.add(arr1[i]);
        }

        for(int i=0;i<n;i++)
        {
            arr2[i]=sc.nextInt();
            if(set.contains(arr2[i]))
            {
                System.out.println(arr2[i]);
                set.remove(arr2[i]);
            }
            else{
                set.add(arr2[i]);
            }
        }

       

       System.out.println(set);
        
       
    }
}

Input:
4
1 2 3 4
3 4 5 6

Ouput:
3
4
[1, 2, 5, 6]


i have one doubt here like do we have to remove the element from the set


8.Missing Number Using HashSet

import java.util.HashSet;
import java.util.Scanner;
import java.lang.Math;

public class Main
{
    public static void main(String args[])
    {
        Scanner sc  = new Scanner(System.in);
        int n =  sc.nextInt();
        int [] arr1 = new int[n];
        int maxi = Integer.MIN_VALUE;
        HashSet<Integer>set = new HashSet<>();
        for(int i=0; i<n; i++)
        {
            arr1[i] = sc.nextInt();
            set.add(arr1[i]);
            maxi = Math.max(maxi , arr1[i]);
        }
        for(int i=1; i<=maxi;i++)
        {
            if(!(set.contains(i)))
            {
                System.out.println("Missing value is:"+i);
                return;
            }
        }

    }
}

Input:
10
1 2 3 4 5 7 8 9 10 11
Output:
Missing value is:6

9.Two sum using HashSet

import java.util.HashSet;
import java.util.Scanner;
import java.lang.Math;

public class Main
{
    public static void main(String args[])
    {
        Scanner sc  = new Scanner(System.in);
        int n =  sc.nextInt();
        int [] arr = new int[n];
        int target = sc .nextInt();
        HashSet<Integer>set = new HashSet<>();
        for(int i=0; i<n; i++)
        {
            arr[i] = sc.nextInt();
            int value = target - arr[i];
             if(set.contains(value))
             {
                System.out.println(value+"  "+arr[i]);
                return;
             }
             else{
                set.add(arr[i]);
             }
            
        }

    }
}

Input:
5
10
1 4 5 5 6
Ouput:
5  5

10.Longest Consecutive Sequence

import java.util.HashSet;
import java.util.Scanner;
import java.lang.Math;

public class Main
{
    public static void main(String args[])
    {
        Scanner sc  = new Scanner(System.in);
        int n =  sc.nextInt();
        int [] arr = new int[n];
        HashSet<Integer>set = new HashSet<>();
        for(int i=0; i<n; i++)
        {
            arr[i] = sc.nextInt();
            set.add(arr[i]);
        }
        int longest = 0;
        for(int num :set)
        {
                if(!set.contains(num-1))
                {
                    int currentnumber = num;
                    int count =1;

                    while(set.contains(currentnumber+1))
                    {
                        currentnumber++;
                        count++;
                    }

                    longest = Math.max(longest , count);
                }
        }

        System.out.println(longest);

    }
}

Input:
10
1 6 7 5 8 9 4 10 6 7
Output:
7
