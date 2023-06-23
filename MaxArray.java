//write a java program to find max number in an array
import java.util.Scanner;

class MaxArray
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter size of an array :");
        int size = sobj.nextInt();
        int i;
        int a[] = new int[size];
        System.out.println("Enter element in array : ");
        for(i = 0;i<a.length;i++)
        {
            a[i] = sobj.nextInt();
        }
        int max = a[0];
        for(i=0;i<a.length;i++)
        {
            if(max < a[i])
            {
                max = a[i];
            }
        }
        System.out.println("Maximum number in array : "+max);
    }
}