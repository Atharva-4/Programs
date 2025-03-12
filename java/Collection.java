import java.util.*;

class Collection
{

    public static void  main(String a[])
    {
        LinkedList lobj=new LinkedList<Integer>();
        
        lobj.add(11);
        
        lobj.add(21);
        lobj.add(51);
        lobj.add(101);
        System.out.println(lobj);
        
        lobj.addFirst(5);


        Iterator iobj =lobj.iterator();        
        while(iobj.hasNext())
        {

            
        }

    }
}