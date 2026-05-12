1.Single Inheriatnce 

In single inheritance, a sub-class is derived from only one super class. It inherits the properties and behavior of a single-parent class. Sometimes, it is also known as simple inheritance.

  ISmple example 


  //Super class
class Vehicle {
    Vehicle() {
        System.out.println("This is a Vehicle");
    }
}

// Subclass 
class Car extends Vehicle {
    Car() {
        System.out.println("This Vehicle is Car");
    }
}

public class Test {
    public static void main(String[] args) {
        // Creating object of subclass invokes base class constructor
        Car obj = new Car();
    }
}



1.

  class animal
{
    String tail;
    String gender;
    int years;

    void showquality()
    {
        System.out.println("DOg qualities are "+tail+" "+gender+" "+years);
    }

}

class Dog extends animal
{
        String breed;

        void showbreed()
        {
            System.out.println("Dog breed is "+ breed);
        }

}

public class main
{
    public static void main(String args[])
    {
           Dog d = new Dog();

           d.tail="long";
           d.breed = "Labrador";
           d.gender = "male";
           d.years = 6;
  
          
           d.showquality();
            d.showbreed();



    }
}



2.MULTIPLE INHERITANCE 




  interface UPSC
{
    int marks = 180;
    String Name = "DVYA";
    int age = 19;
    int attempt = 1;

    void upscwinlist();
}
interface TNPSC{

    int marks = 190;
    String Name = "LAKSHMI";
    int age = 20;
    int attempt = 1;

    void tnpscwinlist();

}
class Exam implements UPSC , TNPSC{
    String name;
    String Post;


    Exam(String n, String P)
    {
        name = n;
        Post = P;
    }

    public void upscwinlist()
    {
        System.out.println("Successful woman:" + UPSC.Name +   "Her age is"  + UPSC.age + "he secured"  + UPSC.marks +  "and she won in her " +UPSC.attempt +"st attempt");
    }

    public void tnpscwinlist()
    {
                System.out.println("Successful queen:" + TNPSC.Name +"Her age is"+TNPSC.age +"he secured"+TNPSC.marks+"and she won in her "+"st attempt");

    }
void showdetails(){
        System.out.println("Name:"+name);
        System.out.println("post:"+Post);
    }

}

class main{
    public static void main(String args[])
    {
        Exam E1= new Exam("DIVYALAKSHMI PALPANDI" , "IAS");

        E1.showdetails();

        E1.upscwinlist();
        E1.tnpscwinlist();


    }
}


3.Multilevel  Inheritance 



  class vehicle
{
    String company = "Toyota";

    void showcompany()
    {
        System.out.println("This Vehicle company is :"+company);
    }
}

class fourwheeler extends vehicle
{
    int wheels = 4;

    void showheels()
    {
        System.out.println("This vehicle totally having :" +wheels +"wheels");
    }

}
class Car extends fourwheeler{

    String model = "INNOVA";

    void showcar()
    {
        System.out.println("car model is :"+model);
    }

}





public class main{
    public static void main(String args[])
    {

        Car c = new Car();
        System.out.println(c.company);
        c.showcompany();
        c.showheels();
        c.showcar();



    }
}

