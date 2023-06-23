import java.util.Scanner;

//Q12 : input an array and find sum of 1 st 2nd and 3rd element

class Array12
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter size of Array : ");
        int size = sobj.nextInt();

        int a[] = new int[size];
        int i,isum = 0;
        System.out.println("Enter array element :");
        for(i=0;i<a.length;i++)
        {
            a[i] = sobj.nextInt();
        }
        isum = a[0]+a[1]+a[2];

        System.out.println("Addition of 1st 2nd and 3rd elemnt is : "+isum );

    }
}