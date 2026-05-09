import javax.swing.text.StyledDocument;

class Student
{
    int id;
    String name;
    Student()
    {
        id = 2;
        name ="DIVYA";
    }

    Student(int i, String n)
    {
        id =i;
        name = n;
    }

    void display()
    {
        System.out.println(id +" "+name);
    }

  /*  Student()
    {
        System.out.println("Constructor created");
    }*/
  

    public static void main(String args[])
    {
        Student s1 = new Student(1 , "DIVYALAKSHMI");
        Student s2 = new Student();

       // s1.setData(100,"Divyalakshmi");

        s1.display();
        s2.display();
    }
}




1.Default constructor

    class student
    {
        int id ;
        String name;

        void display()
        {
            System.out.println(id+" "+name);
        }

    public static void main(String [] args)
        {
            student s = new student();
            s1.id =1;
            s1.name = "Divya";

         s1.display();
        }
    }

here default when object got created then the constructor will be called , while creating pbject itself constructor is needed so while compiling if constructor is not there then hjave wil create one constructor default it willlook likw tisb

    student()
    {
    super()
        }





2.No-agrument constructor


      class student
    {
        int id ;
        String name;
      student()  no - argument constructor
          {
             id =1 ;
            name = "Divya";
      }
    

        void display()
        {
            System.out.println(id+" "+name);
        }

    public static void main(String [] args)
        {
            student s = new student();
            s1.id =1;
            s1.name = "Divya";

         s1.display();
        }
}
3.parameterized constructor




    class student
    {
        int id ;
        String name;
      student(int id , String  name)  
          {
                 id=id;
              name = name;
      }
    

        void display()
        {
            System.out.println(id+" "+name);
        }

    public static void main(String [] args)
        {
            student s = new student(1,"Divya");
           

         s1.display();
        }
    }

4.copy constructor
    import javax.swing.text.StyledDocument;

class Student
{
    int id;
    String name;
    
    Student(int i , String  n)
    {
        id = i;
        name = n;
    }

    Student(Student s)///copy constructor 
    {
        id= s.id;
        name = s.name;
    }
   

    void display()
    {
        System.out.println(id +" "+name);
    }
}
public class Main{

    public static void main(String args[])
    {
        Student s1 = new Student(1 , "DIVYALAKSHMI");
        Student s2 = new Student(s1);

        s2.name = "lakshmi";
  

       // s1.setData(100,"Divyalakshmi");

        s1.display();
        s2.display();
    }
}
    

5.COnstructor Overloading

    import javax.swing.text.StyledDocument;

class Student
{
    int id;
    String name;
    
    Student(int i , String  n)
    {
        id = i;
        name = n;
    }

    Student(Student s)///copy constructor 
    {
        id= s.id;
        name = s.name;
    }
   

    void display()
    {
        System.out.println(id +" "+name);
    }
}
public class Main{

    public static void main(String args[])
    {
        Student s1 = new Student(1 , "DIVYALAKSHMI");
        Student s2 = new Student(s1);

        s2.name = "lakshmi";
  

       // s1.setData(100,"Divyalakshmi");

        s1.display();
        s2.display();
    }
}
    
