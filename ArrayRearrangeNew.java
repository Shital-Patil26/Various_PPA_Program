import java.util.*;
class ArrayRearrangeNew 
{
    public static void main(String[] args) 
    {
       int a[]={ 1, 4, 2, 9, 5, 3, 8, 7, 10, 12, 14 };
       Arrays.sort(a);
       int b[]=new int[a.length];
       
       int left=0;
       int right=a.length-1;
       
       for(int i=0;i<a.length;i=i+2)
       {
           b[i]=a[left];
           left++;
           if(i+1<a.length)
           {
               b[i+1]=a[right];
               right--;
           }
       }
       for(int i=0;i<b.length;i++)
       {
           System.out.print(b[i]+" ");
       }
    }
}