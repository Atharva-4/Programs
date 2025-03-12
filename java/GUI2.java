import java.awt.*;
import java.awt.event.*;


class GUI2
{
    public static void main(String a[])
    {
        Frame fobj =new Frame("marvellous PPA");
        fobj.setSize (400,400);
        fobj.setVisible(true);
        fobj.addWindowListener(new MarvellousListener());
    }
}

class MarvellousListener  implements WindowListener
{
    public void windowDeactivated(WindowEvent obj)
    {}

     public void windowActivated(WindowEvent obj)
    {}

     public void windowDeiconified(WindowEvent obj)
    {}
    
     public void windowIconified(WindowEvent obj)
    {}
    
     public void windowClosed(WindowEvent obj)
    {
    }
    
     public void windowClosing(WindowEvent obj)
    {
        System.exit(0);

    }

     public void windowOpened(WindowEvent obj)
    {}
    
    
    

}