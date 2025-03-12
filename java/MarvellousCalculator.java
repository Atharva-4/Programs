import java.awt.*;
import java.awt.event.*;

class Calculator extends WindowAdapter implements ActionListener
{
    public Frame mainframe;
    public Button b1,b2,b3,b4;
    public TextField t1,t2;
    public Label lobj;
    Integer no1,no2;
    
    
    public Calculator(int Width,int Heigth,String Title)
    {
        mainframe = new Frame(Title);
        mainframe.setSize(Width,Heigth);
        mainframe.addWindowListener(this);

        b1=new Button("Add");
        b2=new Button("sub");
        b3=new Button("MUl");
        b4=new Button("Div");
        
        t1=new TextField();
        t2=new TextField();
        lobj=new Label();
        b1.setBounds(20,280,80,40);
        
        b2.setBounds(110,280,80,40);
        b3.setBounds(200,280,80,40);
        b4.setBounds(290,280,80,40);

        t1.setBounds(70,100,100,40);
        t2.setBounds(220,100,100,40);
        
        lobj.setBounds(150,170,200,100);
        
        mainframe.add(b1);
        mainframe.add(b2);
        mainframe.add(b3);
        mainframe.add(b4);

     
        mainframe.add(t1);
        mainframe.add(t2);   

            mainframe.add(lobj);

            b1.addActionListener(this);
            
            b2.addActionListener(this);
            b3.addActionListener(this);
            b4.addActionListener(this);
                mainframe.setLayout(null);
        mainframe.setVisible(true);
        
    }
         
         public void windowClosing(WindowEvent obj)
    {
        System.exit(0);

    }
    public void actionPerformed(ActionEvent aobj)
    {
      try
      {
            no1=Integer.parseInt(t1.getText());
            no2=Integer.parseInt(t2.getText());

            if(aobj.getSource()==b1)
            {
                lobj.setText("Addition is:"+(no1+no2));
            }
           else if(aobj.getSource()==b2)
            {
                lobj.setText("SUb is:"+(no1-no2));
            }
            else if(aobj.getSource()==b3)
            {
                lobj.setText("mul is:"+(no1*no2));
            }else if(aobj.getSource()==b4)
            {
                lobj.setText("DIv is:"+(no1/no2));
            }


      }
    catch(Exception obj)
    {

    }
    }
}
class MarvellousCalculator
{

    public static void main( String s[])
    {
        Calculator cobj =new Calculator(400,400,"MArvellous Calculator");

    }

}