//Q3.Wap input an array and rotate it in anti clock wise by any no give by user.
//i/p 1 2 3 4 5
//o/p 2 3 4 5 1
import java.util.Scanner;
class Qu3anticlkMultiple
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter size of array : ");
        int size = sobj.nextInt();
       
        int a[] = new int[size];
    
        int i,temp,j;
        System.out.println("Enter element of first array : ");
        for(i=0;i<a.length;i++)
        {
            a[i] = sobj.nextInt();
        }
        for(j=0;j<2;j++)
        {
            temp = a[0];      
            for(i=0;i<a.length-1;i++)
            {
               a[i] = a[i+1];
            }
            a[a.length-1] = temp;
        }
        
        System.out.println("After rotating 2 times anti clockwise Array : ");
          for(i=0;i<a.length;i++)
        {
            System.out.println(a[i]);
        }
        
    }
}