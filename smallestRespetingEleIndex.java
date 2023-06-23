/*
Q2.Given an array of int arr[],the task is to find the index of first repeating ele in it i.e. the element that 
occurs more than once and whose index of the first occurence is the smallest .
Examples:

Input: arr[] = {1,4,2,5,1,3,4}
Output: 0(1 is repeting element and smallest index of 1 is 0)

*/
import java.util.Scanner;

class smallestRespetingEleIndex
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter size of an array : ");
        int size = sobj.nextInt();

        int a[] = new int[size];
        int c=0;

        int i,j,temp;
        System.out.println("Enter array Element : ");
        for(i = 0;i<a.length;i++)
        {
            a[i] = sobj.nextInt();
        }

        for(i=0;i<a.length;i++)
        {
            for(j=i+1;j<a.length;j++)
            {
                if(a[i] == a[j])
                {
                    c=1;
                    System.out.println(a[i]+"is the Smallest repeting element element and it's Index is "+i);
                    break;
                }
            }
            if(c==1)
            {
                break;
            }
        }

    
        
    }

}
