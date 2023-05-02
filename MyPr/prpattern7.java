/*
    Row = 4
    Col = 4

    @   2   3   4
    1   @   3   4
    1   2   @   4
    1   2   3   @    

*/

import java.util.*;
class Pattern
{
    public void Display(int iRow,int jcol)
    {
        for(int i=1;i<=iRow;i++)
        {
            for(int j=1;j<=jcol;j++)
            {              
                if(i == j)
                {
                    System.out.print("@\t");
                }
                else
                {
                    System.out.print(j+"\t");
                }
            }
            System.out.println();
        }

    }
}
class prpattern7
{
    public static void main(String a[])
    {
        Scanner sobj = new Scanner(System.in);
        Pattern p = new Pattern();
        
        System.out.println("Enter number of Rows:");
        int i = sobj.nextInt();
         System.out.println("Enter number of cols:");
        int j = sobj.nextInt();
        p.Display(i,j);
    }
}