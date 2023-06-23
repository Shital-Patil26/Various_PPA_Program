/*
1.
    *
   ***
  *****
 *******
*********
 *******
  *****
   ***
    *
*/
import java.util.Scanner;

class PatternInDe
{
    public static void main(String arg[])
    {
        int iNo = 9;
        int i,j;

        for(i=1;i<=iNo;i++)
        {
            for(j=i;j<=iNo;j++)
            {
                System.out.print(" ");
            }
            
            for(j=1;j<=i;j++)
            {
                if((j==1|| i==j||i==9) && i%2 != 0)
                    System.out.print(" *");
                else
                    System.out.print("  ");
            }
            System.out.println();
        }
       
    }
}