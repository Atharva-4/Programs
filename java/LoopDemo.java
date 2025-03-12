class LoopDemo
{
    public static void main(String a[])
    {
        int i=0;
        for(i=1;i<=5;i++)
        {
            System.out.println(i);
        }
        i=1;
        while(i<=5)
        {
            System.out.println(i);

            i++;
        }
        i=1;
        do{
             System.out.println(i);

            i++;
        }
        while(i<=5);
    }
}