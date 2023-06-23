import java.util.Scanner;
//i/p array and print its first ,second and third element
class Array11
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
        System.out.println("Array second element is : "+a[1]);        
        System.out.println("Array third element is : "+a[2]);        
    }
}