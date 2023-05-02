import java.io.*;
import java.util.*;
class Numbers
{
    public int CountDigits(int n)
    {
        int icnt = 0;
        while(n != 0)
        {
            icnt++;
            n=n/10;
        }
        System.out.println("Digit are"+icnt);
        return icnt;
    }
    public int power(int base,int index)
    {
        int iAns = 1;
        for(int i =1;i<=index;i++)
        {
            iAns = iAns * base;
        }
        System.out.println("power :"+iAns);

        return iAns;
    }

    public boolean Armstrong(int iNo)
    {
        int iDigit = 0,iSum = 0;
        int temp = iNo,iRet = 0;
        int digitcount = CountDigits(iNo);
        while(iNo != 0)
        {
            iDigit = iNo % 10;
            iRet = power(iDigit,digitcount);
            iSum = iSum + iRet;
            iNo = iNo / 10;
        }
        System.out.println("Result "+iSum);
        if(iSum == temp)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}
class pr16
{
    public static void main(String arg[])
    {
        int No = 0;
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number :");
        No = sobj.nextInt();

        Numbers nobj = new Numbers();
        boolean bret = nobj.Armstrong(No);

        if(bret == true)
        {
            System.out.println("Given number is armstrong");
        }        
        else
        {
            System.out.println("Given number isnot armstrong");
        }

    }
    
}