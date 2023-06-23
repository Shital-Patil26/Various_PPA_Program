import java.util.Scanner;

class ArrayMerge
{
    public static void main(String arg[])
    {
        int a[] = {1,2,3,4,5};
        int b[] = {6,7,8,9,10};
        int c[] = new int[a.length+b.length];
        int i;
        for(i=0;i<a.length;i++)
        {
            c[i] = a[i];
        }
        for(i=0;i<b.length;i++)
        {
            c[a.length+i] = b[i]; 
        }
        System.out.println("Merged Array is : ");
        for(i=0;i<c.length;i++)
        {
            System.out.println(c[i]);
        }
    }
}