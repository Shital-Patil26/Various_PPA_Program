import java.util.Scanner;

//Q13 : input an array and find no of 0s , no of positive,no of negitive 


class Array13
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter size of Array : ");
        int size = sobj.nextInt();

        int a[] = new int[size];
        int i,zcnt=0,pcnt=0,ncnt=0;
        System.out.println("Enter array element :");
        for(i=0;i<a.length;i++)
        {
            a[i] = sobj.nextInt();
        }
        for(i=0;i<a.length;i++)
        {
            if(a[i] == 0)
            {
                zcnt++;
            }
            else if(a[i] > 0)
            {
                pcnt++;
            }
            else
            {
                ncnt++;
            }
        }
       

        System.out.println(" Number of Positive element in array is : "+pcnt);
        System.out.println(" Number of Negetive element in array is : "+ncnt);
        System.out.println(" Number of Zero in array is : "+zcnt);
        

    }
}