Problem 1 → Reverse a String

This is the MOST basic and important String problem.

Problem Statement

Input:
Java
Output:
avaJ


1.using loop

import java.util.Scanner;

class main
{
    public static void main (String args[])
    {

       // String s = "DIVYALAKSHMI";

        Scanner t = new Scanner(System.in);

        String s = t.nextLine();

        for(int i=s.length()-1; i>=0; i--)
        {
            System.out.print(s.charAt(i));
        }
    }
}

2.using stringbuilder

import java.util.Scanner;

class main
{
    public static void main (String args[])
    {

       // String s = "DIVYALAKSHMI";

        Scanner t = new Scanner(System.in);

        String s = t.nextLine();

        StringBuilder sb = new StringBuilder(s);
        sb.reverse();

        String result = sb.toString();

        System.out.println(result);



    }
}


3.using another variable to store the char

import java.util.Scanner;

class main
{
    public static void main (String args[])
    {

       // String s = "DIVYALAKSHMI";

        Scanner t = new Scanner(System.in);

        String s = t.nextLine();
         String reverse = "";

         for(int i = s.length()-1; i>=0; i--)
         {
            reverse +=s.charAt(i);
         }

        System.out.print(reverse);



    }
}


4.the above method wil create many temp objects so to overcome that we are using stringbuilder

import java.util.Scanner;

class main
{
    public static void main (String args[])
    {

       // String s = "DIVYALAKSHMI";

        Scanner t = new Scanner(System.in);

        String s = t.nextLine();
        StringBuilder  reverse = new StringBuilder();

         for(int i = s.length()-1; i>=0; i--)
         {
            reverse .append(s.charAt(i));
         }

        System.out.print(reverse);



    }
}
