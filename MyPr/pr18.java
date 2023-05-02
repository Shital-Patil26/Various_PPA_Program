import java.util.*;
class ArrayX
{
    public int Arr[];
    public ArrayX(int Size)
    {
        Arr = new int [Size];
    }
    public void Accept()
    {
        Scanner sobj = new Scanner(System.in);
       System.out.println("Enter element of array ");
        for(int i = 0;i < Arr.length;i++)
        {
            Arr[i] = sobj.nextInt(); 
        }
    }
    public void Display()
    {
         System.out.println("Element of array are :\n");
        for(int i = 0;i < Arr.length;i++)
        {
            System.out.println(Arr[i]);
        }
    }

    public int Addition()
    {
        int iSum = 0;
       for(int i = 0;i < Arr.length;i++)
        {
            iSum = iSum + Arr[i];
        }
        return iSum;
    }
}

class pr18
{
    public static void main(String arg[])
    {    
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter Size of Array :");
        int n = sobj.nextInt();
        ArrayX obj = new ArrayX(n);
        obj.Accept();
        obj.Display();
        int iSum = obj.Addition();
        System.out.println("Addition of array elements are : "+iSum);
    }
}