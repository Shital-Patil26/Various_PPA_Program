/*
iRows = 4 
iCols = 4
$   $   $   $    11 12 13 14
*   *   *   *    21 21
*   *   *   *
*   *   *   *
$   $   $   $   41 42 43 44

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
                if(i == 1 || i == iRow)
                {
                    System.out.print("$\t");
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

class prpattern11
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