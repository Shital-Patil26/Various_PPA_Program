//Q15 wap enter an array and print the square of the  element which is present at Even position
 //1 2 3 4 5 Position
 //0 1 2 3 4 

import java.util.Scanner;

class SquareEvenPositionArray
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
        System.out.println("Square of Odd Position Element in an Array");
        for(i=0;i<a.length;i++)
        {
            if(i%2 == 1)
            {
                 System.out.println(a[i]*a[i]+ " \t");
            }
        }
        
    }
}