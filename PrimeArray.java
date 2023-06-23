//wap to print all prime number in array .
//Que find pallindrome number in array {121,323,454,968,25,616,65} o/p {121,323,454,616}
import java.util.Scanner;
class PrimeArray
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter size of an array : ");
        int size = sobj.nextInt();
        int a[] = new int[size];
        System.out.println("Enter element of an array : "); 
        int i,j;

        for(i=0;i<a.length;i++)
        {
            a[i] = sobj.nextInt();
        }   
            System.out.println("Prime number in Array : ");
        for(i=0;i<a.length;i++)
        { 
            int flag = 0;

            for(j=2;j<a[i];j++)
            {
                if(a[i] % j == 0)
                {
                    flag = 1;
                    break;
                }
            }
            if(flag == 0)
            {
                System.out.println(a[i]);
            }
        }
    }
}