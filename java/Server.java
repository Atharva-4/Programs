import java.net.*;
import java.io.*;

class Server
{
    public static void main(String s[]) throws Exception
    {

        System.out.println("Server apllictaion di runnuing");

        ServerSocket ssobj=new ServerSocket(2100);
        System.out.println("Server is wating for xclient f");

        Socket sobj=ssobj.accept();
        System.out.println("Server is accept for xclient f");

        PrintStream ps = new PrintStream(sobj.getOutputStream());

        BufferedReader br1= new BufferedReader(new InputStreamReader((sobj.getInputStream())));
        BufferedReader br2= new BufferedReader(new InputStreamReader((System.in)));
        String str1,str2;
                System.out.println("Server started");
        while((str1=br2.readLine())!=null)
        {
             System.out.println("cilent says"+str1);
            System.out.println("Server soite wenter the msg");
            str2=br2.readLine();

            ps.println(str2);

        }

    }
}