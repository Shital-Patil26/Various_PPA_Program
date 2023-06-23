//wap for reverse array and store reverse array in new array

import java.util.Scanner;

class ArrayReverse
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter size of array : ");
        int size = sobj.nextInt();
        int a[]=new int[size];
        int RevArr[]=new int[size];
        int i;
        System.out.println("Enter array element :");
        for(i = 0;i<a.length;i++)
        {
            a[i] = sobj.nextInt();
        }
        int j = 0;
        for(i=(a.length-1);i>=0;i--)
        {
            RevArr[j] = a[i];
            j++;
        }
        System.out.println("Reverse given array :");
        for(i = 0;i<RevArr.length;i++)
        {
            System.out.print(RevArr[i]+"\t");
        }  
    }
}