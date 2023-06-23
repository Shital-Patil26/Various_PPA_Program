import java.util.Scanner;

class ArrayMerge2
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
         System.out.println("Enter size1 : ");
         int size1 = sobj.nextInt();
         System.out.println("Enter size2 : ");
         int size2 = sobj.nextInt();

        int a[] = new int[size1];
        int b[] = new int[size2];

        int c[] = new int[a.length+b.length];
        int i,k=0,p = b.length-1;
         
        System.out.println("Enter first array element : ");
        for(i = 0;i< a.length;i++)
        {
            a[i] = sobj.nextInt();
        }
        System.out.println("Enter second array element : ");
        for(i = 0;i< b.length;i++)
        {
            b[i] = sobj.nextInt();
        }
        
        for(i=0;i<a.length;i++)
        {
                c[k] = a[i];
                k++;
                c[k] = b[p];
                k++;
                p--;
        }
       
        System.out.println("Merged Array is : ");
        for(i=0;i<c.length;i++)
        {
            System.out.println(c[i]);
        }

    }
}