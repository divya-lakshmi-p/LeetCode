1.Association

class Laptop{

    String brand ;

    void showlaptop()
    {
        System.out.println("Laptop brand is :"+brand);
    }
}

class student
{
    String name;

    Laptop Lap;   //asscoation call

    void showstudent()
    {
        System.out.println("Student name is :"+name);

        Lap.showlaptop();
    }
}




class main
{
    public static void main(String args[])
    {
        Laptop l = new Laptop();
        l.brand = "HP";

        student s = new student();
        s.name = "Divya";

        s.Lap = l;   //setting student to laptop object
  
        s.showstudent();
    }
}
