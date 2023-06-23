import java.util.Scanner;
//Q17 i/p an array and print element present at odd position and also find count..
// 0 1 2 3 4 i.e. index
//[1,2,3,4,5 ] a[0] = 1 i.e. 0 is the index and positionnis 1st 
// 1 2 3 4 5 i.e position
class Array17
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the size of array : ");
        int size = sobj.nextInt();
        int a[] = new int[size];
        int i,icnt = 0;

        System.out.println("Enter array element : ");
        for(i=0;i<a.length;i++)
        {
            a[i]=sobj.nextInt();
        }
      System.out.println("Elements at odd position in array : ");
        for(i=0;i<a.length;i++)
        {
            if(i % 2 == 0)
            {
              System.out.println(+a[i]);    
                 icnt++;
            }
        }        
         System.out.println("Total number of element at odd position in array "+icnt);
    }
}