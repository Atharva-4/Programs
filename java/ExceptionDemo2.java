

import java.util.Scanner;

class ExceptionDemo2
{
    public static void main(String ar[])
    {
    
        int arr[]={10,20,30,40,50};

        Scanner sobj=new Scanner(System.in);
        
                int no1=0;


        System.out.println("fist number");
        no1=sobj.nextInt();
          
      System.out.println("answeer is : "+arr[no1]);
        

           }
}
//we cant give the input 5 it will throw the exception
