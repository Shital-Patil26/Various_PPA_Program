/*
iRows = 4 
iCols = 4
*   *   *   *
2   2   2   2
*   *   *   *
4   4   4   4

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
                if(i % 2 == 0)
                {
                    System.out.print(i+"\t");
                }
                else
                {
                    System.out.print("*\t");
                }
            }
            System.out.println();
        }

    }
}
class prpattern2
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