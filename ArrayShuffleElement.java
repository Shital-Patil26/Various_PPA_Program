/*
2.Write a Java program to shuffle a given array of integers.  
Example:
Input :
nums = { 1, 2, 3, 4, 5, 6 }
Output:
Shuffle Array: [4, 2, 6, 5, 1, 3]
*/

import java.util.Scanner; 
class ArrayShuffleElement
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter size of an array : ");
        int size = sobj.nextInt();

        int a[] = new int[size];
        int i,j;
        System.out.println("Enter element of an array : ");
        for(i=0;i<a.length;i++)
        {
            a[i] = sobj.nextInt();
        }
        int ele = a[0];
        for(i=0;i<a.length-1;i++)
        {
            a[i] = a[i+1];  
        }
        a[a.length-1] = ele;
        
         System.out.println("Array after shuffling : ");
        for(i=0;i<a.length;i++)
        {
            System.out.print(a[i]+"  ");
        }
    }
}
