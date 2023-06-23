//pr1 wap input an array now delete element from array,position is taken from user.

import java.util.Scanner;

class DeletePos_pr2
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter size of an array : ");
        int size = sobj.nextInt();

        int i,j;
        
        int a[] = new int[size];
        System.out.println("Enter array element : ");
        for(i=0;i<a.length;i++)
        {
            a[i]=sobj.nextInt();
        }
        System.out.println("Enter position that you want to delete from an array : ");
        int index = sobj.nextInt();
         
        for(i=index-1;i<a.length-1;i++)
        {
            a[i] = a[i+1];
        }
        System.out.println("After deleting element array is :");
        for(i=0;i<a.length-1;i++)
        {
                System.out.println(a[i]);
        }
    }
}
