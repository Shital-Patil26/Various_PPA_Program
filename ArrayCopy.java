import java.util.*;

class ArrayCopy
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter size : ");
        int size = sobj.nextInt();
        int a[] = new int[size];
        int b[] = new int[size];
        int i;
        System.out.println("Enter array element : ");
        for(i=0;i<a.length;i++)
        {
            a[i] = sobj.nextInt();
        }
        for(i=0;i<a.length;i++)
        {
            b[i] = a[i];
        }
        System.out.println("Copied  array : ");
         for(i=0;i<a.length;i++)
        {
            System.out.print("\t"+b[i]);
        }

        

    }
}