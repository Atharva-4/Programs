
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
class Derivedx extends Derived
{
    public int x,y;
    public Derivedx()
    {
        
        System.out.println("isnide the  constructor");
    }
 public void sun()
    {
        
        System.out.println("isnide the sgun constructor");
    }
   
}
class Multilevel{
    public static void main(String a[])
    {
        System.out.println("isnide ");
        Derivedx dobj=new Derivedx();

        dobj.Fun();
        dobj.gun();
        dobj.sun();

    }
}