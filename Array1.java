import java.util.Scanner;
//Que 1 :i/p an array and print it.
class Array1
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
        System.out.println("Array element are : ");
        for(i=0;i<a.length;i++)
        {
            System.out.println(a[i]);  
        }
        System.out.println("Size of array is: "+a.length);


        
    }
}