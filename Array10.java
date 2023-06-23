import java.util.Scanner;
//Que 10 i/p an array and find sum of odd no .
class Array10
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
        System.out.println("Odd element in the array  : ");
        for(i=0;i<a.length;i++)
        {
            if((a[i] % 2) == 1)
            {
                 isum = isum + a[i];
            }
        }        
        System.out.println("Addition of odd element is : "+isum);
    }
}