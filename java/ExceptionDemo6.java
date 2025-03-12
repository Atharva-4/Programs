

import java.util.Scanner;

class AgeInvadlidEXception extends Exception
{

    public AgeInvadlidEXception(String str)
    {

        super (str);
                System.out.println("inisde constryuctor ");


    }
}
class ExceptionDemo6

{
    public static void main(String A[])
    {
        int Age=0;

        Scanner sobj=new Scanner(System.in);

        System.out.println("enter yor Age  :");
        
        Age= sobj.nextInt();
        try{
            System.out.println("isndide the try  :");

            if(Age<18)
            {
            AgeInvadlidEXception bobj= new AgeInvadlidEXception("yoyr age is less then 18");
        throw bobj;
            }
            
        }
        catch(AgeInvadlidEXception obj)
        
        {
            System.out.println("Inside catch block");
            System.out.println(obj);
        }

      
    }
}