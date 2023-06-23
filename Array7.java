import java.util.Scanner;
//Que 7 i/p an array and find print even no .
class Array7
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
        System.out.println("Even element in the array  : ");
        for(i=0;i<a.length;i++)
        {
            if((a[i] % 2) == 0)
            {
                 System.out.println(a[i]);
            }
        }        
    }
}