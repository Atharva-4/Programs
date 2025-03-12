class Demo extends Thread
{
    public void run()
    {
        
        System.out.println("Thread "+Thread.currentThread().getName());
    }

}
class ThreadDemo4
{
    public static void main(String S[])
    {
        System.out.println("inside the main");
        Demo dobj=new Demo();
        Thread tobj=new Thread(dobj);
         tobj.setName("ppa");
         tobj.start();

    }
}