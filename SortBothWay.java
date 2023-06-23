//sort half array in asecending and decending order
//i/p { 9,1,3,5,6,11,22,66,10,19}
//o/p {1,3,5,6,9,10,66,22,19,11,10}
import java.util.Scanner;

class SortBothWay
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter size of an array : ");
        int size = sobj.nextInt();

        int i,j,temp;
        
        int a[] = new int[size];
        System.out.println("Enter array element : ");
        for(i=0;i<a.length;i++)
        {
            a[i]=sobj.nextInt();
        }
        for(i= 0;i<a.length/2;i++)
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
        for(i= a.length/2;i<a.length;i++)
        {
            for(j=i+1;j<a.length;j++)
            {
                if(a[i]<a[j])
                {
                    temp = a[i];
                    a[i] = a[j];
                    a[j] = temp;
                }
            }
        }
        System.out.println("Sorted Array : ");
        for(i=0;i<a.length;i++)
        {
            System.out.print(a[i]+"\t");
        }
        
    }
}
