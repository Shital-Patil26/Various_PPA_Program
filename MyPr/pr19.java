import java.util.*;

class ArrayX
{
    public int Arr[];

    public ArrayX(int iSize)
    {
        Arr = new int[iSize];
    }
     public void Accept()
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Please enter "+Arr.length+" elements : ");
        for(int iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            System.out.println("Enter the element no : "+ (iCnt+1));
            Arr[iCnt] = sobj.nextInt();
        }
    }
    public void Display()
    {
        System.out.println("Elements of array are : ") ;
        for(int iCnt = 0; iCnt < Arr.length; iCnt++)
        {
             System.out.print(Arr[iCnt]+"\t");
        }

        System.out.println();
    }
   
}
class rev extends ArrayX
{
    public rev(int iSize)
    {
        super(iSize);
    }
    
    public void Reverse()
    {
        int iStart = 0,temp = 0;
        int iEnd = Arr.length-1;
        while(iStart < iEnd)
        {
            temp = Arr[iStart];
            Arr[iStart] = Arr[iEnd];
            Arr[iEnd] = temp;
            iStart++;
            iEnd--;
        }
    }

}
class pr19
{
    public static void main(String arg[])
    {
         Scanner sobj = new Scanner(System.in);
        System.out.println("Please enter size of array : ");
        int iSize = sobj.nextInt();
        rev aobj = new rev(iSize);
        aobj.Accept();
        aobj.Display();
        aobj.Reverse();
        System.out.println("Reverse Array :   ");
        aobj.Display();
    }
}