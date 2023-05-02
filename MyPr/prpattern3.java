//i/p:	 4
//o/p :   
//  1   2	3	4	
//	1	2	3	4
//	1	2	3	4
//	1	2	3	4

import java.util.*;
class Pattern
{
    public void Display(int iRow,int jcol)
    {
        for(int i=1;i<=iRow;i++)
        {
            for(int j=1;j<=jcol;j++)
            {
              
                System.out.print(j+"\t");
            }
            System.out.println();
        }

    }
}
class prpattern3
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