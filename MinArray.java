//minimum element in array
import java.util.Scanner;

class MinArray
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter size of an array : ");
        int size = sobj.nextInt();
        int a[] = new int[size];
        System.out.println("Enter element of an array : "); 
        int i,iMin;

        for(i=0;i<a.length;i++)
        {
            a[i] = sobj.nextInt();
        }   
        iMin=a[0];    
        for(i=0;i<a.length;i++)
        {
            if(a[i] < iMin)
            {
                iMin = a[i];
            }
        }
        System.out.println("Minimum element of an array : "+iMin);

    }
}