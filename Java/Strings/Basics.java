public class main{
    public static void main(String args[])
    {
        String s1 = "divya";
        String s2 = "divya";

        System.out.println(s1==s2);
    }
}
o/p true

public class main{
    public static void main(String args[])
    {
        String s1 = "divya";
        String s2 = new String("divya");
        System.out.println(s1==s2);
    }
}
O/p false


public class main{
    public static void main(String args[])
    {
        String s1 = "divya";
        String s2 = new String("divya");
        System.out.println(s1.equals(s2));
    }
}

o/p true
