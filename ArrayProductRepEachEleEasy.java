/*

4.Write a Java program to replace each element of the array with product of every other element in a given array of integers.

Example:
Input :
nums1 = { 1, 2, 3, 4, 5, 6, 7}
nums2 = {0, 1, 2, 3, 4, 5, 6, 7}
Output:
Array with product of every other element:
[5040, 2520, 1680, 1260, 1008, 840, 720]
Array with product of every other element:
[5040, 0, 0, 0, 0, 0, 0, 0]
*/

import java.util.Scanner; 
class ArrayProductRepEachEleEasy
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter size of an array : ");
        int size = sobj.nextInt();

        int a[] = new int[size];
      

        int i,j,Mult=1;
        System.out.println("Enter element of an array : ");
        for(i=0;i<a.length;i++)
        {
            a[i] = sobj.nextInt();
        }
       
        for(i=0;i<a.length;i++)
        {
            Mult = a[i] * Mult ;
        }
        System.out.println("Output Array after multipling ele : ");
         for(i=0;i<a.length;i++)
       {
           System.out.print(Mult/a[i]+" ");
       }
        

    }
}
