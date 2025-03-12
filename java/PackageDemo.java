import Marvellous.Circle;
import Marvellous.Infosystem.Square;
class PackageDemo 
{
    public static void main(String a[])
    {
        Circle cobj=new Circle();
        float ans=0.0f;
        Square sobj=new Square();

        ans=cobj.Circlearea(10.5f);
                 
        System.out.println(ans);
        ans=sobj.Squarearea(10.2f);
           
        System.out.println(ans);
    }
}


