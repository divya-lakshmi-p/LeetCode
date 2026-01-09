class HelloWorld{
    public static void main(String args[])
    {
        int age = 26;
        String name = "DIVYA";
        System.out.println(name);
    }
}



Operators 
  class HelloWorld{
    public static void main(String args[])
    {
        int a=10 , b=2;

        System.out.println(a+b);
        System.out.println(a-b);
        System.out.println(a*b);
        System.out.println(a/b);
        System.out.println(a%b);
    }
}  


Condtion 
    class HelloWorld
{
    public static void main(String args[])
    {
        int age =26;

        if(age>21)
            System.out.println("You are eligible");
        else
            System.out.println("You are not eligible");
    }
}



for and while loop

class HelloWorld
{
    public static void main(String args[])
    {   int i=1;
        /*for(int i=0; i<n; i++)
        {
            System.out.println(i);
        }*/
       while(i<10)
       {
         System.out.println(i);
         i++;
       }

    }
}



class HelloWorld
{
    /*static void greet(){
        System.out.println("Hi Divya , Dont worry , these all are not your mistake , you are born to achieve so focus on that ");
    }
    public static void main (String args[])
    {
        greet();
    }*/

        /*static void greet(String name ){
            System.out.println("Hello "+name);
        }
  public static void main(String args[])
  {
    greet("Divya");
  }*/
 /*  static int add(int a , int b)
  {
    return a+b;
  }

    public static void main(String args[])
    {
        int sum = add(10,20);
        System.out.println(sum);
    }*/
/* 
 static int mul(int x)
 {
    return x*x;
 }

  public static void main(String args[])
  {
    int square = mul(5);
    System.out.println(square);
  }*/


  static String check(int a)
  {
    if( a%2==0)
        return "Even";
    else
        return "odd";
  }

  public static void main(String args[])
  {
    String sum  = check(20);
    System.out.println(sum);


  }

}
