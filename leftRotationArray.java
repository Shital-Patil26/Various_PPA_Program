//left rotation of array (Anticlockwise)
//ex 1 2 3 4 5 o/p 2 3 4 5 1

import java.util.Scanner;

class leftRotationArray
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter size of array : ");
        int size = sobj.nextInt();
        int a[] = new int[size];
        int i;
        System.out.println("Enter array element : ");
         for(i=0;i<a.length;i++)
        {
            a[i] = sobj.nextInt();
        }
        int temp = a[0];
        for(i=0;i<a.length-1;i++)
        {
            a[i] = a[i+1];
        }
        a[a.length-1] = temp;
        System.out.println("After left Roattating array : ");
        for(i=0;i<a.length;i++)
        {
           System.out.println( a[i]);
        }
    }
}