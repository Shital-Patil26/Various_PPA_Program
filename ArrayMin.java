import java.util.*;

class ArrayMin
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter Array Size");
        int size = sobj.nextInt();

        int a[] = new int[size];
        System.out.println("Enter array element : ");
        int i,min;
        for(i = 0;i< a.length;i++)
        {
            a[i] = sobj.nextInt();
        }
        min = a[0];
        for(i=0;i<a.length;i++)
        {
            if(a[i] < min)
            {
                min = a[i];
            }
        }
        System.out.println("Minimum element in array : "+min);
    }
}