class Demo extends Thread
{
    public void run()
    {
        System.out.println("Thread "+Thread.currentThread().getName());
                System.out.println("Thread "+Thread.currentThread().getPriority());

    }

}
class ThreadDemo8
{
    public static void main(String S[]) throws Exception
    {
        System.out.println("Thread "+Thread.currentThread().getName());
        Demo dobj=new Demo();
        Thread tobj=new Thread(dobj);
         tobj.setName("ppa");
         tobj.setPriority(10);
         tobj.start();


    }
}