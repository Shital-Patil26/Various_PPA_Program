/*
.

*
**
***
****
***
**
*
*/


import java.util.Scanner;

class Patternstar
{
    public static void main(String arg[])
    {
        int iNo = 4;
        int i,j,k;

        for(i=1;i<=iNo;i++)
        {
          for(j=1;j<i;j++)
          {
            System.out.print("* ");
          }
            System.out.println();
        }
        for(i=1;i<=iNo;i++)
        {
            for(j=i;j<=iNo;j++)
            {
                System.out.print("* ");
            }
            System.out.println();
        }
    }
}