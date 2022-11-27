import javax.swing.*;
import java.awt.event.*;

class Calculator
{
    public JFrame mainFrame;

    public Calculator(int width,int height,String Title)
    {
        mainFrame = new JFrame(Title);
        mainFrame.setSize(width,height);
        mainFrame.setVisible(true);
    }

}

class MarvellousCalculator
{
    public static void main(String arg[])
    {
        Calculator cobj = new Calculator(400,400,"Marvellous Calculator");
    }
}