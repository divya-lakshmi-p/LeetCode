1.static as method

class Student {

    int marks = 90;

    void showMarks() {

        System.out.println(marks);
    }

  //using as method
    static int add(int a, int b) {

        return a + b;
    }

    public static void main(String args[]) {

        Student s1 = new Student();

        s1.showMarks();

        System.out.println(add(10, 20));
    }
}



2.static as variable
  class Student {

    int id;
    String name;

    static String college = "IIT";

    Student(int i, String n) {

        id = i;
        name = n;
    }

    void display() {

        System.out.println(id + " " + name + " " + college);
    }

    public static void main(String args[]) {

        Student s1 = new Student(101, "Ram");
        Student s2 = new Student(102, "Sam");

        s1.display();
        s2.display();
    }
}
