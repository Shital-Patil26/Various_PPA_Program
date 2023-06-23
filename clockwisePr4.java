import java.util.Scanner;

class clockwisePr4
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter size :");
        int size = sobj.nextInt();

        int a[] = new int[size]; 
        int i,j,temp;
        System.out.println("Enter Array Element : ");
        for(i=0;i<a.length;i++)
        {
            a[i] = sobj.nextInt();
        }
        temp = a[a.length-1];
        for(i = a.length-1;i>0;i--)
        {
            a[i]=a[i-1];
        }
        a[0]=temp;
          System.out.println("Array After Rotating is : ");
        for(i=0;i<a.length;i++)
        {
            System.out.print(a[i]+"\t");
        }
    }
}