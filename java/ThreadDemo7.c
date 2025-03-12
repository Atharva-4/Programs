class Demo extends Thread
{
    public void run()
    {
        System.out.println("Thread "+Thread.currentThread().getName());
        
    try
        {for(int i=0;i<1000;i++)
        {
        System.out.println("Thread "+Thread.currentThread().getName()+"with id"+i);

     Thread.sleep(1000); 
        }
        }
        catch(Exception obj){}
    }

}
class ThreadDemo7
{
    public static void main(String S[]) throws Exception
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
         tobj.join();
         tobj2.join();
        System.out.println("Thread "+Thread.currentThread().getName());


    }
}