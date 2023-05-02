import java.util.*;
/*
input : 4529
output :  
9   2   5   4
9   2   5   4
9   2   5   4
9   2   5   4

*/
class Pattern
{
    public void Display(int iNo)
    {
        int Temp = iNo;
        int iDigit = 0;
        while(Temp != 0)
        {
            int iTemp2 = iNo;
            while(iTemp2 != 0)
            {
                iDigit = iTemp2 % 10;
                System.out.print(iDigit+"\t");
                iTemp2 = iTemp2/10;
            }
            System.out.println();
            Temp = Temp/10;
        }

    }
}
class prpatternNo
{
    public static void main(String a[])
    {
        Pattern pobj = new Pattern();
        Scanner sobj = new Scanner(System.in);

       System.out.println("Enter Number :");
        int iNo = sobj.nextInt();

         pobj.Display(iNo);
    }
}