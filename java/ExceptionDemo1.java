import java.util.Scanner;

class ExceptionDemo1
{
    public static void main(String ar[])
    {
    
        int no1=0,no2=0,ans=0;

        Scanner sobj=new Scanner(System.in);

        System.out.println("fist number");
        no1=sobj.nextInt();
          System.out.println("scomdf number");
        no2=sobj.nextInt();
    ans=no1%no2;
      System.out.println("answeer is : "+ans);
        

           }
}