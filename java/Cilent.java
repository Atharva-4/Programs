import java.net.*;
import java.io.*;

class Cilent
{
    public static void main(String s[])throws Exception
    {

        System.out.println("Cilent apllictaion di runnuing");
        
        Socket ssobj= new Socket("localhost",2100);
        
        System.out.println("Cilent apllictaion di");
        
        PrintStream ps = new PrintStream(ssobj.getOutputStream());

       BufferedReader br1= new BufferedReader(new InputStreamReader((ssobj.getInputStream())));
        BufferedReader br2= new BufferedReader(new InputStreamReader((System.in)));
        String str1,str2;
        System.out.println("CLient started");
        while(!(str1=br2.readLine()).equals("ends"))
        {
            ps.println(str1);
            str2=br1.readLine();
                            System.out.println("CLient soite wenter the msg");
                System.out.println("CLient says"+str2);

        }

    }
         
    }
