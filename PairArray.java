import java.util.Scanner;
//PairArray = given ele sum = 6 ; 1 2 3 4 0 5 6 //o/p 1+5 2+4 6+0

class PairArray
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter size of an array : ");
        int size = sobj.nextInt();
        int i,j;
        int a[] = new int[size];
        System.out.println("Enter array element : ");
        for(i=0;i<a.length;i++)
        {
            a[i]=sobj.nextInt();
        }
        System.out.println("Enter element to make pair of an array for sum: ");
        int sum = sobj.nextInt();
        for(i=0;i<a.length;i++)  
        {                           
            for(j=i+1;j<a.length;j++)
            {
                if(sum == (a[i]+a[j]))
                {
                    System.out.println(a[i]+" + "+a[j]+" = "+sum);
                }
            }
        }
    }
}