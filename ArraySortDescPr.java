import java.util.*;

class ArraySortDescPr
{
    public static void main(String arg[])
    {
        Scanner sobj =new Scanner(System.in);

        System.out.println("Enter Array size : ");
        int size = sobj.nextInt();
        int a[] = new int[size]; 
        System.out.println("Enter array element : ");
        int i,j,temp;
        for(i=0;i<a.length;i++)
        {
        a[i]=sobj.nextInt();
        }
        for(i=0;i<a.length;i++)
        {
            for(j=i+1;j<a.length;j++)
            {
                if(a[i]<a[j])
                {
                    temp = a[i];
                    a[i] = a[j];
                    a[j] = temp;
                }
            }
        }
        System.out.println("Sorted array in Decending order : ");
        for(i=0;i<a.length;i++)
        {
        System.out.println(a[i]);
        }
        
    }
}
