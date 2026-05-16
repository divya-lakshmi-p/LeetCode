
HashSet

1.Remove duplicates

import java.util.HashSet;
import java.util.Scanner;

class Main
{
    public static void main(String args[])
    {

        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();
        int [] arr = new int[n];
        HashSet<Integer>s = new HashSet<>();
        for(int i=0; i<n; i++)
        {
            arr[i]=sc.nextInt();

            s.add(arr[i]);

        }

        for(int x:s)
        {
            System.out.print(x+" ");
        }
    }
}

Input:
1 2 2 3 4 4

Ouptu:
1 2 3 4



2.find duplicate characters 
import java.util.HashSet;
import java.util.Scanner;

class Main
{
    public static void main(String args[])
    {

        Scanner sc = new Scanner(System.in);

        String n = sc.nextLine();
        HashSet<Character>s = new HashSet<>();
        for(int i=0; i<n.length(); i++)
        {
            char ch = n.charAt(i);

           if(s.contains(ch))
           {
            System.out.println(ch);
           }
           else
           {
            s.add(ch);
           }

        }
    }
}

Input:
programming

Oyptu:
r g m
3.Check duplicate exists
import java.util.HashSet;
import java.util.Scanner;

class Main
{
    public static void main(String args[])
    {

        Scanner sc = new Scanner(System.in);

        String n = sc.nextLine();
        HashSet<Character>s = new HashSet<>();
        for(int i=0; i<n.length(); i++)
        {
            char ch = n.charAt(i);

           if(s.contains(ch))
           {
            System.out.println("Dupliacate found");
            break;
           }
           else
           {
            s.add(ch);
           }

        }
    }
}

Input:
1 2 3 4 2

Output:
Dupliacte found

4.count unique elements
import java.util.HashSet;
import java.util.Scanner;

class Main
{
    public static void main(String args[])
    {

        Scanner sc = new Scanner(System.in);

        String n = sc.nextLine();
        HashSet<Character>s = new HashSet<>();
        int count =0;
        for(int i=0; i<n.length(); i++)
        {
            char ch = n.charAt(i);

           if(!s.contains(ch))
           {
              s.add(ch);
               count++;
           }
           else
           {
              continue;
          
           }

        }
        System.out.println(count);
    }
}

INput:
1 2 2 3 4 4
Ouptu:
4


5.check pangram
import java.util.HashSet;
import java.util.Scanner;

class Main
{
    public static void main(String args[])
    {

        Scanner sc =  new Scanner(System.in);

        String s = sc.nextLine().toLowerCase();
        HashSet<Character>set = new HashSet<>();
        for(int i=0; i<s.length(); i++)
        {
            char ch = s.charAt(i);

            if(ch >='a'  && ch<='z')
            {
                set.add(ch);
            }
        }
        if(set.size()==26)
            System.out.println("Pangram");
        else
            System.out.println("Not Pangram");

    }
}

Input:
thequickbrownfoxjumpsoverthelazydog

Output:
pangram

6.first repeated character

import java.util.HashSet;
import java.util.Scanner;

class Main
{
    public static void main(String args[])
    {

        Scanner sc =  new Scanner(System.in);

        String s = sc.nextLine();
        HashSet<Character>set = new HashSet<>();
        for(int i=0; i<s.length(); i++)
        {
            char ch = s.charAt(i);

            if(set.contains(ch))
            {
                System.out.println("This is the first repeated character :"+ch);
                break;
            }
            else{
                set.add(ch);
            }

        }
    }
}

Input:
abccde
Output:
c

   
7.longest consquence  sequence 

import java.util.HashSet;
import java.util.Scanner;
import java.lang.Math;

class Main
{
    public static void main(String args[])
    {

        Scanner sc =  new Scanner(System.in);

        int n = sc.nextInt();
        int [] a = new int[n];
        HashSet<Integer> set = new HashSet<>();
        for(int i =0; i< a.length; i++)
        {
            a[i] = sc.nextInt();
            set.add(a[i]);
        }
        int longest =0;
        for(int num:set)

            /// here what i am doing is like first i am checking whether is there any previous number is there or not if its there i skip the whole part and come to next number if previous was not present in the set i started to check like the next number is presented or not so thats why i am giving +1 in while loop to check next next number and while enteing in if conditon why we are checking -1 means to check the before number is presented or not 
            /// 
        {
            if(!set.contains(num-1))
            {
                int currentnum = num;
                int count =1;
                    while(set.contains(currentnum+1))
                    {
                        currentnum++;
                        count++;
                    }


                longest = Math.max(count, longest);
                 //longest = java.lang.Math.max(count, longest);
            }
        }

        System.out.println(longest);
       
    }
}

Input:
100 4 200 1 3 2
Output:
4

because 1 2 3 4

    

8.Intersection of two arrays 
import java.util.HashSet;
import java.util.Scanner;

class Main
{
    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();
        int []arr = new int[n];
        int []a = new int[n];
       HashSet<Integer>set = new HashSet<>();
        //HashSet<Integer>set = new HashSet<>();
        for(int i=0; i<n; i++)
        {
            arr[i]= sc.nextInt();
            set.add(arr[i]);
        }

        for(int i=0;i<n;i++)
        {
            a[i]=sc.nextInt();
            if(set.contains(a[i]))
                System.out.print(a[i]+" ");
                set.remove(a[i]);
            else
                set.add(a[i]);
        }

        System.out.println();
    }
}

Input:
arr1 = [1,2,3,4]
arr2 = [3,4,5,6]

O/p
3 4


9.Missing number using hashSet

import java.util.HashSet;
import java.util.Scanner;

class Main
{
    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();
        int []arr = new int[n];
       HashSet<Integer>set = new HashSet<>();
       int max =0;

       for(int i =0; i<n;  i++)
       {
         arr[i] = sc.nextInt();

         set.add(arr[i]);


         if( arr[i]>max)
             max = arr[i];
       }

       for(int i =1; i<=max; i++)
       {
           if(set.contains(i))
                continue;
           else
                System.out.println(i);
       }
       
    }
}

INput:
5
1 2 3 5 6
Ouput:
4


10.Two sum using hashset

import java.util.HashSet;
import java.util.Scanner;

class Main
{
    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();
        int []arr = new int[n];
       HashSet<Integer>set = new HashSet<>();
       int target = sc.nextInt();

       boolean  found = false;

       for(int i =0; i<n;  i++)
       {
         arr[i] = sc.nextInt();

           int val = target - arr[i];

           if(set.contains(val))
           {
            found =true;
           }
            set.add(arr[i]);

       }
       if(found)
            System.out.println("Found pair");
        else
            System.out.println("Pair not found");

    }
}


returning numbers 

import java.util.HashSet;
import java.util.Scanner;

class Main
{
    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();
        int []arr = new int[n];
       HashSet<Integer>set = new HashSet<>();
       int target = sc.nextInt();


       for(int i =0; i<n;  i++)
       {
         arr[i] = sc.nextInt();

           int val = target - arr[i];

           if(set.contains(val))
           {
               System.out.println(val + "  "+arr[i]);
               return ;
           }
            set.add(arr[i]);

       }

    }
}
