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

