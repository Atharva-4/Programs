import  java.util.*;

class Inputdemo{

    public static void main (String args[])
    {
            Scanner obj=new Scanner(System.in);
            System.out.println("enter the first number :");
            int No1=0,no2=0,Ans=0;
            No1=obj.nextInt();
            System.out.println("enter the number :");

            no2=obj.nextInt();
            
            Ans=No1+no2;
            System.out.println(Ans);

    }
}