//pr1 wap input an array now delete element from array element is taken from user.

import java.util.Scanner;

class Delete_pr1
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter size of an array : ");
        int size = sobj.nextInt();

        int i,j,index = -1;
        
        int a[] = new int[size];
        System.out.println("Enter array element : ");
        for(i=0;i<a.length;i++)
        {
            a[i]=sobj.nextInt();
        }
        System.out.println("Enter element that you want to delete from an array : ");
        int ele = sobj.nextInt();

        for(i=0;i<a.length;i++)
        {
            if(a[i] == ele)
            {
                index = i;
                break;
            } 
        }
        if(index != -1)
        {
            for(i=index;i<a.length-1;i++)
            {
                a[i] = a[i+1];
            }
            System.out.println("After deleting element array is :");
            for(i=0;i<a.length-1;i++)
            {
                System.out.println(a[i]);
            }
        }
        else
        {
            System.out.println("Element not found in array ");
        }
    }
}
