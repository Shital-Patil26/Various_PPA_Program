import java.util.Scanner;
//initialise an array and print it 
class Array2
{
    public static void main(String arg[])
    {
        int i;
        int a[] = {6,5,7,8,2,4,3,7,1,9};
        System.out.println("Array element are : ");
        for(i=0;i<a.length;i++)
        {
            System.out.println(a[i]);  
        }
        System.out.println("Size of array is: "+a.length);  
    }
}