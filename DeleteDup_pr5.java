//wap input an array and delete all duplicate element from array
//pr1 wap input an array now delete element from array element is taken from user.

import java.util.Scanner;

class DeleteDup_pr5
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
        
        System.out.println("After Deleting Duplicate element in array : ");
        for(i=0;i<a.length;i++)
        {
            c = 0;
            for(j = i+1;j<a.length;j++)
            {
                if(a[i] == a[j])
                {
                    c++;
                    break;
                } 
            }
            if(c==0)
            {
               System.out.println(a[i]);
            }
        }  
    }
}
