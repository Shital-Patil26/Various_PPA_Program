import java.util.Scanner;
//Que 9 i/p an array and find find the sum of even no .
class Array9
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
        System.out.println("Even element in the array  : ");
        for(i=0;i<a.length;i++)
        {
            if((a[i] % 2) == 0)
            {
                 isum = isum + a[i];
            }
        }        
        System.out.println("Addition of even element is "+isum);
    }
}