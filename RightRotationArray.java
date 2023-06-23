//Right rotation of array (clockwise )
//ex 1 2 3 4 5 o/p 5 1 2 3 4

import java.util.Scanner;

class RightRotationArray
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
        int temp = a[a.length-1];

        for(i=a.length-1;i>0;i--) // copy last sec to last
        {
            a[i] = a[i-1];
        }
        a[0] = temp;
        System.out.println("After right Rotating array : ");
        for(i=0;i<a.length;i++)
        {
           System.out.println( a[i]);
        }
    }
}