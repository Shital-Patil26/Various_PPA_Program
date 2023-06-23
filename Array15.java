import java.util.Scanner;
//Que 15 i/p an array and print the sum and count even no .
class Array15
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the size of array : ");
        int size = sobj.nextInt();
        int a[] = new int[size];
        int i,isum = 0,icnt = 0;

        System.out.println("Enter array element : ");
        for(i=0;i<a.length;i++)
        {
            a[i]=sobj.nextInt();
        }
      
        for(i=0;i<a.length;i++)
        {
            if((a[i] % 2) == 0)
            {
                 isum = isum + a[i];
                 icnt++;
            }
        }        
        System.out.println("Addition of even element is "+isum);
         System.out.println("Total number of even element in array "+icnt);
    }
}