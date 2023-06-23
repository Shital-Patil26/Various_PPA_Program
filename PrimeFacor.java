//wap to find prime factor of number
import java.util.Scanner;

class PrimeFacor
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number : ");
        int iNo = sobj.nextInt();
        int i,j;

        for(i=2;i<=iNo;i++)
        {
            if(iNo%i == 0)
            {
                int count = 0;
                for(j=1;j<=i;j++)
                {
                    if(i%j == 0)
                        count++;
                }
                if(count == 2)
                {
                    System.out.println(i+" ");
                }
            }
        }

        

    }
}