import java.awt.*;
import java.awt.event.*;


class GUI3
{
    public static void main(String a[])
    {
        Frame fobj =new Frame("marvellous PPA");
        fobj.setSize (400,400);
        fobj.setVisible(true);
        fobj.addWindowAdapter(new MarvellousListener());
    }
}

class MarvellousListener  extends WindowAdapter
{
    
     public void windowClosing(WindowEvent obj)
    {
        System.exit(0);

    }
    
   
    
    

}