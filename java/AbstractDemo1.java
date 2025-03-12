
abstract class Arithmeti
{
    abstract public int Addition(int a,int b);
    abstract public int sub(int a,int b);
   public int mul(int a,int b)
   {
    return a*b;
   }
    
}
class marvellous extends Arithmeti
{
public int Addition(int a,int b)
   {
    return a*b;
   }
    
public int sub(int a,int b)
   {
    return a+b;
   }

}
class AbstractDemo1
{
    public static void main(String A[])
    {

        marvellous sobj=new marvellous();

    
        System.out.println(sobj.Addition(10,20));
        
        System.out.println(sobj.mul(10,20));
        
        System.out.println(sobj.sub(10,20));

    }
}