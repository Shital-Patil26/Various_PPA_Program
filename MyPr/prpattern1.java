import java.util.*;
/*
iRows = 4 
iCols = 4
*   *   *   *
#   #   #   #
*   *   *   *
#   #   #   #

*/
class Pattern
{
    public void Display(int iRow,int jcol)
    {
        for(int i=1;i<=iRow;i++)
        {
            for(int j=1;j<=jcol;j++)
            {
                if(i%2 == 0)
                {
                    System.out.print("#\t");
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
class prpattern1
{
    public static void main(String a[])
    {
        Pattern pobj = new Pattern();
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter number of rows :");
         int i = sobj.nextInt();
       
       System.out.println("Enter number of rows :");
         int j = sobj.nextInt(); 

        pobj.Display(i,j);

    }
}