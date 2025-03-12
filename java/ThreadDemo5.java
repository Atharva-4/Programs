class Demo extends Thread
{
    public void run()
    {
        System.out.println("Thread "+Thread.currentThread().getName());
        
        for(int i=0;i<1000;i++)
        {
        System.out.println("Thread "+Thread.currentThread().getName()+"with id"+i);

        }
    }

}
class ThreadDemo5
{
    public static void main(String S[])
    {
        System.out.println("inside the main");
        Demo dobj=new Demo();
        Thread tobj=new Thread(dobj);
         tobj.setName("ppa");
         
         Demo dobj2=new Demo();
        Thread tobj2=new Thread(dobj2);
         tobj2.setName("lb");
         tobj.start();
         tobj2.start();


    }
}