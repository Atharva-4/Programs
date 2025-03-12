
class Base
{
    public int A,B;
    public Base()
    {
        System.out.println("isnide the bas constructor");
    }

    public void Fun()
    {
        
        System.out.println("isnide the DFun constructor");
    }
}

class Derived extends Base
{
    public int x,y;
    public Derived()
    {
        
        System.out.println("isnide the  constructor");
    }
 public void gun()
    {
        
        System.out.println("isnide the gun constructor");
    }
   
}
class Singlelevel{
    public static void main(String a[])
    {
        System.out.println("isnide ");
        Derived dobj=new Derived();

        dobj.Fun();
        dobj.gun();

    }
}