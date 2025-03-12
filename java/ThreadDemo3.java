
class Demo implements Runnable
{
    public void run()
    {
        
        System.out.println("Thread is running");
    }

}
class ThreadDemo3
{
    public static void main(String S[])
    {
        System.out.println("inside the main");
        Demo dobj=new Demo();
        Thread tobj=new Thread(dobj);
         
         tobj.start();

    }
}