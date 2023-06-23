/*
6 find lagest among 3 numbers
*/
import java.util.Scanner;

class MaxThree
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter three number : ");
        int iNo1,iNo2,iNo3;
        iNo1=sobj.nextInt();
        iNo2=sobj.nextInt();
        iNo3=sobj.nextInt();

        if(iNo1>iNo2 && iNo1>iNo3)
        {
            System.out.println(iNo1+"  is greater number");
        }
        else if(iNo2>iNo3)
        {
            System.out.println(iNo2+" is greter number ");
        }
        else
        {
            System.out.println(iNo3+ " is greter number ");
        }
    

    }

}
