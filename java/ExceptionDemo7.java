import java.io.*;

class ExceptionDemo7

{
    public static void main(String A[])
    {
        int Age=0;
        try
       { BufferedReader bobj=new BufferedReader(new InputStreamReader(System.in)); 

        System.out.println("enter your name :");
        String name =bobj.readLine();

         System.out.println("age");
        int age =Integer.parseInt(bobj.readLine());
}

        catch(Exception obj)
        {} 
      
    }
}