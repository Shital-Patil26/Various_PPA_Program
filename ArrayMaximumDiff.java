/*5. Write a Java program to find maximum difference between two elements in a given array of integers such that smaller element appears before larger element.

Example:
Input :
nums = { 2, 3, 1, 7, 9, 5, 11, 3, 5 }
Output:
The maximum difference between two elements of the said array elements {MaxEle - MinEle}
10
*/

class ArrayMaximumDiff
{
    public static void main(String arg[])
    {
        int a[] = {2,3,1,7,9,5,11,3,5};
        int i,j,max=0,min = a[0];
        for(i=0;i<a.length;i++)
        {
            if(a[i]>max)
            {
                max = a[i];
            }
            if(a[i]<min)
            {
                min = a[i];
            }
        }
        System.out.println("Maximum No : "+max+" \nMin no : "+min);
        System.out.println("Maximum Difference of element : "+(max-min));
        
    }
}