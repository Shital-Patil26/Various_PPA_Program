//28 is a perfect no 1 +2+ 4 +7 +14 ==28 then it perfect
import java.util.Scanner;

class PerfectNumber
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter no :");
        int n = sobj.nextInt();
        int sum = 0,i;
        for(i=1;i<n;i++)
        {
            if(n%i == 0)
            {
                sum = sum + i;
            }
        }
        if(sum == n)
        {
            System.out.println(n+" Number is perfect ");
        }
        else
        {
            System.out.println(n+" Number isnot perfect");
        }
    }
} 