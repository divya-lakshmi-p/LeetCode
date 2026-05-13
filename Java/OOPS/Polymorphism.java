1.Compile time Polymorphism 


class Math
{
    void add(int a , int b)
    {
        System.out.println(a+b);
    }
}


public class main{
    public static void main(String args[])
    {
        Math m = new Math();

        m.add(10,20);
    }
}
