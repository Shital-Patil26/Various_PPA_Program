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

class Pyramid
{
    public static void main(String arg[])
    {
        int iNo = 4;
        int i,j,k;

        for(i=1;i<=iNo;i++)
        {
          for(j=i;j<iNo;j++)
          {
            System.out.print(" ");
          }
          for(j=1;j<=i;j++)
          {
            System.out.print("*");
          }
          for(k=2;k<=i;k++)
          {
            System.out.print("*");
          }
          System.out.println();
        }
        for(i=1;i<iNo;i++)
        {
            for(j=1;j<=i;j++)
            {
                System.out.print(" ");
            }
            for(j=i;j<iNo;j++)
            {
                System.out.print("*");
            }
            for(k=i+1;k<iNo;k++)
            {
                System.out.print("*");
            }
            System.out.println();
        }
    }
}