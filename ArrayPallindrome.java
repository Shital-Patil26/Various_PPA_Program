//write a java prog to input 10 element in an array and check in array of element is pallindrome or not.
//if no is pallindrome collect all the pallindrome number into a new array and non-pallindrome number in another array
import java.util.Scanner;
class ArrayPallindrome
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter size of an array : ");
        int size = sobj.nextInt();
        int a[] = new int[size];
        int b[]= new int[a.length];
        int c[] = new int[a.length];

        int i,j=0,k=0;
        
        System.out.println("Enter array element :");
        for(i=0;i<a.length;i++)
        {
            a[i] = sobj.nextInt();
        }
        for(i=0;i<a.length;i++)
        {
            int temp = a[i];
            int iDigit = 0,irev = 0;
            while(temp != 0)
            {
                iDigit = temp %10; 
                irev = (irev * 10)+iDigit;
                temp = temp / 10;
            }
            if(irev == a[i])
            {
                b[j] = a[i];
                j++;
            }
            else
            {
                c[k] = a[i];
                k++;
            }
        }
        if(j>0)
        {
            System.out.println("Pallindrome Array : ");
            for(i=0;i<j;i++)
            {
                System.out.println(b[i]+" ");
            }
        }
        else
        {
            System.out.println("There is not pallindrome element present in an array ");
        }
        if(k>0)
        {
            System.out.println("Non Pallindrome Array : ");
            for(i=0;i<k;i++)
            {
                System.out.println(c[i]+" ");
            }
        }
        else
        {
             System.out.println("There is not non pallindrome element present in an array ");
        }
         
    }
}