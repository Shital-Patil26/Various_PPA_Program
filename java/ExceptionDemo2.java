import java.util.*;
class ExceptionDemo1
{
    public static void main(String a[])
    {
        Scanner sobj = new Scanner(System.in);
        int Arr[] = {10,20,30,40};

        System.out.println("Enter the index of array");
        int i = sobj.nextInt();

        System.out.println("Data of the specified index"+Arr[i]);
        
    }
}