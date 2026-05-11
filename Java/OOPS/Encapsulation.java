Encapsulation in Java is an object-oriented principle that binds data and methods into a single unit, typically a class. It restricts direct access to data by hiding implementation details. This ensures controlled interaction with the data through defined methods.

Achieved using access modifiers like private, protected, and public.
Improves data security by allowing validation through getters and setters.
Enhances code maintainability by isolating changes within the class.

How Encapsulation is Achieved in Java
Encapsulation in Java is achieved using:

Private data members
Public getter and setter methods
Key Rules:



Declare data as private: Hide the class data so it cannot be accessed directly from outside the class.
Use getters and setters: Keep variables private and provide public getter and setter methods for controlled access and safe modification, often with validation.
Apply proper access modifiers: Use private for data hiding and public for methods that provide access.






class product
{
    private int stock;     //encapsulating stockks and accessing through methods 

    void addstock(int q)
    {
        stock +=q;
    }

    void removestock(int s)
    {   
        if(stock >=s)
            { stock -= s;}
        else {
            System.out.println("You dont have enough stock to remove");
        }
       
    }

    void showstock()
    {
        System.out.println("Current stock=" + stock);
    }


}

public class main
{
    public static void main(String args[])
    {
        product p = new product();

        p.addstock(100);
          p.showstock();

        p.removestock(20);

          p.showstock();

        p.addstock(180);

        p.showstock();


    }
}
    
