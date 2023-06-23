import java.util.Scanner;
//Que 6 i/p an array and find its average.
class Array6
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter the size of array : ");
        int size = sobj.nextInt();
        int a[] = new int[size];
        int i;
        float isum = 0.0f;

        System.out.println("Enter array element : ");
        for(i=0;i<a.length;i++)
        {
            a[i]=sobj.nextInt();
        }
        System.out.println("Array element are : ");
        for(i=0;i<a.length;i++)
        {
            System.out.println(a[i]);  
            isum = isum + a[i];
        }
        System.out.println("Sum of array element is : "+isum);
        float avg = isum/a.length;
        System.out.println("Average of Array : "+avg);


        
    }
}