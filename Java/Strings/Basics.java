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



    public class main{
    public static void main(String args[])
    {
        String s1 = "divya";
        String s2 = new String("DIVYALAKSHMI");
        String s3 = s2.intern();
        String s4 = "divyalakshmi";

        //access characters
        System.out.println(s1.charAt(4));

        //find char postion
        int pos = s2.indexOf('V');
        System.out.println(pos);

        //if i want to find the last postion of the particular char 

        System.out.println(s2.lastIndexOf('L'));

        

        //find length
        System.out.println(s2.length());


        //traverse string

        for(int i=0; i<s2.length(); i++)
        {
            System.out.print(s2.charAt(i));
        }System.out.println();


        // lowercase to uppercase
        String s = "hello";
        //it wont change the original string , it will create new string and print it 
        System.out.println(s.toUpperCase());
        System.out.println(s);



        //   uppercase to lowercase
        String H = "HELLO";
        //it wont change the original string , it will create new string and print it 
        System.out.println(H.toLowerCase());
        System.out.println(H);


        // trim the space  start and end of the string
        String d = "       Divya   lakshmi      ";
        System.out.println(d.trim());


        //printing substring
        System.out.println(s2.substring(2));
        System.out.println(s2.substring(0,4));

        // contains is used to check in the string whether that string is exist or not it like checking the substring 
        System.out.println(s2.contains("DIVYA"));

      // it is used to check whther two string or same or not without checking the case 
        System.out.println(s3.equalsIgnoreCase(s4));

     // WE can dp replace only single character as well as whole words
        String T = "SAI";
        System.out.println(T.replace('S' , 'H'));

        String D = "I LOVE SAI BABA";
        System.out.println(D.replace("BABA" , "APPA"));

    // it is using  split method and internally regex is used to split the string
        String v = "DIVYA@Srithika@shanthi@palpandi@yuva";

        String arr[] = v.split("@");
        for(String x :arr)
            System.out.println(x);


        | Method               | Purpose               |
| -------------------- | --------------------- |
| `length()`           | count characters      |
| `toUpperCase()`      | uppercase             |
| `toLowerCase()`      | lowercase             |
| `trim()`             | remove outer spaces   |
| `substring()`        | extract part          |
| `contains()`         | search text           |
| `equalsIgnoreCase()` | compare ignoring case |
| `replace()`          | replace text          |
| `split()`            | split into array      |
| `indexOf()`          | find position         |
| `isEmpty()`          | check empty string    |





            class main
{
    public static void main(String args[])
    {

        //.append string using string builder
        StringBuilder s = new StringBuilder("Divya");
        s.append("Lakshmi");

        System.out.println(s);

        //reverse string
        StringBuilder v = new StringBuilder("lakshmidivya");
        v.reverse();

        System.out.println(v);


        //Insert character at pparticular postion
        //syntac = string name.insert(position , the char to be eneter)

        StringBuilder g = new StringBuilder("Sai Apa");
        g.insert(5, "p");
        System.out.println(g);

        3. delete()
            Remove characters.
            sb.delete(1,3);
        4.replace()
            Replace part.
            sb.replace(0,2,"K");

        5.setCharAt()
            Modify single character.
            sb.setCharAt(0,'K');
                Example
                StringBuilder sb = new StringBuilder("Java");
                    sb.setCharAt(0, 'K');
                    System.out.println(sb);

            6.convert string builder to string 

            StringBuilder sb = new StringBuilder();

sb.append("Hello");
sb.append(" World");

String result = sb.toString();


    }
}
         


        




    










