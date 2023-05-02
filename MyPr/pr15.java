import java .util.*;
import java.io.*;

class Numbers
{
    void CommonFactorsDisplay(int iNo1,int iNo2)
    {
        System.out.println("Common Factors are : ");
        for(int iCnt = 1; (iCnt<=iNo1)&&(iCnt <=iNo2);iCnt++)
        {
            if((iNo1 % iCnt == 0) && (iNo2%iCnt == 0))
            {
                System.out.println(iCnt);
            }

        }

    }
}

class pr15
{
    public static void main(String s[])
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter Number 1 : ");
        int iNo1 = 0,iNo2 = 0;
        iNo1 = sobj.nextInt();
        System.out.println("Enter number 2 : ");
        iNo2 = sobj.nextInt();
        Numbers n = new Numbers();
        n.CommonFactorsDisplay(iNo1,iNo2);
    }   
}