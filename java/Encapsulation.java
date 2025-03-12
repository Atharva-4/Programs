
class Arithmetic
{
    public int no1;
    public int  no2;
    public Arithmetic()
    {
        System.out.println("oinside default contructor");
        this.no1=0;
        this.no2=0;   
        
    }

    public Arithmetic(int a,int b)
    {
        System.out.println("oinside default ");
        this.no1=a;
        this.no2=b;   
    }

    public int adition()
    {
        int ans=0;
        ans=this.no1+this.no2;
        return ans;
    }
    public int sub()
    {
        int ans=0;
        ans=this.no1-this.no2;
        return ans;
    }
}
class Encapsulation
{
    public static void main(String Arg[])
    {
        Arithmetic aboj1=new Arithmetic();
        Arithmetic aboj2=new Arithmetic(10,11);
        int ret=0;
        ret = aboj2.adition();
        System.out.println("addtion is "+ret);
        ret = aboj2.sub();
        System.out.println("sub is "+ret);
        
            
    }
}



