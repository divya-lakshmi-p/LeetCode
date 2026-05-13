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


2.run time polymorphism 


    
class Math
{
    void add(int a , int b)
    {
            System.out.println(a+b);
    }
}

class add extends Math
{
    void add(int a , int b)
    {
        System.out.println(a+b);
    }
}


public class main{
    public static void main(String args[])
    {
        Math m = new add();

        m.add(8,2);

        
    }
}
