//wap to delete element at given index position in array

import java.util.Scanner;

class ArrayDelIndex
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        
        System.out.println("Enter size of an array : ");
        int size = sobj.nextInt();
        int a[] = new int[size];
        int i=0,index;
        System.out.println("Enter element of an array : ");
        for(i=0;i<a.length;i++)
        {
            a[i] = sobj.nextInt();
        }
        
        System.out.println("Enter index of an array to delete that element: ");
        index = sobj.nextInt();
    
        //1 2 3 4 index
        //1 2 3 4   position
        for(i = index;i<a.length-1;i++)
        {
            a[i] = a[i+1];
        }
        System.out.println("After delete element in index position array is: ");

        for(i=0;i<a.length-1;i++)
        {
            System.out.println(a[i]);
        }
    }
}