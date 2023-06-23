/*
3.Write a Java program to rearrange a given array of unique elements such that every second element of the array is greater than its left and right elements.  

Example:
Input          
nums= { 1, 4, 2, 9, 5, 3, 8, 7, 10, 12, 14 }
  
Output:
Array with every second element is greater than its left and right elements:
[1, 4, 2, 9, 3, 8, 5, 10, 7, 14, 12]
*/
import java.util.Scanner; 
class ArrayRearrange
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter size of an array : ");
        int size = sobj.nextInt();

        int a[] = new int[size];
        int i,j,temp;
        System.out.println("Enter element of an array : ");
        for(i=0;i<a.length;i++)
        {
            a[i] = sobj.nextInt();
        }
        
        for(i=1;i<a.length;i=i+2)
        {
            if(a[i] > a[i-1])
            {
                if(a[i] < a[i+1])
                {
                    temp = a[i];
                    a[i] = a[i+1];
                    a[i+1] = temp;
                }
            }
            else if(a[i] < a[i+1])
            {
                temp = a[i];
                a[i] = a[i+1];
                a[i+1] = temp;
            }
        }
         System.out.println("Array after Rearrange : ");
        for(i=0;i<a.length;i++)
        {
            System.out.print(a[i]+"  ");
        }
    }
}
