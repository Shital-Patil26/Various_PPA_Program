import java.util.Scanner;

//Q14 : input an array and find its avg of first 5 element.  


class Array14
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter size of Array : ");
        int size = sobj.nextInt();

        int a[] = new int[size];
        int i;
        float sum = 0.0f;

        System.out.println("Enter array element :");
        for(i=0;i<a.length;i++)
        {
            a[i] = sobj.nextInt();
        }
        for(i=0;i<5;i++)
        {
            sum = sum + a[i];
        }
        float avg = sum / 5;

        System.out.println(" Average of first five element is : "+avg);
        
        

    }
}