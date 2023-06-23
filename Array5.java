import java.util.Scanner;
//que 5 i/p an array and sum it.
class Array5
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the size of array : ");
        int size = sobj.nextInt();
        int a[] = new int[size];
        int i,isum = 0;
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


        
    }
}