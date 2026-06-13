1.Character Frequency


import java.util.HashMap;
import java.util.Scanner;

public  class Main
{
    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);
        String s = sc.nextLine();
        HashMap<Character , Integer>map = new HashMap<>();

        for(int i=0; i<s.length(); i++)
        {
            char ch = s.charAt(i);
            if(map.containsKey(ch))
            {
                map.put(ch , map.get(ch)+1);
            }
            else
            {
                map.put(ch ,1);
            }
        }

        System.out.println(map);
    }
}
Input:
Discipline
Output:
{p=1, s=1, c=1, D=1, e=1, i=3, l=1, n=1}


2.Word Frequency
import java.util.HashMap;
import java.util.Scanner;

public class Main
{
    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);

        String s = sc.nextLine();

        String [] word = s.split(" ");
        HashMap<String , Integer>map = new HashMap<>();
        for(int i=0; i<word.length; i++)
        {
            if(map.containsKey(word[i]))
            {
                map.put(word[i] , map.get(word[i])+1);
            }
            else
            {
                map.put(word[i] ,1);
            }
            
        }

        System.out.println(map);
    }
}
Input1:
java is easy java is powerful
Output1:
{java=2, powerful=1, is=2, easy=1}

Input2:
i am born to achieve , i am damn beautiful in my own way , i am very curuous to learn new thing 
Output2:
{very=1, new=1, in=1, learn=1, achieve=1, born=1, own=1, i=3, am=3, ,=2, my=1, way=1, damn=1, beautiful=1, curuous=1, to=2, thing=1}

3.Highest Frequency Character

import java.util.HashMap;
import java.util.Scanner;

public class Main
{
    public static void main(String args[])
    {
        Scanner sc =  new Scanner(System.in);

        String s = sc.nextLine();
        HashMap<Character , Integer> map = new HashMap<>();
        for(int i=0; i<s.length(); i++)
        {
            if(map.containsKey(s.charAt(i)))
            {
                map.put(s.charAt(i) , map.get(s.charAt(i))+1);
            }
            else
            {
                map.put(s.charAt(i) , 1);
            }
        }
        // System.out.print(map);
        for(Character val :map.keySet())
        {
            if(map.get(val)>1)
            {
                System.out.println(val);
                return;
            }
        }
    }
}

Input:
divyalakshmi
Output:
a
