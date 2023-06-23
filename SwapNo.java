//swap 2 numbers without using 3rd variable

import java.util.Scanner;

class SwapNo
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter Two number : ");
        int iNo1 = sobj.nextInt();
        int iNo2 = sobj.nextInt();
         System.out.println("Before Swapping \n First number : "+iNo1);
        System.out.println("Second number : "+iNo2);
        
        iNo1 = iNo1 + iNo2;
        iNo2 = iNo1 - iNo2;
        iNo1 = iNo1 - iNo2;

        System.out.println("After Swapping \n First number : "+iNo1);
        System.out.println("Second number : "+iNo2);
        

        

    }
}