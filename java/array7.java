//WAP for accept N number from user and store it into array and display largest element from array

import java.util.Scanner;
class ArrayX
{
    public int Arr[];
    public int iSize;

    public ArrayX(int No)
    {
        this.iSize = No ;
        this.Arr = new int[iSize];
    }
    public void Accept()
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter Elements in array");
        for(int iCnt = 0 ; iCnt < iSize; iCnt++)
        {
                Arr[iCnt] = sobj.nextInt();
        }
    }
    public void Display()
    {
        System.out.println("Elements of array are :");
        for(int iCnt = 0; iCnt < iSize; iCnt++)
        {
            System.out.println(Arr[iCnt]);   
        }
    }
    public int Largest()
    {
        int iMax = 0;
        for(int iCnt = 0; iCnt < iSize; iCnt++)
        {
            if(iMax < Arr[iCnt])
            {
                iMax = Arr[iCnt];
            }
        }
        return iMax;
    }
}
class Array7
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter the size of array : ");
        int iLength = sobj.nextInt();
        ArrayX obj1 = new ArrayX(iLength);
        obj1.Accept();

        int iRet = obj1.Largest();
        System.out.println("Maximum Elements of array :"+iRet);
    }
}