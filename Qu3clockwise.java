//Q3.Wap input an array and rotate it in clock wise by any no give by user.
//1 2 3 4 5  o/p 5 1 2 3 4

import java.util.Scanner;
class Qu3clockwise
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter size of array : ");
        int size = sobj.nextInt();
       
        int a[] = new int[size];
    
        int i,temp;
        System.out.println("Enter element of first array : ");
        for(i=0;i<a.length;i++)
        {
            a[i] = sobj.nextInt();
        }
        temp = a[a.length-1];      
        for(i=a.length-1;i>0;i--)
        {
            a[i] = a[i-1];
        }
        a[0] = temp;
        System.out.println("After rotating clockwise Array : ");
          for(i=0;i<a.length;i++)
        {
            System.out.println(a[i]);
        }
        
    }
}