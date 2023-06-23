//Q1.Wap to find armstrong series//153 1*1*1+5*5*5+3*3*3 = 153

import java.util.Scanner;

class armstrongSeries1
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter first and last number for amstrong series :");
        int first = sobj.nextInt();
        int last = sobj.nextInt();

        int i;
        System.out.println("Armstrong series : ");
        for(i= first;i<=last;i++)
        {
            int temp = i;
            int iDigit =0,isum = 0;
            while(temp != 0)
            {
                iDigit = temp % 10;
                isum = isum+(iDigit*iDigit*iDigit);
                temp =temp/10;
            }
            if(i == isum)
            {
                System.out.println(i+" ");
            }
        }

    }
}