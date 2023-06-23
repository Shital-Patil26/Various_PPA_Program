//Maximum element in array
import java.util.Scanner;

class MaxArray1
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter size of an array : ");
        int size = sobj.nextInt();
        int a[] = new int[size];
        System.out.println("Enter element of an array : "); 
        int i,iMax;

        for(i=0;i<a.length;i++)
        {
            a[i] = sobj.nextInt();
        }   
        iMax=a[0];    
        for(i=0;i<a.length;i++)
        {
            if(a[i] > iMax)
            {
                iMax = a[i];
            }
        }
        System.out.println("Maximum element of an array : "+iMax);
    }
}