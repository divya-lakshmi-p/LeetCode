1.MEthod Overirding

Same method name,
same parameters,
different implementation in child.




  
class Payment
{
    void pay()
    {
        System.out.println("Normal payment");
    }
}

class UPI extends Payment
{
    void pay()
    {
        System.out.println("UPI payment");
    }
}

class Card extends Payment
{
    void pay()
    {
        System.out.println("Card payment");
    }
}

public class Main
{
    public static void main(String args[])
    {
        UPI u = new UPI();

        u.pay();

        Card c = new Card();

        c.pay();
    }
}


2.Method overloading

    Same method name
Different parameters
Same class usually

  

  class Calculator
{
    int add(int a, int b)
    {
        return a + b;
    }

    int add(int a, int b, int c)
    {
        return a + b + c;
    }

    double add(double a, double b)
    {
        return a + b;
    }
}

public class Main
{
    public static void main(String args[])
    {
        Calculator c = new Calculator();

        System.out.println(c.add(10, 20));

        System.out.println(c.add(10, 20, 30));

        System.out.println(c.add(10.5, 20.5));
    }
}
