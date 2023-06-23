// 1.Write a Java program to find maximum product of two integers in a given array of integers.
import java.util.Scanner; 
class ArrayMaxProduct
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter size of an array : ");
        int size = sobj.nextInt();

        int a[] = new int[size];
        int i,j,max,secMax,ProductMax;
        System.out.println("Enter element of an array : ");
        for(i=0;i<a.length;i++)
        {
            a[i] = sobj.nextInt();
        }
        max = 0;
        secMax = 0;
        for(i=0;i<a.length;i++)
        {
            for(j=0;j<a.length;j++)
            {
                if(max < a[i])
                {
                    secMax = max;
                    max = a[i];
                }
                else if(secMax < a[i] && a[i] < max)
                {
                    secMax = a[i];
                }
            }
        }
    
        ProductMax = max * secMax ;
        System.out.println("Maximum Product of two integers : "+ProductMax);
        

    }
}
