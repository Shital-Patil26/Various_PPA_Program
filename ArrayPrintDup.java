//print duplicate in an array

import java.util.Scanner;

class ArrayPrintDup
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter size of an array : ");
        int size = sobj.nextInt();
        int a[] = new int[size];
        int i,j;
        System.out.println("Enter element in array : ");
        for(i=0;i<a.length;i++)
        {
            a[i] = sobj.nextInt();
        }
        System.out.println("After deleting duplicate entry : ");
        for(i=0;i<a.length;i++)
        {
            for(j=i+1;j<a.length;j++)
            {
                if(a[i] == a[j])
                {
                     System.out.println(a[i]);
                }
            }
          
        }
    }
}