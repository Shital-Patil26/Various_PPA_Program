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
    public int Average()
    {
        int iSum = 0;
        for(int iCnt = 0; iCnt < iSize; iCnt++)
        {
            iSum = iSum + Arr[iCnt];
        }
        return iSum/iSize;
    }
}
class Array8
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter the size of array : ");
        int iLength = sobj.nextInt();
        
        ArrayX obj1 = new ArrayX(iLength);
        obj1.Accept();
        
        int iRet = obj1.Average();
        System.out.println("Average of array :"+iRet);
    }
}