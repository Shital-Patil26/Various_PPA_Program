import java.util.*;

class ArraySort
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
    System.out.println("Enter size of an array : ");
    int size = sobj.nextInt();

    int a[] = new int[size];
    int i,j,temp = 0;

    System.out.println("Enter array element : ");

    for(i=0;i<a.length;i++)
    {
        a[i]= sobj.nextInt();
    } 

    for(i=0;i<a.length;i++)
    {
        for(j=i+1;j<a.length;j++)
        {
            if(a[i]>a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    System.out.println("Sorted array : ");
    for(i=0;i<a.length;i++)
    {
        System.out.println(a[i]);
    }

    }
    

}