

class Demo 
{
    public Demo()
    {
        System.out.println("inisde constructor");
    }

    protected void finalized()
    {
                System.out.println("inisde finalized");

    }
}
class ObjectDemo3
{
    public static void main(String A[])
    {

        Demo obj=new Demo();
        obj=null;
        System.gc();

    }
    
}