//Q15 wap enter an array and search any two element and print the result
 
import java.util.Scanner;

class SearchTwoEleArray
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter size of an array : ");
        int size = sobj.nextInt();

        int i,j,c;
        
        int a[] = new int[size];
        System.out.println("Enter array element : ");
        for(i=0;i<a.length;i++)
        {
            a[i]=sobj.nextInt();
        }
        System.out.println("Enter two element that you want to search in an array : ");
        int Element1 = sobj.nextInt();
        int Element2 = sobj.nextInt();
        int first = 0,Second = 0 ;
        for(i=0;i<a.length;i++)
        {
            if(a[i] == Element1)
            {
                first++;
            }
            else if(a[i] == Element2)
            {
                Second++;
            }
        }
        if(first>0 && Second >0)
        {
            System.out.println("Both "+Element1+" And "+Element2+" is present in array");
        }
        else if(first > 0 && Second == 0)
        {
            System.out.println("Only "+Element1+" is present in array "+Element2 + " Not Present " );
        }
        else if(Second > 0 && first == 0)
        {
            System.out.println("Only "+Element2+" is present in array "+Element1 + " Not Present " );
        }
        else
        {
            System.out.println("Both element is not present in an array ");
        }
        
    }
}