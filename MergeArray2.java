//Q15 wap enter two array and merge in third array a={10,20,30} b = {1,2,3} c={10,3,20,2,30,1}

import java.util.Scanner;

class MergeArray2
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
         k = b.length-1;
         j=0;
        for(i=0;i<a.length;i++)
        {
            c[j] = a[i];
            j++;
            c[j] = b[k];
            j++;
            k--;
        }
        System.out.println("Merge Array : ");
        for(i=0;i<c.length;i++)
        {
            System.out.print(c[i]+"\t");
        }
    }
}