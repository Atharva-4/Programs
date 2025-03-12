class Demo extends Thread
{
    public void run()
    {
        System.out.println("Thread "+Thread.currentThread().getName());
        
    try
        {for(int i=0;i<10;i++)
        {
        System.out.println("Thread "+Thread.currentThread().getName()+"with id"+i);

     Thread.sleep(1000); 
        }
        }
        catch(Exception obj){}
    }

}
class ThreadDemo6
{
    public static void main(String S[])
    {
        System.out.println("Thread "+Thread.currentThread().getName());
        Demo dobj=new Demo();
        Thread tobj=new Thread(dobj);
         tobj.setName("ppa");
         
         Demo dobj2=new Demo();
        Thread tobj2=new Thread(dobj2);
         tobj2.setName("lb");
         tobj.start();
         tobj2.start();
        System.out.println("Thread "+Thread.currentThread().getName());


    }
}