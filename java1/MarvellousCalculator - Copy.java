import javax.swing.*;
import java.awt.event.*;

class Calculator extends WindowAdapter implements ActionListener
{
    public JFrame mainFrame;
    public JButton b1,b2,b3,b4;
    public JTextField t1,t2;
    public JLabel lobj;
    Integer No1,No2;

    public Calculator(int width,int height,String Title)
    {
        mainFrame = new JFrame(Title);
        mainFrame.setSize(width,height);


        mainFrame.addWindowListener(this);
        b1 = new JButton("Add");
        b2 = new JButton("sub");
        b3 = new JButton("Mult");
        b4 = new JButton("Div");

        b1.setBounds(1,280,80,40);      //x,y,w,h
        b2.setBounds(90,280,80,40);
        b3.setBounds(180,280,80,40);
        b4.setBounds(270,280,80,40);
    
        mainFrame.add(b1);
        mainFrame.add(b2);
        mainFrame.add(b3);
        mainFrame.add(b4);

        t1= new JTextField();
        t2 = new JTextField();

        t1.setBounds(70,120,50,35);
        t2.setBounds(220,120,50,35);

        mainFrame.add(t1);
        mainFrame.add(t2);

        lobj = new JLabel();
        lobj.setBounds(150,25,200,100);
        mainFrame.add(lobj);
        b1.addActionListener(this);
        b2.addActionListener(this);
        b3.addActionListener(this);
        b4.addActionListener(this);

        mainFrame.setLayout(null);
        mainFrame.setVisible(true);

    }
    public void windowClosing(WindowEvent obj)
    {
        System.exit(0);
    }
    public void actionPerformed(ActionEvent obj)
    {
        try
        {
            No1 = Integer.parseInt(t1.getText());
            No2 = Integer.parseInt(t2.getText()); 
       

            if(obj.getSource() == b1)
            {
                lobj.setText("Addition is : "+(No1+No2));
            }
            else  if(obj.getSource() == b2)
            {
                lobj.setText("Substraction is : "+(No1-No2));
            }
            else if(obj.getSource() == b3)
            {
                lobj.setText("Multiplication is : "+(No1*No2));
            }
            else if(obj.getSource() == b4)
            {
                lobj.setText("Division is : "+(No1/No2));
            }
        }
        catch(Exception eobj)
        {
          
        }
    }

}

class MarvellousCalculator
{
    public static void main(String arg[])
    {
        Calculator cobj = new Calculator(400,400,"Marvellous Calculator");
    }
}