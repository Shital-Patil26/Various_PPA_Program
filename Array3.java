import java.util.Scanner;
//i/p array and print its first and last element
class Array3
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the size of array : ");
        int size = sobj.nextInt();
        int a[] = new int[size];
        int i;
        System.out.println("Enter array element : ");
        for(i=0;i<a.length;i++)
        {
            a[i]=sobj.nextInt();
        }
        System.out.println("Array First element is : "+a[0]);
        System.out.println("Array Last element is : "+a[a.length-1]);        
    }
}