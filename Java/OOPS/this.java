1.this as object variable
class Student
{
    int id;

    Student(int id)
    {
        this.id = id;
    }

    void display()
    {
        System.out.println(id);
    }

    public static void main(String args[])
    {
        Student s1 = new Student(100);

        s1.display();
    }
}


2.this as method it is called constructor chaining
class Student {

    Student() {
        this(10);
        System.out.println("Default Constructor");
    }

    Student(int x) {
        this(x, "Ram");
        System.out.println("One Parameter Constructor");
    }

    Student(int x, String n) {
        System.out.println("Two Parameter Constructor");
    }

    public static void main(String args[]) {

        Student s1 = new Student();
    }
}
