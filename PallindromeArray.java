//Que find pallindrome number in array {121,323,454,968,25,616,65} o/p {121,323,454,616}
import java.util.Scanner;
class PallindromeArray
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter size of an array : ");
        int size = sobj.nextInt();
        int a[] = new int[size];
        System.out.println("Enter element of an array : "); 
        int i;

        for(i=0;i<a.length;i++)
        {
            a[i] = sobj.nextInt();
        }   
            System.out.println("Pallindrome number in Array : ");
        for(i=0;i<a.length;i++)
        {
            int iDigit=0,iNo,iRev=0,temp;
            iNo = a[i];
            temp = a[i];
            while(iNo != 0)
            {
                iDigit = iNo % 10;
                iRev = (iRev * 10)+iDigit;
                iNo = iNo / 10;
            }
            if(iRev == a[i])
            {
                System.out.println(iRev);
            } 
        }
    }
}