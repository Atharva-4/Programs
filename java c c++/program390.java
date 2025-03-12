import java.util.*;

class Number
{
    public int EvenFactors(int iNo)
    {
        int ans=0,iCnt=0;
        
         if(iNo%2==0)
        {

        return 0;        
        }
        for(iCnt=2;iCnt<=(iNo/2);iCnt=iCnt+2)
        {
                   if(iNo%iCnt==0)
             {     
                 
            ans=iCnt+ans;
      
        }
        }
        return ans;
    }

}
class program390
{
    public static void main(String A[])
    {
        Scanner sobj= new Scanner(System.in);

        int Value1=0,iRet=0;
        
        System.out.println("Enter tyhe number:");
        Value1=sobj.nextInt();
        
        Number nobj=new Number();

        iRet=nobj.EvenFactors(Value1);
        
        System.out.println(":"+iRet);
    }
}