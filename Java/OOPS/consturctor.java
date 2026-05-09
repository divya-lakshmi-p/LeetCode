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
