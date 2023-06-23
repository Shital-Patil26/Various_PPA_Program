/*
Q10.Given an array arr[] of integers, segregate even and odd numbers in the array. Such that all
 the even numbers should be present first, and then the odd numbers.
 Examples:
 Input: arr[] = 1 9 5 3 2 6 7 11
 Output: 2 6 5 3 1 9 7 11*/
 
import java.util.Scanner; 
class ArraySegreate
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter size of an array : ");
        int size = sobj.nextInt();

        int a[] = new int[size];
        int b[] = new int[a.length];
      
        int i,j;
        System.out.println("Enter element of an array : ");
        for(i=0;i<a.length;i++)
        {
            a[i] = sobj.nextInt();
        }
        System.out.println("Sort : ");
        for(i=0;i<a.length;i++)
        {
            if(a[i] % 2 == 0)
            {
                System.out.print(a[i]+" ");
            } 
            
        }  
            
        for(i=0;i<a.length;i++)
        {
            if(a[i] % 2 == 1)
            {
                System.out.print(a[i]+" ");     
            }  
        }   
    }
}
