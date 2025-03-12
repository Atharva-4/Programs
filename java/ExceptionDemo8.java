
import java.io.*;

class ExceptionDemo8

{
    public static void main(String A[]) throws  Exception
    {
        int Age=0;
        
         BufferedReader bobj=new BufferedReader(new InputStreamReader(System.in));

        System.out.println("enter your name :");
        String name =bobj.readLine();

            System.out.println("age");
  
        int age =Integer.parseInt(bobj.readLine());
        
            System.out.println("age"+age);
            System.out.println("enter your name :"+name);

        
      
    }
}