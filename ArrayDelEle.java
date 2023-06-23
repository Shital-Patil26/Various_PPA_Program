//Que . wap to take input a number from user and delete that element if found. if ele isnot found then display msg " number not present in array".

import java.util.Scanner;

class ArrayDelEle
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter size : ");
        int size = sobj.nextInt();

        int a[] = new int[size];

        System.out.println("Enter element of an array :");
        int i,index = -1;
        for(i=0;i<a.length;i++)
        {
            a[i] = sobj.nextInt();
        }
        
        System.out.println("Enter element that you want to delete : ");
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
            
             System.out.println("After deleting element Array is :");
            
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