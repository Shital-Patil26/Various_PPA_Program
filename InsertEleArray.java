//Q insert ele at given position in an array

import java.util.Scanner;
class InsertEleArray
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter size of an array :");
        int size = sobj.nextInt();
        System.out.println("Enter elements of an array :");
        int a[] = new int[size+1];
        int i,pos,ele;
        for(i=0;i<size;i++)
        {
            a[i] = sobj.nextInt();
        }
        System.out.println("Enter element that you want to insert :");
        ele = sobj.nextInt();
         System.out.println("Enter position of an array where insert the element :");
        pos = sobj.nextInt();

        for(i=a.length-1;i>pos-1;i--)
        {
            a[i] = a[i-1];
        }
        a[pos-1] = ele;

        for(i=0;i<a.length;i++)
        {
           System.out.print(a[i]+"\t");
        }
        
        
    }
}