//Q15 wap enter two array and merge in third array 

import java.util.Scanner;

class MergeArray
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter size of two array : ");
        int size1 = sobj.nextInt();
        int size2 = sobj.nextInt();

        int i,j,k;
        
        int a[] = new int[size1];
        int b[] = new int[size2];
        int c[] = new int[a.length+b.length];
        System.out.println("Enter First array element : ");
        for(i=0;i<a.length;i++)
        {
            a[i]=sobj.nextInt();
        }
         System.out.println("Enter Second array element : ");
        for(i=0;i<b.length;i++)
        {
            b[i]=sobj.nextInt();
        }
        for(i=0;i<a.length;i++)
        {
            c[i] = a[i];
        }
        k = a.length;
        for(i=0;i<b.length;i++)
        {
            c[k+i] = b[i];
        }
        System.out.println("Merge Array : ");
        for(i=0;i<c.length;i++)
        {
            System.out.print(c[i]+"\t");
        }
    }
}